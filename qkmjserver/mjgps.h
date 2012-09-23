#ifndef __MJGPS_H__
#define __MJGPS_H__

#define DEFAULT_GPS_PORT 7001
#define DEFAULT_GPS_IP "173.255.245.16"
#define MAX_PLAYER 300
#define ASK_MODE 1
#define CMD_MODE 2

#define RECORD_FILE "/var/qkrecord/qkmj.rec"
#define INDEX_FILE "/var/qkrecord/qkmj.inx"
#define NEWS_FILE "/var/qkrecord/news.txt"
#define BADUSER_FILE "/var/qkrecord/baduser.txt"
#define LOG_FILE "/var/qkrecord/qkmj.log"

#define DEFAULT_RECORD_FILE "/home/tonyq/qkrecord/qkmj.rec"
#define DEFAULT_MONEY 0


struct player_record
{
    unsigned int id;
    char name[20];
    char password[15];
    long money;
    int level;
    int login_count;
    int game_count;
    long regist_time;
    long last_login_time;
    char last_login_from[60];
};

struct player_info
{
    int sockfd;
    int login;
    unsigned int id;
    char name[20];
    char username[30];
    long money;
    int serv;
    int join;
    int type;
    char note[80];
    int input_mode;
    int prev_request;
    struct sockaddr_in addr;
    int port;
    char version[10];
};

struct record_index_type
{
    char name[20];
    unsigned int id;
};

struct ask_mode_info
{
    int question;
    int answer_ok;
    char *answer;
};

char *lookup (struct sockaddr_in *);
char *genpasswd (char *);
int checkpasswd (char *, char *);

int check_user (int);
void write_record ();
void close_id (int);
void close_connection (int);
void shutdown_server ();


#endif
