//
//  smm_node.c
//  SMMarble
//
//  Created by Juyeop Kim on 2023/11/05.
//

#include "smm_common.h"
//#include "smm_object.h"
#include <string.h>

#define MAX_NODETYPE    7
#define MAX_GRADE       9
#define MAX_NODE        100

//1.구조체 형식 정의 
typedef enum smmObjType{
        smmObjcType_board=0,
        smmObjcType_card,
        smmObjcType_grade
        } smmObjType_e;
        
typedef enum smmObjGrade {
        smmObjGrade_Ap=0,
        smmObjGrade_A0,
        smmObjGrade_Am,
        smmObjGrade_Bp,
        smmObjGrade_B0,
        smmObjGrade_Bm,
        smmObjGrade_Cp,
        smmObjGrade_C0,
        smmObjGrade_Cm,
        } smmObjGrade_e;
        
typedef struct smmObject{
       char name[MAX_CHARNAME];
       smmObjType_e type;
      // int type;
       int credit;
       int energy;
      // smmObjGrade_e;
} smmObject_t;

//2.구조체 배열 변수 정의 
smmObject_t smm_node[MAX_NODE];
//static int smmObj_noNode = 0;
#if 0
static char smmObj_name[MAX_NODE][MAX_CHARNAME];
static int smmObj_type[MAX_NODE][MAX_CHARNAME];
static int smmObj_credit[MAX_NODE];
static int smmObj_energy[MAX_NODE];
#endif
static int smmObj_noNode=0;

//3.관련 함수 변경
//object generation 
void smmObj_genObject(char* name, int type, int credit, int energy)
{
     smmObject_t* ptr;
     
     ptr=(smmObject_t)
    #if 0
    strcpy(smmObj_name[smmObj_noNode], name);
    smmObj_type[smmObj_noNode] = type;
    smmObj_credit[smmObj_noNode] = credit;
    smmObj_energy[smmObj_noNode] = energy;
    smmObj_noNode++;
    #endif
    strcpy(smm_node[smmObj_noNode].name, name);
}

static char smmNODENAME[SMMNODE_TYPE_MAX][MAX_CHARNAME]=
{
       "강의",
       "식당",
       "실험실",
       "집",
       "실험실로 이동",
       "음식찬스",
       "축제시간"
};

char* smmObj_getTYPENAME(int type) 
{
     return smm_node[node_nr].type;
}
//object generation
void smmObj_genNode(int)
{
    
}



//member retrieving



//element to string
char* smmObj_getNodeName(void* obj)
{
    smmObject_t* ptr=(smmObject_t*)obj;
    return ptr->name;
}

int smmObject_getNodeType Iint node_nr)
{
    return smm_node[node_nr].type;
}

int smmObj_getNodeCredit(int node_nr)
{
    return smm_node[node_nr].type;
}

int smmObj_getNodeType(int node_nr)
{
    retrun smm_node[node_nr].type;
}

char* smmObj_getGradeName(smmGrade_e grade)
{
    return smmGradeName[grade];
}

