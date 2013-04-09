#include "hw_config.h"

#define SPARK_BUF_LEN	32

//#define BYTE_N(x,n) (((x) >> n*8) & 0x000000FF)

//#define SPARK_SERVER_IP	"54.235.79.249"
#define SPARK_SERVER_PORT	8989

// Spark end-of-line character
//const char spark_crlf[] = "\r\n";

// Spark Server/Core common messages
const char spark_high[] = {'H','I','G','H',' '};			//"HIGH "
const char spark_low[] = {'L','O','W',' '};					//"LOW "
char spark_dx[] = {'D',' ','\n'};							//"D "

// Spark Core specific messages
const char core_secret[] = {'s','e','c','r','e','t','\n'};	//"secret"
const char core_id[] = {'s','a','t','i','s','h','\n'};		//"satish"
const char core_ok[] = {'O','K',' '};						//"OK "
const char core_fail[] = {'F','A','I','L',' '};				//"FAIL "

// Spark Server specific messages
const char server_ready[] = {'w','h','o'};					//"who"

char Spark_Connect(void);
void Spark_Disconnect(void);
void Spark_Send_Device_Message(long socket, char * cmd, char * cmdparam, char * respBuf);
void Spark_Process_API_Response();

uint8_t atoc(char data);
uint16_t atoshort(char b1, char b2);
unsigned char ascii_to_char(char b1, char b2);
