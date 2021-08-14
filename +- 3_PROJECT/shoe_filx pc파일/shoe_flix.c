
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    "shoe_flix.pc"
};


static unsigned int sqlctx = 323179;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[6];
   unsigned int   sqhstl[6];
            int   sqhsts[6];
            void  *sqindv[6];
            int   sqinds[6];
   unsigned int   sqharm[6];
   unsigned int   *sqharc[6];
   unsigned short  sqadto[6];
   unsigned short  sqtdso[6];
} sqlstm = {13,6};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,1,0,0,30,93,0,0,0,0,0,1,0,
20,0,0,2,0,0,17,149,0,0,1,1,0,1,0,1,97,0,0,
39,0,0,2,0,0,45,152,0,0,0,0,0,1,0,
54,0,0,2,0,0,13,155,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,
81,0,0,2,0,0,15,175,0,0,0,0,0,1,0,
96,0,0,3,0,0,24,206,0,0,1,1,0,1,0,1,97,0,0,
115,0,0,4,0,0,29,209,0,0,0,0,0,1,0,
130,0,0,5,0,0,24,339,0,0,1,1,0,1,0,1,97,0,0,
149,0,0,6,0,0,29,341,0,0,0,0,0,1,0,
164,0,0,7,0,0,29,347,0,0,0,0,0,1,0,
179,0,0,2,0,0,17,385,0,0,1,1,0,1,0,1,97,0,0,
198,0,0,2,0,0,45,387,0,0,0,0,0,1,0,
213,0,0,2,0,0,13,390,0,0,1,0,0,1,0,2,3,0,0,
232,0,0,8,0,0,24,393,0,0,1,1,0,1,0,1,97,0,0,
251,0,0,9,0,0,29,398,0,0,0,0,0,1,0,
266,0,0,10,0,0,29,402,0,0,0,0,0,1,0,
281,0,0,2,0,0,15,404,0,0,0,0,0,1,0,
296,0,0,11,0,0,24,421,0,0,1,1,0,1,0,1,97,0,0,
315,0,0,12,0,0,29,422,0,0,0,0,0,1,0,
330,0,0,0,0,0,27,434,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
361,0,0,2,0,0,17,486,0,0,1,1,0,1,0,1,97,0,0,
380,0,0,2,0,0,45,488,0,0,0,0,0,1,0,
395,0,0,2,0,0,13,494,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
426,0,0,2,0,0,15,506,0,0,0,0,0,1,0,
441,0,0,2,0,0,17,528,0,0,1,1,0,1,0,1,97,0,0,
460,0,0,2,0,0,45,530,0,0,0,0,0,1,0,
475,0,0,2,0,0,13,536,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,
0,0,
514,0,0,2,0,0,15,551,0,0,0,0,0,1,0,
529,0,0,14,0,0,29,552,0,0,0,0,0,1,0,
544,0,0,2,0,0,17,582,0,0,1,1,0,1,0,1,97,0,0,
563,0,0,2,0,0,45,585,0,0,0,0,0,1,0,
578,0,0,2,0,0,13,593,0,0,4,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
609,0,0,15,0,0,29,607,0,0,0,0,0,1,0,
624,0,0,16,0,0,24,636,0,0,1,1,0,1,0,1,97,0,0,
643,0,0,17,0,0,29,638,0,0,0,0,0,1,0,
658,0,0,18,0,0,29,644,0,0,0,0,0,1,0,
673,0,0,19,0,0,24,676,0,0,1,1,0,1,0,1,97,0,0,
692,0,0,20,0,0,29,678,0,0,0,0,0,1,0,
707,0,0,21,0,0,29,682,0,0,0,0,0,1,0,
722,0,0,2,0,0,17,716,0,0,1,1,0,1,0,1,97,0,0,
741,0,0,2,0,0,45,718,0,0,0,0,0,1,0,
756,0,0,2,0,0,13,726,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
791,0,0,22,0,0,29,743,0,0,0,0,0,1,0,
806,0,0,2,0,0,17,763,0,0,1,1,0,1,0,1,97,0,0,
825,0,0,2,0,0,45,766,0,0,0,0,0,1,0,
840,0,0,2,0,0,13,772,0,0,5,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,
875,0,0,2,0,0,15,785,0,0,0,0,0,1,0,
890,0,0,23,0,0,24,856,0,0,1,1,0,1,0,1,97,0,0,
909,0,0,24,0,0,29,859,0,0,0,0,0,1,0,
924,0,0,25,0,0,24,917,0,0,1,1,0,1,0,1,97,0,0,
943,0,0,26,0,0,29,920,0,0,0,0,0,1,0,
958,0,0,27,0,0,24,984,0,0,1,1,0,1,0,1,97,0,0,
977,0,0,28,0,0,29,987,0,0,0,0,0,1,0,
992,0,0,29,0,0,24,1042,0,0,1,1,0,1,0,1,97,0,0,
1011,0,0,30,0,0,29,1045,0,0,0,0,0,1,0,
1026,0,0,31,0,0,24,1097,0,0,1,1,0,1,0,1,97,0,0,
1045,0,0,32,0,0,29,1100,0,0,0,0,0,1,0,
1060,0,0,33,0,0,24,1167,0,0,1,1,0,1,0,1,97,0,0,
1079,0,0,34,0,0,29,1170,0,0,0,0,0,1,0,
1094,0,0,35,0,0,24,1229,0,0,1,1,0,1,0,1,97,0,0,
1113,0,0,36,0,0,29,1232,0,0,0,0,0,1,0,
1128,0,0,37,0,0,24,1249,0,0,1,1,0,1,0,1,97,0,0,
1147,0,0,38,0,0,29,1252,0,0,0,0,0,1,0,
1162,0,0,2,0,0,17,1268,0,0,1,1,0,1,0,1,97,0,0,
1181,0,0,2,0,0,45,1270,0,0,0,0,0,1,0,
1196,0,0,2,0,0,13,1277,0,0,2,0,0,1,0,2,9,0,0,2,9,0,0,
1219,0,0,2,0,0,15,1284,0,0,0,0,0,1,0,
1234,0,0,2,0,0,17,1320,0,0,1,1,0,1,0,1,97,0,0,
1253,0,0,2,0,0,45,1322,0,0,0,0,0,1,0,
1268,0,0,2,0,0,13,1330,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,
1307,0,0,39,0,0,29,1344,0,0,0,0,0,1,0,
1322,0,0,2,0,0,17,1377,0,0,1,1,0,1,0,1,97,0,0,
1341,0,0,2,0,0,45,1380,0,0,0,0,0,1,0,
1356,0,0,2,0,0,13,1388,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,
1395,0,0,40,0,0,29,1407,0,0,0,0,0,1,0,
1410,0,0,2,0,0,17,1428,0,0,1,1,0,1,0,1,97,0,0,
1429,0,0,2,0,0,45,1430,0,0,0,0,0,1,0,
1444,0,0,2,0,0,13,1437,0,0,6,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,9,0,0,2,
9,0,0,
1483,0,0,41,0,0,29,1452,0,0,0,0,0,1,0,
1498,0,0,2,0,0,15,1453,0,0,0,0,0,1,0,
1513,0,0,42,0,0,31,1505,0,0,0,0,0,1,0,
};


#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>

#define _CRT_SECURE_NO_WARNINGS
#define getch() _getch()
#define STD_HANDLE GetStdHandle(STD_OUTPUT_HANDLE)

//#ifdef WIN32
#include < windows.h >
/*---------------  화면 커서 위치 제어 ----------------------*/
void gotoxy(int x, int y) ;
void getxy(int *x, int *y) ;
void clrscr(void) ;
/*-----------------------------------------------------------*/
void Main_start();         //시작화면
void DB_connect();         
void Menu();               //
void Log_in();             //로그인
void Sign_up();            //회원가입
void Customer_view();     //고객화면
void Employee_view();     //직원화면
void Get_proinfo_C();     //고객 목록 출력
void Get_proinfo_P();     //상품 목록 출력 
void Get_proinfo_E();     //직원 목록 출력
void Get_proinfo();     //고객 목록 출력
void Delete_tuple_C();    //고객 삭제
void Delete_tuple_P();    //상품 삭제
void Delete_tuple_E();    //직원 삭제
void Delete_tuple();    //고객 삭제
void Insert_tuple_C();     //고객 추가
void Insert_tuple_P();     //상품 추가
void Insert_tuple_E();     //직원 추가
void Insert_tuple();     //상품 추가
void Update_tuple_C();   //고객 정보 수정
void Update_tuple_P();   //상품 정보 수정
void Update_tuple_E();   //직원 정보 수정
void Update_tuple();   //고객 정보 수정
void Get_tuple_C();     //고객 검색
void Get_tuple_P();     //상품 검색
void Get_tuple_E();     //직원 검색
void Get_tuple();     //상품 검색
void Get_tuple_NameC();
void Get_tuple_NameE();
void Get_tuple_NoP();
void Sal_bonus();

void Sell_tuple();     //판매(수량감소)
void Out_Of_Stock();      //부족 재고 출력
void Show_employee();   //판매실적
void Count_sult(int sult, char empno);   //수량만큼 판매
void rtrim();
void sql_error();

/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

   /* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

/* EXEC SQL END DECLARE SECTION; */ 

char pdtno[20], pdtbrand[20], pdtname[20], pdtprice[10], pdtsize[5], amount[5];
char pdtno[20], pdtbrand[20], pdtname[20], pdtprice[10], pdtsize[5], amount[5];
char csmno[20], csmname[20], birthday[20], telephone[10];
char empno[20], empname[20], hiredate[10], sal[5], esult[5];

void main()
{
   _putenv("NLS_LANG=American_America.KO16KSC5601");
   DB_connect();
   Main_start();
   //Get_proinfo_C();     //고객 목록 출력
   //Get_proinfo_P();     //상품 목록 출력 
   //Get_proinfo_E();     //직원 목록 출력
   //Delete_tuple_C();    //고객 삭제
   //Delete_tuple_P();    //상품 삭제
   //Delete_tuple_E();    //직원 삭제
   //Insert_tuple_C();     //고객 추가
   //Insert_tuple_P();     //상품 추가
   //Insert_tuple_E();     //직원 추가
   //Update_tuple_C();   //고객 정보 수정
   //Update_tuple_P();   //상품 정보 수정
   //Update_tuple_E();   //직원 정보 수정
   //Get_tuple_C();     //고객 검색
   //Get_tuple_P();     //상품 검색
   //Get_tuple_E();     //직원 검색
   //Sell_tuple();     //판매(수량감소)
   //Out_Of_Stock();      //부족 재고 출력
   /* EXEC SQL COMMIT WORK RELEASE ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 0;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )5;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   getch();
}
void Menu() {
	printf("                                      ◆ 1. 회원가입 ◆\n\n");
	printf("                                      ◆ 2. 로그인 ◆\n\n\n");
	printf("                                      \n\n\n");
	int i;
	scanf("%d",&i);
	switch (i) {
	case 1:
		printf("                                       회원가입입니다.\n");
		Sign_up();
		printf("                                      ◆ 1. 회원가입 ◆\n\n");
		printf("                                      ◆ 2. 로그인 ◆\n\n\n");
		scanf("%d", &i);
		if (i == 2) {
			Log_in();
		}
		break;
	case 2:
		printf("                                       로그인 화면입니다.\n");
		Log_in();
		break;
	case 3:
		printf("고객");
		break;
	case 4:
		printf("직원");
		break;
	default:
		printf("선택하세요");
		return 0;
	}
}
void Log_in()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar usid[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } usid;

   /* varchar uspw[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } uspw;

   /* varchar usname[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } usname;

   char userinfo[1000];
/* EXEC SQL END DECLARE SECTION; */ 


/* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

    
    char id[10];
    char pwd[10];

    printf("아이디를 입력해 주세요 : ");
    scanf("%s",id);
    printf("\n\n비밀번호를 입력해 주세요 : ");
    scanf("%s",pwd);

    sprintf(userinfo,"SELECT * from users where usid = '%s'",id);

    /* EXEC SQL PREPARE S FROM :userinfo ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 1;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )20;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)userinfo;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    /* EXEC SQL DECLARE e_cursor CURSOR FOR S ; */ 
 
    /* EXEC SQL OPEN e_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 1;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )39;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


    
for(int i=0; i<1; i++){
   /* EXEC SQL FETCH e_cursor INTO :usid, :uspw, :usname; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 3;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )54;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqfoff = (           int )0;
   sqlstm.sqfmod = (unsigned int )2;
   sqlstm.sqhstv[0] = (         void  *)&usid;
   sqlstm.sqhstl[0] = (unsigned int  )12;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&uspw;
   sqlstm.sqhstl[1] = (unsigned int  )12;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&usname;
   sqlstm.sqhstl[2] = (unsigned int  )12;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


       usid.arr[usid.len] = '\0';
   uspw.arr[uspw.len] = '\0';
   usname.arr[usname.len] = '\0';
}
    if(strcmp(id,usid.arr)==0){
        if(strcmp(pwd,uspw.arr)==0){
            printf("\n\n환영합니다 %s님",usname.arr);
			if (strchr(id, 'c')) {
				Customer_view();
			}
			else if (strchr(id,'e')) {
					Employee_view();
			}
        }else{
            printf("패스워드 오류");
        }
    }else{
       printf("아이디 오류");
    }
    /* EXEC SQL CLOSE e_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 3;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )81;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}
/*---------------  회 원 가 입  ----------------------*/
void Sign_up(){
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 

   char id[10];
       char pw[10];
       char name[10];

   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 
 


   printf("\n                          [ 추가할 사용자 정보를 입력하세요 ]\n\n\n");

   printf("                       아이디 : ");
   scanf("%s", id);
   printf("\n");
   printf("                       비밀번호 : ");
   scanf("%s", pw);
   printf("\n");
   printf("                       이름 : ");
   scanf("%s", name);
   printf("\n");
   printf("\n");

   sprintf(dynstmt, "insert into users values ( '%s', '%s', '%s')", id, pw, name);

   for (int i = 0; i < 1; i++) {
      //EXEC SQL WHENEVER NOT FOUND DO break;
      /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 3;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )96;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)dynstmt;
      sqlstm.sqhstl[0] = (unsigned int  )1000;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


      printf("Insert Success\n");
	  printf("                                      ◆ 회원가입이 완료되었습니다. ◆\n\n\n");
      /* EXEC SQL COMMIT WORK ; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 3;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )115;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   }
}
/*---------------  고객 화면   ----------------------*/
void Customer_view() {
	printf("\n환영합니다. 고객님 원하시는 일를 선택해주세요\n");
	printf("1. 모든 상품 조회\t");
	printf("2. 상품 코드 검색\t");
	printf("3. 상품 구매\n");
	int i;
	scanf("%d", &i);
	switch (i) {
	case 1:
		Get_proinfo_P();
		break;
	case 2:
	    Get_proinfo_P();
		Get_tuple_NoP();
		break;
	case 3:
		Sell_tuple();
		break;
	default:
		printf("선택하세요");
		return 0;
	}
}
/*---------------  직원 화면   ----------------------*/
void Employee_view() {
	//4. 직원 - 판매, 상품 추가, 재고확인, 이달의 판매
	printf("고생하십니다. 원하시는 업무를 선택해주세요\n\n");
	printf("1. 부족재고 확인\n");
	printf("2. 상품 검색\n");
	printf("3. 상품 삭제\n");
	printf("4. 상품 추가\n");
	printf("5. 상품 수정\n");
	printf("6. 고객 전체 목록 확인\n");
	printf("7. 고객 추가\n");
	printf("8. 고객 이름 검색\n");
	printf("9. 고객 삭제\n");
	printf("10. 고객 정보 수정\n");
	printf("11. 직원 전체 목록 확인\n");
	printf("12. 직원 추가\n");
	printf("13. 직원 검색\n");
	printf("14. 직원 삭제\n");
	printf("15. 직원 정보 수정\n");
	printf("16. 보너스!! 이달의 판매왕\n");
	int i;
	scanf("%d", &i);
	switch (i) {
	case 1:
		Out_Of_Stock();
		break;
	case 2:
		Get_tuple_NoP();
		break;
	case 3:
		Delete_tuple_P();
		break;
	case 4:
		Insert_tuple_P();
		break;
	case 5:
		Update_tuple_P();
		break;
	case 6:
		Get_proinfo_C();
		break;
	case 7:
		Insert_tuple_C();
		break;
	case 8:
		Get_tuple_NameC();
		break;
	case 9:
		Delete_tuple_C();
		break;
	case 10:
		Update_tuple_C();
		break;
	case 11:
		Get_proinfo_E();
		break;
	case 12:
		Insert_tuple_E();
		break;
	case 13:
		Get_tuple_NameE();
		break;
	case 14:
		 Delete_tuple_E();
		break;
	case 15:
		 Update_tuple_E();
		break;
	case 16:
		Sal_bonus();
		break;
	default:
		printf("선택하세요");
		return 0;
	}
}
/*---------------  고객 삭제  ----------------------*/
void Delete_tuple_C()
{
   Get_proinfo_C();
   
   /* EXEC SQL BEGIN DECLARE SECTION; */ 


      char deletecus[1000];

   /* EXEC SQL END DECLARE SECTION; */ 

   char cno[100];
   char flag;
   
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터값이 다릅니다.\n"); */ 


printf("                   ┌───────────────────────────────────────────────┐\n");
   printf("                   │     삭제를 원하는 고객의 번호를 입력하시오    │\n");
printf("                   └───────────────────────────────────────────────┘\n");
      printf("                    ");
scanf("%s",cno);
   printf("                    Y/N\n");
      printf("                    ");
   flag = (char *)getch() ;
   for(int i=0;i <1;i++){
   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

   if(flag == 'y' || flag == 'Y'){
      sprintf(deletecus,"delete from customer where csmno = '%s'",cno);
      /* EXEC SQL EXECUTE IMMEDIATE :deletecus ; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 3;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )130;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)deletecus;
      sqlstm.sqhstl[0] = (unsigned int  )1000;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
      if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}


      printf("삭제가 완료되었습니다\n");
      /* EXEC SQL COMMIT WORK ; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 3;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )149;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}

 
   }
   else{
      printf("취소되었습니다..\n");
      
   }}
/* EXEC SQL COMMIT WORK ; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 13;
sqlstm.arrsiz = 3;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )164;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}

 
}
/*---------------  고객 상품 구매  ----------------------*/
void Sell_tuple()
{

   Get_proinfo_P();
   printf("\n\n");
   
   /* EXEC SQL BEGIN DECLARE SECTION; */ 

      char dynstmt[1000];
      int sellamount;
      char judgment[1000];
   /* EXEC SQL END DECLARE SECTION; */ 


   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   
   char flag;
   char empno[5];
   char buy[10];
   int count;
printf("                   ┌───────────────────────────────────────────────────────┐\n");
printf("                   │           <   제품 정보를 찾으시겠습니까?   >         │\n");
printf("                   └───────────────────────────────────────────────────────┘\n");
   printf("Y/N");
   flag = (char *)getch() ;
   
   if(flag=='y'||flag=='Y'){
      Get_tuple();
   }
   printf("\n\n [ 제품 번호를 입력해주세요. ]\n");
   scanf("%s",buy);

   printf("\n[ 수량을 입력해 주세요. ]\n");
   scanf("%d",&count);
   sprintf(dynstmt,"update product set amount = amount -%d where pdtno = '%s'",count,buy);
   sprintf(judgment,"select amount from product where pdtno = '%s'",buy);

   /* EXEC SQL PREPARE S FROM :judgment ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 3;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )179;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)judgment;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL DECLARE d_cursor CURSOR FOR S ; */ 
 
      /* EXEC SQL OPEN d_cursor ; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 3;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )198;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

   for(int i = 0; i<1; i++){
      /* EXEC SQL FETCH d_cursor INTO :sellamount; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 3;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )213;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)&sellamount;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
      if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


      if(sellamount>count){
            printf("\n\n [ 구매가 완료 되었습니다. ]\n\n");
            /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 3;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.stmt = "";
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )232;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlstm.sqhstv[0] = (         void  *)dynstmt;
            sqlstm.sqhstl[0] = (unsigned int  )1000;
            sqlstm.sqhsts[0] = (         int  )0;
            sqlstm.sqindv[0] = (         void  *)0;
            sqlstm.sqinds[0] = (         int  )0;
            sqlstm.sqharm[0] = (unsigned int  )0;
            sqlstm.sqadto[0] = (unsigned short )0;
            sqlstm.sqtdso[0] = (unsigned short )0;
            sqlstm.sqphsv = sqlstm.sqhstv;
            sqlstm.sqphsl = sqlstm.sqhstl;
            sqlstm.sqphss = sqlstm.sqhsts;
            sqlstm.sqpind = sqlstm.sqindv;
            sqlstm.sqpins = sqlstm.sqinds;
            sqlstm.sqparm = sqlstm.sqharm;
            sqlstm.sqparc = sqlstm.sqharc;
            sqlstm.sqpadto = sqlstm.sqadto;
            sqlstm.sqptdso = sqlstm.sqtdso;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode == 1403) break;
            if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


         Show_employee();
         printf("\n [ 상품을 판매한 직원 넘버를 작성해 주세요. ]\n");
         scanf("%s",&empno);
         Count_sult(count, empno);
            /* EXEC SQL COMMIT WORK ; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 3;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )251;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


      }
      else{
         printf("\n\n [ 수량이 부족합니다. ]");
         /* EXEC SQL COMMIT WORK ; */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 13;
         sqlstm.arrsiz = 3;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )266;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
         if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

}
   }
/* EXEC SQL CLOSE d_cursor; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 13;
sqlstm.arrsiz = 3;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )281;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}
/*---------------  직원 보너스  ----------------------*/
void Sal_bonus()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar empno[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } empno;

   /* varchar sal[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } sal;

   /* varchar esult[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } esult;

   char bonus[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   sprintf(bonus, "update employee set sal = sal * 1.2 where esult >= 20");

   for(int i = 0; i<1; i++){
   /* EXEC SQL EXECUTE IMMEDIATE :bonus ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 3;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )296;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)bonus;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode == 1403) break;
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL COMMIT WORK ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 3;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )315;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   printf("                   보너스 지급이 완료되었습니다.\n\n");
   Get_proinfo_E();
   }
}
/*---------------  오라클 DB 연결  ----------------------*/
void DB_connect()
{
    strcpy((char *)uid.arr,"a20163334@//sedb.deu.ac.kr:1521/orcl");
    uid.len = (short) strlen((char *)uid.arr);
    strcpy((char *)pwd.arr,"20163334");
    pwd.len = (short) strlen((char *)pwd.arr);
    /* EXEC SQL CONNECT :uid IDENTIFIED BY :pwd; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )10;
    sqlstm.offset = (unsigned int  )330;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&uid;
    sqlstm.sqhstl[0] = (unsigned int  )82;
    sqlstm.sqhsts[0] = (         int  )82;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&pwd;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )22;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   // connection이 실패했을경우의 처리부분
    if (sqlca.sqlcode != 0 && sqlca.sqlcode != -1405){ 
      printf("\7Cconnect error: %s", sqlca.sqlerrm.sqlerrmc);
      getch();
      exit(-1);
    }

    printf("Oracle Connect SUCCESS by %s\n", uid.arr);
}
void Main_start() {
	printf("                   ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ                  \n");
	printf("                  ㅣ                                                              ㅣ                  \n");
	printf("                  ㅣ                                                              ㅣ                  \n");
	printf("                  ㅣ   mmmmmmmmm     mm                mmmmmmmmm       mmmmmmmmmmmㅣ                  \n");
	printf("                  ㅣ   mmmmmmmmm     mm               mm       mm      mmmmmmmmmmmㅣ                  \n");
	printf("                  ㅣ mm              mm              mm         mm     mm         ㅣ                  \n");
	printf("                  ㅣmm               mm             mm           mm    mm         ㅣ                  \n");
	printf("                  ㅣmm               mm             mm           mm    mm         ㅣ                  \n");
	printf("                  ㅣ mm              mm             mm           mm    mm         ㅣ                  \n");
	printf("                  ㅣ   mmmmmmmmm     mmmmmmmmm      mm           mm    mmmmmmmmmmmㅣ                  \n");
	printf("                  ㅣ   mmmmmmmmm     mmmmmmmmm      mm           mm    mmmmmmmmmmmㅣ                  \n");
	printf("                  ㅣ           mm    mm      mm     mm           mm    mm         ㅣ                  \n");
	printf("                  ㅣ            mm   mm       mm    mm           mm    mm         ㅣ                  \n");
	printf("                  ㅣ            mm   mm       mm    mm           mm    mm         ㅣ                  \n");
	printf("                  ㅣ           mm    mm       mm     mm         mm     mm         ㅣ                  \n");
	printf("                  ㅣ   mmmmmmmmm     mm       mm      mm       mm      mmmmmmmmmmmㅣ                  \n");
	printf("                  ㅣ   mmmmmmmmm     mm       mm       mmmmmmmmm       mmmmmmmmmmmㅣ                  \n");
	printf("                  ㅣ                                                              ㅣ                  \n");
	printf("                  ㅣ                                                              ㅣ                  \n");
	printf("                   ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ                  \n\n");
	Menu();

}
/*---------------  고객 명단 출력  ----------------------*/
void Get_proinfo_C()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar num[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } num;

   /* varchar name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } name;

   /* varchar birthday[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } birthday;

   /* varchar telephone[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } telephone;

   char cusinfo[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   /* SQL 에러문 */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   /* 실행시킬 SQL 문장 */
   sprintf(cusinfo, "SELECT *  FROM customer");

   /* EXEC SQL PREPARE S FROM :cusinfo ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )361;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)cusinfo;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL DECLARE c_cursor CURSOR FOR S ; */ 
 
   /* EXEC SQL OPEN c_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )380;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
printf("                   ┌──────────────────────────────────────┐\n");
   printf("                   │           <   고객명단   >           │\n");
printf("                   └──────────────────────────────────────┘\n");
for(;;){
/* EXEC SQL WHENEVER NOT FOUND DO break; */ 

/* EXEC SQL FETCH c_cursor INTO :num, :name, :birthday, :telephone; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 13;
sqlstm.arrsiz = 4;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )395;
sqlstm.selerr = (unsigned short)1;
sqlstm.sqlpfmem = (unsigned int  )0;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqfoff = (           int )0;
sqlstm.sqfmod = (unsigned int )2;
sqlstm.sqhstv[0] = (         void  *)&num;
sqlstm.sqhstl[0] = (unsigned int  )12;
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         void  *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned int  )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (         void  *)&name;
sqlstm.sqhstl[1] = (unsigned int  )22;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         void  *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned int  )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (         void  *)&birthday;
sqlstm.sqhstl[2] = (unsigned int  )12;
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         void  *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned int  )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (         void  *)&telephone;
sqlstm.sqhstl[3] = (unsigned int  )22;
sqlstm.sqhsts[3] = (         int  )0;
sqlstm.sqindv[3] = (         void  *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned int  )0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode == 1403) break;
if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


num.arr[num.len] = '\0';
name.arr[name.len] = '\0';
birthday.arr[birthday.len] = '\0';
telephone.arr[telephone.len] = '\0';
printf("\n                    ▷  고객번호     '%s'  \n", num.arr);
printf("                    ▷  고객성명     '%s'  \n", name.arr);
printf("                    ▷  고객생일     '%s'  \n", birthday.arr);
printf("                    ▷  전화번호     '%s'  \n", telephone.arr);
}
printf("                    =======================================\n\n");

  /* EXEC SQL CLOSE c_cursor; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )426;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}

/*--------------- 상품 목록 출력  ----------------------*/
void Get_proinfo_P()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar num[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } num;

   /* varchar name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } name;

   /* varchar brand[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } brand;

   /* varchar price[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } price;

   /* varchar size[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } size;

   /* varchar amount[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } amount;

   char proinfo[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   /* SQL 에러문 */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   /* 실행시킬 SQL 문장*/
   sprintf(proinfo, "SELECT *  FROM product");

   /* EXEC SQL PREPARE S FROM :proinfo ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )441;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)proinfo;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   //EXEC SQL DECLARE c_cursor CURSOR FOR S ; 
   /* EXEC SQL OPEN c_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )460;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
printf("                   ┌──────────────────────────────────────┐\n");
   printf("                   │           <   상품목록   >           │\n");
printf("                   └──────────────────────────────────────┘\n");
for(;;){
/* EXEC SQL WHENEVER NOT FOUND DO break; */ 

/* EXEC SQL FETCH c_cursor INTO :num, :name, :brand, :price, :size, :amount; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 13;
sqlstm.arrsiz = 6;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )475;
sqlstm.selerr = (unsigned short)1;
sqlstm.sqlpfmem = (unsigned int  )0;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqfoff = (           int )0;
sqlstm.sqfmod = (unsigned int )2;
sqlstm.sqhstv[0] = (         void  *)&num;
sqlstm.sqhstl[0] = (unsigned int  )12;
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         void  *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned int  )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (         void  *)&name;
sqlstm.sqhstl[1] = (unsigned int  )22;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         void  *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned int  )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (         void  *)&brand;
sqlstm.sqhstl[2] = (unsigned int  )22;
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         void  *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned int  )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (         void  *)&price;
sqlstm.sqhstl[3] = (unsigned int  )22;
sqlstm.sqhsts[3] = (         int  )0;
sqlstm.sqindv[3] = (         void  *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned int  )0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqhstv[4] = (         void  *)&size;
sqlstm.sqhstl[4] = (unsigned int  )5;
sqlstm.sqhsts[4] = (         int  )0;
sqlstm.sqindv[4] = (         void  *)0;
sqlstm.sqinds[4] = (         int  )0;
sqlstm.sqharm[4] = (unsigned int  )0;
sqlstm.sqadto[4] = (unsigned short )0;
sqlstm.sqtdso[4] = (unsigned short )0;
sqlstm.sqhstv[5] = (         void  *)&amount;
sqlstm.sqhstl[5] = (unsigned int  )5;
sqlstm.sqhsts[5] = (         int  )0;
sqlstm.sqindv[5] = (         void  *)0;
sqlstm.sqinds[5] = (         int  )0;
sqlstm.sqharm[5] = (unsigned int  )0;
sqlstm.sqadto[5] = (unsigned short )0;
sqlstm.sqtdso[5] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode == 1403) break;
if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


num.arr[num.len] = '\0';
name.arr[name.len] = '\0';
brand.arr[brand.len] = '\0';
price.arr[price.len] = '\0';
size.arr[size.len] = '\0';
amount.arr[amount.len] = '\0';
printf("\n                    ▷  상품번호     '%s'  \n", num.arr);
printf("                    ▷  상품이름     '%s'  \n", name.arr);
printf("                    ▷  브 랜 드      '%s'  \n", brand.arr);
printf("                    ▷  가      격     '%s'  \n", price.arr);
printf("                    ▷  사 이 즈      '%s'  \n", size.arr);
printf("                    ▷  수      량     '%s'  \n", amount.arr);
}
printf("                    =======================================\n\n");
  /* EXEC SQL CLOSE c_cursor; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )514;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


/* EXEC SQL COMMIT WORK ; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 13;
sqlstm.arrsiz = 6;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )529;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
}
void Get_tuple_NameC()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar csmno[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } csmno;

   /* varchar csmname[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } csmname;

   /* varchar birthday[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } birthday;

   /* varchar telephone[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } telephone;


   char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   char no_temp[10];

   /* Register sql_error() as the error handler. */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터가 올바르지 않습니다.\n"); */ 



   /* 사용자 입력 */
printf("                   ┌───────────────────────────────────────────────┐\n");
   printf("                   │        검색할 고객의 이름을 입력하시오        │\n");
printf("                   └───────────────────────────────────────────────┘\n");
   printf("                    ");
    scanf("%s",no_temp);

   
   /* 실행시킬 SQL 문장*/
   sprintf(dynstmt,"SELECT csmno, csmname, birthday, telephone FROM customer where csmname = '%s'", no_temp); 

    /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )544;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}


    /* EXEC SQL DECLARE h_cursor CURSOR FOR S ; */ 
 

    /* EXEC SQL OPEN h_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )563;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}

 

  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 


for(int i = 0; i<1; i++)
    {
        /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

        /* EXEC SQL FETCH h_cursor INTO :csmno, :csmname, :birthday, :telephone; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )578;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&csmno;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&csmname;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&birthday;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&telephone;
        sqlstm.sqhstl[3] = (unsigned int  )102;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}



               csmno.arr[csmno.len] = '\0';
   csmname.arr[csmname.len] = '\0';
   birthday.arr[birthday.len] = '\0';
   telephone.arr[telephone.len] = '\0';
               printf("\n                    ▷  고객번호     '%s'  \n", csmno.arr);
               printf("\n                    ▷  고객이름     '%s'  \n", csmname.arr);
               printf("\n                    ▷  생    일     '%s'  \n", birthday.arr);
               printf("\n                    ▷  전화번호     '%s'  \n", telephone.arr);
    }
    /* 전송된 투플의 수를 출력함. */
    printf("\n                    검색 결과 : %d\n", sqlca.sqlerrd[2]);
printf("\n                    =======================================\n\n");
    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )609;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}

 
}
/*--------------- 직원 삭제  ----------------------*/
void Delete_tuple_E()
{
   Get_proinfo_E();
   
   /* EXEC SQL BEGIN DECLARE SECTION; */ 


      char deleteemp[1000];

   /* EXEC SQL END DECLARE SECTION; */ 

   char eno[100];
   char flag;
   
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터값이 다릅니다.\n"); */ 


printf("                   ┌───────────────────────────────────────────────┐\n");
   printf("                   │     삭제를 원하는 직원의 번호를 입력하시오    │\n");
printf("                   └───────────────────────────────────────────────┘\n");
      printf("                    ");
scanf("%s",eno);
   printf("                    Y/N\n");
      printf("                    ");
   flag = (char *)getch() ;
   for(int i=0;i <1;i++){
   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

   if(flag == 'y' || flag == 'Y'){
      sprintf(deleteemp,"delete from employee where empno = '%s'",eno);
      /* EXEC SQL EXECUTE IMMEDIATE :deleteemp ; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )624;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)deleteemp;
      sqlstm.sqhstl[0] = (unsigned int  )1000;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
      if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}


      printf("삭제가 완료되었습니다.\n");
      /* EXEC SQL COMMIT WORK ; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )643;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}

 
   }
   else{
      printf("취소되었습니다..\n");
      
   }}
/* EXEC SQL COMMIT WORK ; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 13;
sqlstm.arrsiz = 6;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )658;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}

 
}
/*--------------- 상품 삭제  ----------------------*/
void Delete_tuple_P()
{
    Get_proinfo_P();
   
   /* EXEC SQL BEGIN DECLARE SECTION; */ 
 


      char deletepdt[1000];

   /* EXEC SQL END DECLARE SECTION; */ 


   char pno[100];
   char flag;
   
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터값이 다릅니다.\n"); */ 



printf("                   ┌───────────────────────────────────────────────┐\n");
   printf("                   │     삭제를 원하는 상품의 번호를 입력하시오    │\n");
printf("                   └───────────────────────────────────────────────┘\n");
      printf("                    ");
scanf("%s",pno);
   printf("                    Y/N\n");
      printf("                    ");
	  flag = (char *)getch();
   sprintf(deletepdt,"delete from product where pdtno = '%s'",pno);
   for(int i=0;i <1;i++){
   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

   if(flag == 'y' || flag == 'Y'){
      /* EXEC SQL EXECUTE IMMEDIATE :deletepdt ; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )673;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)deletepdt;
      sqlstm.sqhstl[0] = (unsigned int  )1000;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
      if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}


      printf("삭제가 완료되었습니다.\n");
      /* EXEC SQL COMMIT WORK ; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 6;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )692;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}

}
   else{
      printf("취소되었습니다.\n");}
   }
/* EXEC SQL COMMIT WORK ; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 13;
sqlstm.arrsiz = 6;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )707;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}

 
   }

/*--------------- 직원 검색 출력  ----------------------*/
void Get_tuple_NameE()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 


   /* varchar empno[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } empno;

   /* varchar empname[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } empname;

   /* varchar hiredate[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } hiredate;

   /* varchar sal[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } sal;

   /* varchar esult[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } esult;


   char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   char no_temp[10];

   /* Register sql_error() as the error handler. */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터가 올바르지 않습니다.\n"); */ 



   /* 사용자 입력 */
printf("                   ┌───────────────────────────────────────────────┐\n");
   printf("                   │        검색할 직원의 이름을 입력하시오        │\n");
printf("                   └───────────────────────────────────────────────┘\n");
   printf("                    ");
   scanf("%s",no_temp);

   
   /* 실행시킬 SQL 문장*/
   sprintf(dynstmt,"SELECT empno, empname, hiredate, sal, esult FROM employee where empname = '%s'", no_temp); 

    /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )722;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}


    /* EXEC SQL DECLARE l_cursor CURSOR FOR S ; */ 
 
    /* EXEC SQL OPEN l_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )741;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}

 

  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 


for(int i = 0; i<1; i++)
    {
        /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

        /* EXEC SQL FETCH l_cursor INTO :empno, :empname, :hiredate, :sal, :esult; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )756;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&empno;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&empname;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&hiredate;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&sal;
        sqlstm.sqhstl[3] = (unsigned int  )102;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&esult;
        sqlstm.sqhstl[4] = (unsigned int  )102;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}



               empno.arr[empno.len] = '\0';
   empname.arr[empname.len] = '\0';
   hiredate.arr[hiredate.len] = '\0';
   sal.arr[sal.len] = '\0';
   esult.arr[esult.len] = '\0';

               printf("\n                    ▷  직원번호     '%s'  \n", empno.arr);
               printf("\n                    ▷  직원이름     '%s'  \n", empname.arr);
               printf("\n                    ▷  입 사 일     '%s'  \n", hiredate.arr);
               printf("\n                    ▷  월    급     '%s'  \n", sal.arr);
               printf("\n                    ▷  판매수량     '%s'  \n", esult.arr);
    }
    /* 전송된 투플의 수를 출력함. */
    printf("\n                    검색 결과 : %d\n", sqlca.sqlerrd[2]);
printf("\n                    =======================================\n\n");
    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )791;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}

 
}
/*--------------- 직원 목록 출력  ----------------------*/
void Get_proinfo_E()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar num[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } num;

   /* varchar name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } name;

   /* varchar hiredate[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } hiredate;

   /* varchar sal[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } sal;

   /* varchar esult[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } esult;

   char empinfo[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   /* Register sql_error() as the error handler. */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   /* 실행시킬 SQL 문장*/
   sprintf(empinfo, "SELECT *  FROM employee");

   /* EXEC SQL PREPARE S FROM :empinfo ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )806;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)empinfo;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   /* EXEC SQL DECLARE f_cursor CURSOR FOR S ; */ 
 
   /* EXEC SQL OPEN f_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )825;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
printf("                   ┌──────────────────────────────────────┐\n");
   printf("                   │           <   직원명단   >           │\n");
printf("                   └──────────────────────────────────────┘\n");
for(;;){
/* EXEC SQL WHENEVER NOT FOUND DO break; */ 

/* EXEC SQL FETCH f_cursor INTO :num, :name, :hiredate, :sal, :esult; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 13;
sqlstm.arrsiz = 6;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )840;
sqlstm.selerr = (unsigned short)1;
sqlstm.sqlpfmem = (unsigned int  )0;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqfoff = (           int )0;
sqlstm.sqfmod = (unsigned int )2;
sqlstm.sqhstv[0] = (         void  *)&num;
sqlstm.sqhstl[0] = (unsigned int  )12;
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         void  *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned int  )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (         void  *)&name;
sqlstm.sqhstl[1] = (unsigned int  )22;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         void  *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned int  )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (         void  *)&hiredate;
sqlstm.sqhstl[2] = (unsigned int  )22;
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         void  *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned int  )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (         void  *)&sal;
sqlstm.sqhstl[3] = (unsigned int  )12;
sqlstm.sqhsts[3] = (         int  )0;
sqlstm.sqindv[3] = (         void  *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned int  )0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqhstv[4] = (         void  *)&esult;
sqlstm.sqhstl[4] = (unsigned int  )12;
sqlstm.sqhsts[4] = (         int  )0;
sqlstm.sqindv[4] = (         void  *)0;
sqlstm.sqinds[4] = (         int  )0;
sqlstm.sqharm[4] = (unsigned int  )0;
sqlstm.sqadto[4] = (unsigned short )0;
sqlstm.sqtdso[4] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode == 1403) break;
if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


num.arr[num.len] = '\0';
name.arr[name.len] = '\0';
hiredate.arr[hiredate.len] = '\0';
sal.arr[sal.len] = '\0';
esult.arr[esult.len] = '\0';
printf("\n                    ▷  직원번호     '%s'  \n", num.arr);
printf("                    ▷  직원이름     '%s'  \n", name.arr);
printf("                    ▷  입 사 일      '%s'  \n", hiredate.arr);
printf("                    ▷  월      급     '%s'  \n", sal.arr);
printf("                    ▷  판매실적      '%s'  \n", esult.arr);
}
printf("                    =======================================\n\n");
  /* EXEC SQL CLOSE f_cursor; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )875;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}
void Insert_tuple_P()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 


   char  no[100];
   char  brand[14];
   char  name[13];
   char  price[100];
   char  size[14];
   char  amoun[13];

    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


/* Register sql_error() as the error handler. */
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터 값이 다릅니다.\n"); */ 


   clrscr();

printf("                   ┌───────────────────────────────────────────────┐\n");
   printf("                   │        추가할 상품의 정보를 입력하시오        │\n");
printf("                   └───────────────────────────────────────────────┘\n");

   printf("                    ▷  제품번호 : ");
   scanf("%s",no);
   if(no[0] == '\0' ) {
       printf("%s\n", pdtno);
       strcpy(no, pdtno);
   }
     
   printf("                    ▷  브랜드 : ");
   scanf("%s",brand);
   if(brand[0] == '\0' ){
       printf("%s\n", pdtbrand);
       strcpy(brand, pdtbrand);
   }

   printf("                    ▷  제품명 : ");
   scanf("%s",name);
   if( name[0]== '\0' ){
        printf("%s\n", pdtname);
        strcpy(name, pdtname);
   }

   printf("                    ▷  가격 : ");
   scanf("%s",price);
   if(price[0] == '\0' ) {
       printf("%s\n", pdtprice);
       strcpy(price, pdtprice);
   }
     
   printf("                    ▷  사이즈 : ");
   scanf("%s",size);
   if(size[0] == '\0' ){
       printf("%s\n", pdtsize);
       strcpy(size, pdtsize);
   }

   printf("                    ▷  수량 : ");
   scanf("%s",amoun);
   if( amoun[0]== '\0' ){
        printf("%s\n", amount);
        strcpy(amoun, amount);
   }

int i = 0;
for(i = 0; i<1; i++){
    sprintf(dynstmt,"insert into product values ( '%s', '%s', '%s', '%s', '%s', '%s')" ,no, brand, name, price, size, amoun);

    /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )890;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode == 1403) break;
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터 값이 다릅니다.\n");
}



   printf("                   =====추가가 완료되었습니다=====\n");
    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )909;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터 값이 다릅니다.\n");
}

}
}
void Insert_tuple()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar csmno[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } csmno;

    /* varchar csmname[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } csmname;

    /* varchar birthday[11]; */ 
struct { unsigned short len; unsigned char arr[11]; } birthday;

    /* varchar telephone[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } telephone;


    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


/* Register sql_error() as the error handler. */
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   clrscr();

   /* 데이터 입력 ->고쳐야함 우리 프로젝트에 맞게 */
    gotoxy(40,5) ;

    printf(" [ 추가할 고객 정보를 입력하세요 ]\n\n");   
   
    printf("                       고객번호 : \n");
    printf("\n");
    printf("                       고객이름 : \n");
    printf("\n");
    printf("                       고객생일 : \n");
    printf("\n");
    printf("                       전화번호 : \n");
    printf("\n");


   /* 고객번호 입력 */
    gotoxy(34,7)  ; 
    gets(csmno.arr);
    csmno.len = strlen(csmno.arr);
    
   /* 고객이름 입력 */
    gotoxy(34,9)  ;
    gets(csmname.arr);
    csmname.len = strlen(csmname.arr);

   /* 고객생일 입력 */
    gotoxy(34,11) ;
    gets(birthday.arr);
    birthday.len = strlen(birthday.arr);

   /* 전화번호 입력 */
    gotoxy(34,13) ;
    gets(telephone.arr);
    telephone.len = strlen(telephone.arr);
int i = 0;
   
for(i = 0; i<1; i++){
    //EXEC SQL WHENEVER NOT FOUND DO break;
    sprintf(dynstmt,"insert into customer values ( '%s', '%s', '%s', '%s')" ,csmno.arr, csmname.arr, birthday.arr, telephone.arr);

    /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )924;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode == 1403) break;
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    printf("Insert Success\n");
    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )943;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

}
}
void Insert_tuple_E()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 


   char  no[10];
   char  name[20];
   char  hiredate[20];
   char  sal[10];
   char  esult[10];

    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


/* Register sql_error() as the error handler. */
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터값이 다릅니다.\n"); */ 


   clrscr();

printf("                   ┌───────────────────────────────────────────────┐\n");
   printf("                   │        추가할 직원의 정보를 입력하시오        │\n");
printf("                   └───────────────────────────────────────────────┘\n");

   printf("                    ▷  직원번호 : ");
   scanf("%s",no);
   if(no[0] == '\0' ) {
       printf("%s\n", empno);
       strcpy(no, empno);
   }
     
   printf("                    ▷  직원이름 : ");
   scanf("%s",name);
   if(name[0] == '\0' ){
       printf("%s\n", empname);
       strcpy(name, empname);
   }

   printf("                    ▷  입사일 : ");
   scanf("%s",hiredate);
   if(hiredate[0]== '\0' ){
        printf("%s\n", hiredate);
        strcpy(hiredate, hiredate);
   }

   printf("                    ▷  월급 : ");
   scanf("%s",sal);
   if(sal[0] == '\0' ) {
       printf("%s\n", sal);
       strcpy(sal, sal);
   }

   printf("                    ▷  판매실적 : ");
   scanf("%s",esult);
   if(esult[0] == '\0' ){
       printf("%s\n", esult);
       strcpy(esult, esult);
   }


int i = 0;
for(i = 0; i<1; i++){
    sprintf(dynstmt,"insert into employee values ( '%s', '%s', '%s', '%s', '%s')" ,no, name, hiredate, sal, esult);

    /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )958;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode == 1403) break;
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}



   printf("                   =====추가가 완료되었습니다=====\n");
    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )977;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}

}
}
void Insert_tuple_C()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 


   char  no[10];
   char  name[20];
   char  birthday[20];
   char  telephone[20];

    char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


/* Register sql_error() as the error handler. */
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터값이 다릅니다\n"); */ 


   clrscr();

printf("                   ┌───────────────────────────────────────────────┐\n");
   printf("                   │        추가할 고객의 정보를 입력하시오        │\n");
printf("                   └───────────────────────────────────────────────┘\n");

   printf("\n                    ▷  고객번호 : ");
   scanf("%s",no);
   if(no[0] == '\0' ) {
       printf("%s\n", csmno);
       strcpy(no, csmno);
   }

   printf("\n                    ▷  고객이름 : ");
   scanf("%s",name);
   if( name[0]== '\0' ){
        printf("%s\n", csmname);
        strcpy(name, csmname);
   }

   printf("\n                    ▷  생      일 : ");
   scanf("%s",birthday);
   if(birthday[0] == '\0' ) {
       printf("%s\n", birthday);
       strcpy(birthday, birthday);
   }
     
   printf("\n                    ▷  전화번호 : ");
   scanf("%s",telephone);
   if(telephone[0] == '\0' ){
       printf("%s\n", telephone);
       strcpy(telephone, telephone);
   }

int i = 0;
for(i = 0; i<1; i++){
    sprintf(dynstmt,"insert into customer values ( '%s', '%s', '%s', '%s')" ,no, name, birthday, telephone);

    /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )992;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode == 1403) break;
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다\n");
}



   printf("                   =====추가가 완료되었습니다=====\n");
    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1011;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다\n");
}

}
}
void Update_tuple_C()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 


   char dynstmt[1000];

/* EXEC SQL END DECLARE SECTION; */ 


   char  no[10];
   char  name[20];
   char  birthday[20];
   char  telephone[20];
  
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터값이 다릅니다.\n"); */ 

printf("                   ┌───────────────────────────────────────────────┐\n");
   printf("                   │     수정을 원하는 고객의 번호를 입력하시오    │\n");
printf("                   └───────────────────────────────────────────────┘\n");


   printf("                    ▷  고객번호 : ");
   scanf("%s",no);
   if(no[0] == '\0' ) {
       printf("%s\n", csmno);
       strcpy(no, csmno);
   }

   printf("                    ▷  고객명 : ");
   scanf("%s",name);
   if( name[0]== '\0' ){
        printf("%s\n", csmname);
        strcpy(name, csmname);
   }

   printf("                    ▷  생일 : ");
   scanf("%s",birthday);
   if(birthday[0] == '\0' ) {
       printf("%s\n", birthday);
       strcpy(birthday, birthday);
   }
     
   printf("                    ▷  전화번호 : ");
   scanf("%s",telephone);
   if(telephone[0] == '\0' ){
       printf("%s\n", telephone);
       strcpy(telephone, telephone);
   }


   sprintf(dynstmt,"update customer set csmno = '%s' ,  csmname = '%s' , birthday = '%s', telephone = '%s' where csmno = '%s'", no, name, birthday, telephone, no);
   for(int i = 0; i<1; i++){
   /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1026;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode == 1403) break;
   if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}



   printf("                   =====수정이 완료되었습니다=====\n");
   /* EXEC SQL COMMIT WORK ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1045;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}

 }
}

void Update_tuple_P()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 


   char dynstmt[1000];

/* EXEC SQL END DECLARE SECTION; */ 


   char  no[100];
   char  brand[14];
   char  name[13];
   char  price[100];
   char  size[14];
   char  amoun[13];
  
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터값이 다릅니다.\n"); */ 

printf("                   ┌───────────────────────────────────────────────┐\n");
   printf("                   │     수정을 원하는 제품의 번호를 입력하시오    │\n");
printf("                   └───────────────────────────────────────────────┘\n");

   printf("                    ▷  제품번호 : ");
   scanf("%s",no);
   if(no[0] == '\0' ) {
       printf("%s\n", pdtno);
       strcpy(no, pdtno);
   }
     
   printf("                    ▷  브랜드 : ");
   scanf("%s",brand);
   if(brand[0] == '\0' ){
       printf("%s\n", pdtbrand);
       strcpy(brand, pdtbrand);
   }

   printf("                    ▷  제품명 : ");
   scanf("%s",name);
   if( name[0]== '\0' ){
        printf("%s\n", pdtname);
        strcpy(name, pdtname);
   }

   printf("                    ▷  가격 : ");
   scanf("%s",price);
   if(price[0] == '\0' ) {
       printf("%s\n", pdtprice);
       strcpy(price, pdtprice);
   }
     
   printf("                    ▷  사이즈 : ");
   scanf("%s",size);
   if(size[0] == '\0' ){
       printf("%s\n", pdtsize);
       strcpy(size, pdtsize);
   }

   printf("                    ▷  수량 : ");
   scanf("%s",amoun);
   if( amoun[0]== '\0' ){
        printf("%s\n", amount);
        strcpy(amoun, amount);
   }

   sprintf(dynstmt,"update product set pdtno = '%s' ,  pdtbrand= '%s' , pdtname = '%s' , pdtprice = '%s' , pdtsize= '%s' , amount = '%s' where pdtno = '%s'", no, brand, name, price, size, amoun, no);
   for(int i = 0; i<1; i++){
   /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1060;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode == 1403) break;
   if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}



   printf("                   =====수정이 완료되었습니다=====\n");
   /* EXEC SQL COMMIT WORK ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1079;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}

 }
}

void Update_tuple_E()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 


   char dynstmt[1000];

/* EXEC SQL END DECLARE SECTION; */ 


   char  no[10];
   char  name[20];
   char  hiredate[20];
   char  sal[10];
   char  esult[10];
  
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터값이 다릅니다.\n"); */ 

printf("                   ┌───────────────────────────────────────────────┐\n");
   printf("                   │     수정을 원하는 직원의 번호를 입력하시오    │\n");
printf("                   └───────────────────────────────────────────────┘\n");

   printf("                    ▷  직원번호 : ");
   scanf("%s",no);
   if(no[0] == '\0' ) {
       printf("%s\n", empno);
       strcpy(no, empno);
   }
     
   printf("                    ▷  직원이름 : ");
   scanf("%s",name);
   if(name[0] == '\0' ){
       printf("%s\n", empname);
       strcpy(name, empname);
   }

   printf("                    ▷  입사일 : ");
   scanf("%s",hiredate);
   if(hiredate[0]== '\0' ){
        printf("%s\n", hiredate);
        strcpy(hiredate, hiredate);
   }

   printf("                    ▷  월급 : ");
   scanf("%s",sal);
   if(sal[0] == '\0' ) {
       printf("%s\n", sal);
       strcpy(sal, sal);
   }
     
   printf("                    ▷  판매실적 : ");
   scanf("%s",esult);
   if(esult[0] == '\0' ){
       printf("%s\n", esult);
       strcpy(esult, esult);
   }

   sprintf(dynstmt,"update employee set empno = '%s' , empname = '%s' , hiredate = '%s' , sal= '%s' , esult = '%s' where empno = '%s'", no, name, hiredate, sal, esult, no);
   for(int i = 0; i<1; i++){
   /* EXEC SQL EXECUTE IMMEDIATE :dynstmt ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1094;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)dynstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode == 1403) break;
   if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}



   printf("                   =====수정이 완료되었습니다=====\n");
   /* EXEC SQL COMMIT WORK ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1113;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터값이 다릅니다.\n");
}

 }
}


void Count_sult(int *sult, char *empno)
{
   /* EXEC SQL BEGIN DECLARE SECTION; */ 


      char emp[1000];

   /* EXEC SQL END DECLARE SECTION; */ 


   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 


   sprintf(emp,"update employee set esult = esult +%d where empno = '%s'",sult,empno);

   for(int i = 0; i<1; i++){
   /* EXEC SQL EXECUTE IMMEDIATE :emp ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1128;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)emp;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode == 1403) break;
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



   printf("\n\n [ 감사합니다 ]");
   /* EXEC SQL COMMIT WORK ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1147;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   }
}


void Show_employee()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar empno[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } empno;

   /* varchar empname[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } empname;

   char empinfo[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 

   sprintf(empinfo, "SELECT empno, empname  FROM employee");

   /* EXEC SQL PREPARE S FROM :empinfo ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1162;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)empinfo;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   /* EXEC SQL DECLARE b_cursor CURSOR FOR S ; */ 
 
   /* EXEC SQL OPEN b_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1181;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 
printf("                   ┌──────────────────────────────────────┐\n");
   printf("                   │           <   직원명단   >           │\n");
printf("                   └──────────────────────────────────────┘\n");

   for(;;){
   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

   /* EXEC SQL FETCH b_cursor INTO :empno, :empname ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1196;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqfoff = (           int )0;
   sqlstm.sqfmod = (unsigned int )2;
   sqlstm.sqhstv[0] = (         void  *)&empno;
   sqlstm.sqhstl[0] = (unsigned int  )12;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&empname;
   sqlstm.sqhstl[1] = (unsigned int  )22;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode == 1403) break;
   if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


   empno.arr[empno.len] = '\0';
   empname.arr[empname.len] = '\0';
   printf("\n                    ▷  직원번호     '%s'  \n", empno.arr);
   printf("                    ▷  직원이름     '%s'  \n", empname.arr);
}
printf("                    =======================================\n\n");
  /* EXEC SQL CLOSE b_cursor; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1219;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}


}
void Get_tuple()
{
/* --------------------------------------------------------------------------
   Retrieve the current maximum employee number
-------------------------------------------------------------------------- */
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar pdtno[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pdtno;

   /* varchar pdtbrand[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pdtbrand;

   /* varchar pdtname[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pdtname;

   /* varchar pdtprice[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pdtprice;

   /* varchar pdtsize[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pdtsize;

   /* varchar amount[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } amount;


   char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   char no_temp[10];

   /* Register sql_error() as the error handler. */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7ORACLE ERROR:\n"); */ 



   /* 사용자 입력 */
   printf("찾을 사람의 부서번호를 입력하세요:");
    fgets(no_temp, 10, stdin);
    no_temp[strlen(no_temp)-1] = '\0' ;

   
   /* 실행시킬 SQL 문장*/
   sprintf(dynstmt,"SELECT pdtno, pdtbrand, pdtname, pdtprice, pdtsize, amount FROM product where pdtno = '%s'", no_temp); 

   /* select 문장이 제대로 구성되어 있는지 화면에 찍어봄 */
   printf("SQL:%s\n", dynstmt);

    /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1234;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



    /* EXEC SQL OPEN c_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1253;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 


for(int i = 0; i<1; i++)
    {
        /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

        /* EXEC SQL FETCH c_cursor INTO :pdtno, :pdtbrand, :pdtname, :pdtprice, :pdtsize, :amount; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1268;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&pdtno;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&pdtbrand;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&pdtname;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&pdtprice;
        sqlstm.sqhstl[3] = (unsigned int  )102;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&pdtsize;
        sqlstm.sqhstl[4] = (unsigned int  )102;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&amount;
        sqlstm.sqhstl[5] = (unsigned int  )102;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}



             pdtno.arr[pdtno.len] = '\0';
	pdtbrand.arr[pdtbrand.len] = '\0';
	pdtname.arr[pdtname.len] = '\0';
	pdtprice.arr[pdtprice.len] = '\0';
	pdtsize.arr[pdtsize.len] = '\0';
	amount.arr[amount.len] = '\0';

	printf("PDTNUMBER:%s PDTBRAND:%s PDTNAME:%s PDTPRICE:%s PDTSIZE:%s AMOUNT:%s \n", pdtno.arr, pdtbrand.arr, pdtname.arr, pdtprice.arr, pdtsize.arr, amount.arr);
    }
    /* 전송된 투플의 수를 출력함. */
    printf("match tuple no : %d\n", sqlca.sqlerrd[2]);

    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1307;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7ORACLE ERROR:\n");
}

 

}
void Get_tuple_NoP()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 


   /* varchar pdtno[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pdtno;

   /* varchar pdtbrand[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pdtbrand;

   /* varchar pdtname[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pdtname;

   /* varchar pdtprice[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pdtprice;

   /* varchar pdtsize[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } pdtsize;

   /* varchar amount[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } amount;


   char dynstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   char no_temp[10];

   /* Register sql_error() as the error handler. */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터가 올바르지 않습니다.\n"); */ 



   /* 사용자 입력 */
printf("                   ┌───────────────────────────────────────────────┐\n");
   printf("                   │        검색할 상품의 번호을 입력하시오        │\n");
printf("                   └───────────────────────────────────────────────┘\n");
   printf("                    ");
    scanf("%s",no_temp);

   /* 실행시킬 SQL 문장*/
   sprintf(dynstmt,"SELECT pdtno, pdtbrand, pdtname, pdtprice, pdtsize, amount FROM product where pdtno = '%s'", no_temp); 

    /* EXEC SQL PREPARE S FROM :dynstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1322;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)dynstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}


    /* EXEC SQL DECLARE i_cursor CURSOR FOR S ; */ 
 

    /* EXEC SQL OPEN i_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1341;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}

 

  
    /* EXEC SQL WHENEVER NOT FOUND do break; */ 


for(int i = 0; i<1; i++)
    {
        /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

        /* EXEC SQL FETCH i_cursor INTO :pdtno, :pdtbrand, :pdtname, :pdtprice, :pdtsize, :amount; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 6;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )1356;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&pdtno;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&pdtbrand;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&pdtname;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&pdtprice;
        sqlstm.sqhstl[3] = (unsigned int  )102;
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&pdtsize;
        sqlstm.sqhstl[4] = (unsigned int  )102;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&amount;
        sqlstm.sqhstl[5] = (unsigned int  )102;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode == 1403) break;
        if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}



              pdtno.arr[pdtno.len] = '\0';
   pdtbrand.arr[pdtbrand.len] = '\0';
   pdtname.arr[pdtname.len] = '\0';
   pdtprice.arr[pdtprice.len] = '\0';
   pdtsize.arr[pdtsize.len] = '\0';
   amount.arr[amount.len] = '\0';

               printf("\n                    ▷  상품번호     '%s'  \n", pdtno.arr);
               printf("\n                    ▷  브 랜 드     '%s'  \n", pdtbrand.arr);
               printf("\n                    ▷  상품이름     '%s'  \n", pdtname.arr);
               printf("\n                    ▷  가    격     '%s'  \n", pdtprice.arr);
               printf("\n                    ▷  사 이 즈     '%s'  \n", pdtsize.arr);
               printf("\n                    ▷  수    량     '%s'  \n", amount.arr);
    }
    /* 전송된 투플의 수를 출력함. */
    printf("\n                    검색 결과 : %d\n", sqlca.sqlerrd[2]);
printf("\n                    =======================================\n\n");
    /* EXEC SQL COMMIT WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1395;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}

 
}
void Out_Of_Stock()
{

/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar num[10]; */ 
struct { unsigned short len; unsigned char arr[10]; } num;

   /* varchar name[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } name;

   /* varchar brand[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } brand;

   /* varchar price[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } price;

   /* varchar size[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } size;

   /* varchar amount[3]; */ 
struct { unsigned short len; unsigned char arr[3]; } amount;

   char stock[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   /* Register sql_error() as the error handler. */
   /* EXEC SQL WHENEVER SQLERROR DO sql_error("\n입력한 데이터가 올바르지 않습니다.\n"); */ 


   /* 실행시킬 SQL 문장*/
   sprintf(stock, "SELECT *  FROM product WHERE amount < 5");

   /* EXEC SQL PREPARE S FROM :stock ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1410;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)stock;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}


   /* EXEC SQL DECLARE a_cursor CURSOR FOR S ; */ 
 
   /* EXEC SQL OPEN a_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 6;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )1429;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}

 
printf("                   ┌──────────────────────────────────────┐\n");
   printf("                   │           <   부족재고   >           │\n");
printf("                   └──────────────────────────────────────┘\n");
   printf("                       ※남은 재고가 5미만인 제품 목록※\n");
for(;;){
/* EXEC SQL WHENEVER NOT FOUND DO break; */ 

/* EXEC SQL FETCH a_cursor INTO :num, :brand, :name, :price, :size, :amount; */ 

{
struct sqlexd sqlstm;
sqlstm.sqlvsn = 13;
sqlstm.arrsiz = 6;
sqlstm.sqladtp = &sqladt;
sqlstm.sqltdsp = &sqltds;
sqlstm.iters = (unsigned int  )1;
sqlstm.offset = (unsigned int  )1444;
sqlstm.selerr = (unsigned short)1;
sqlstm.sqlpfmem = (unsigned int  )0;
sqlstm.cud = sqlcud0;
sqlstm.sqlest = (unsigned char  *)&sqlca;
sqlstm.sqlety = (unsigned short)4352;
sqlstm.occurs = (unsigned int  )0;
sqlstm.sqfoff = (           int )0;
sqlstm.sqfmod = (unsigned int )2;
sqlstm.sqhstv[0] = (         void  *)&num;
sqlstm.sqhstl[0] = (unsigned int  )12;
sqlstm.sqhsts[0] = (         int  )0;
sqlstm.sqindv[0] = (         void  *)0;
sqlstm.sqinds[0] = (         int  )0;
sqlstm.sqharm[0] = (unsigned int  )0;
sqlstm.sqadto[0] = (unsigned short )0;
sqlstm.sqtdso[0] = (unsigned short )0;
sqlstm.sqhstv[1] = (         void  *)&brand;
sqlstm.sqhstl[1] = (unsigned int  )22;
sqlstm.sqhsts[1] = (         int  )0;
sqlstm.sqindv[1] = (         void  *)0;
sqlstm.sqinds[1] = (         int  )0;
sqlstm.sqharm[1] = (unsigned int  )0;
sqlstm.sqadto[1] = (unsigned short )0;
sqlstm.sqtdso[1] = (unsigned short )0;
sqlstm.sqhstv[2] = (         void  *)&name;
sqlstm.sqhstl[2] = (unsigned int  )22;
sqlstm.sqhsts[2] = (         int  )0;
sqlstm.sqindv[2] = (         void  *)0;
sqlstm.sqinds[2] = (         int  )0;
sqlstm.sqharm[2] = (unsigned int  )0;
sqlstm.sqadto[2] = (unsigned short )0;
sqlstm.sqtdso[2] = (unsigned short )0;
sqlstm.sqhstv[3] = (         void  *)&price;
sqlstm.sqhstl[3] = (unsigned int  )22;
sqlstm.sqhsts[3] = (         int  )0;
sqlstm.sqindv[3] = (         void  *)0;
sqlstm.sqinds[3] = (         int  )0;
sqlstm.sqharm[3] = (unsigned int  )0;
sqlstm.sqadto[3] = (unsigned short )0;
sqlstm.sqtdso[3] = (unsigned short )0;
sqlstm.sqhstv[4] = (         void  *)&size;
sqlstm.sqhstl[4] = (unsigned int  )5;
sqlstm.sqhsts[4] = (         int  )0;
sqlstm.sqindv[4] = (         void  *)0;
sqlstm.sqinds[4] = (         int  )0;
sqlstm.sqharm[4] = (unsigned int  )0;
sqlstm.sqadto[4] = (unsigned short )0;
sqlstm.sqtdso[4] = (unsigned short )0;
sqlstm.sqhstv[5] = (         void  *)&amount;
sqlstm.sqhstl[5] = (unsigned int  )5;
sqlstm.sqhsts[5] = (         int  )0;
sqlstm.sqindv[5] = (         void  *)0;
sqlstm.sqinds[5] = (         int  )0;
sqlstm.sqharm[5] = (unsigned int  )0;
sqlstm.sqadto[5] = (unsigned short )0;
sqlstm.sqtdso[5] = (unsigned short )0;
sqlstm.sqphsv = sqlstm.sqhstv;
sqlstm.sqphsl = sqlstm.sqhstl;
sqlstm.sqphss = sqlstm.sqhsts;
sqlstm.sqpind = sqlstm.sqindv;
sqlstm.sqpins = sqlstm.sqinds;
sqlstm.sqparm = sqlstm.sqharm;
sqlstm.sqparc = sqlstm.sqharc;
sqlstm.sqpadto = sqlstm.sqadto;
sqlstm.sqptdso = sqlstm.sqtdso;
sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
if (sqlca.sqlcode == 1403) break;
if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}


num.arr[num.len] = '\0';
brand.arr[name.len] = '\0';
name.arr[brand.len] = '\0';
price.arr[price.len] = '\0';
size.arr[size.len] = '\0';
amount.arr[amount.len] = '\0';
printf("\n                    ▷  상품번호     '%s'  \n", num.arr);
printf("                    ▷  상품이름     '%s'  \n", name.arr);
printf("                    ▷  브 랜 드     '%s'  \n", brand.arr);
printf("                    ▷  가    격     '%s'  \n", price.arr);
printf("                    ▷  사 이 즈     '%s'  \n", size.arr);
printf("                    ▷  수    량     '%s'  \n", amount.arr);
}
printf("\n                    =======================================\n\n");
  /* EXEC SQL COMMIT WORK ; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1483;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}

 
  /* EXEC SQL CLOSE a_cursor; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 13;
  sqlstm.arrsiz = 6;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )1498;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) sql_error("\n입력한 데이터가 올바르지 않습니다.\n");
}


}
void rtrim(char temp[])
{
	int i;

	i = strlen(temp)-1;
	
	while (temp[i] == ' ' && i > 0 ){
		i--;
        }
	temp[i+1]='\0';
}

void gotoxy(int x, int y)
{
    COORD Cur= {(SHORT)x, (SHORT) y};

    SetConsoleCursorPosition(STD_HANDLE, Cur);
}

void getxy(int *x, int *y)
{
    CONSOLE_SCREEN_BUFFER_INFO Buf ;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Buf);
    *x = (int)Buf.dwCursorPosition.X ;
    *y = (int)Buf.dwCursorPosition.Y ;
 
}

void clrscr(void)
{
    COORD Cur= {0, 0};
    unsigned long dwLen;

    FillConsoleOutputCharacter(STD_HANDLE, ' ', 80*25, Cur, &dwLen);
}

void sql_error(char *msg)
{
    char err_msg[128];
    size_t buf_len, msg_len;

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    printf("\n%s\n", msg);
    buf_len = sizeof (err_msg);
    sqlglm(err_msg, &buf_len, &msg_len);
    printf("%.*s\n", msg_len, err_msg);

    getch();
    /* EXEC SQL ROLLBACK WORK ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 6;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )1513;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



}