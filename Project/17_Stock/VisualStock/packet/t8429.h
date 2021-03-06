#ifndef _t8429_H_
#define _t8429_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// EUREX야간옵션선물틱분별체결조회챠트(t8429) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t8429     "t8429"

// 기본입력                       
typedef struct _t8429InBlock
{
    char    focode              [   8];    char    _focode              ;    // [string,    8] 단축코드                        StartPos 0, Length 8
    char    cgubun              [   1];    char    _cgubun              ;    // [string,    1] 챠트구분                        StartPos 9, Length 1
    char    bgubun              [   3];    char    _bgubun              ;    // [string,    3] 분구분                          StartPos 11, Length 3
    char    cnt                 [   3];    char    _cnt                 ;    // [string,    3] 조회건수                        StartPos 15, Length 3
} t8429InBlock, *LPt8429InBlock;
#define NAME_t8429InBlock     "t8429InBlock"

// 출력1                          , occurs
typedef struct _t8429OutBlock1
{
    char    chetime             [  10];    char    _chetime             ;    // [string,   10] 시간                            StartPos 0, Length 10
    char    price               [   6];    char    _price               ;    // [float ,  6.2] 현재가                          StartPos 11, Length 6
    char    sign                [   1];    char    _sign                ;    // [string,    1] 전일대비구분                    StartPos 18, Length 1
    char    change              [   6];    char    _change              ;    // [float ,  6.2] 전일대비                        StartPos 20, Length 6
    char    open                [   6];    char    _open                ;    // [float ,  6.2] 시가                            StartPos 27, Length 6
    char    high                [   6];    char    _high                ;    // [float ,  6.2] 고가                            StartPos 34, Length 6
    char    low                 [   6];    char    _low                 ;    // [float ,  6.2] 저가                            StartPos 41, Length 6
    char    volume              [  12];    char    _volume              ;    // [double,   12] 거래량                          StartPos 48, Length 12
    char    cvolume             [   8];    char    _cvolume             ;    // [long  ,    8] 체결수량                        StartPos 61, Length 8
    char    s_mschecnt          [   8];    char    _s_mschecnt          ;    // [long  ,    8] 매수순간체결건수                StartPos 70, Length 8
    char    s_mdchecnt          [   8];    char    _s_mdchecnt          ;    // [long  ,    8] 매도순간체결건수                StartPos 79, Length 8
    char    ss_mschecnt         [   8];    char    _ss_mschecnt         ;    // [long  ,    8] 순매수순간체결건수              StartPos 88, Length 8
    char    s_mschevol          [  12];    char    _s_mschevol          ;    // [double,   12] 매수순간체결량                  StartPos 97, Length 12
    char    s_mdchevol          [  12];    char    _s_mdchevol          ;    // [double,   12] 매도순간체결량                  StartPos 110, Length 12
    char    ss_mschevol         [  12];    char    _ss_mschevol         ;    // [double,   12] 순매수순간체결량                StartPos 123, Length 12
    char    chdegvol            [   8];    char    _chdegvol            ;    // [float ,  8.2] 체결강도(거래량)                StartPos 136, Length 8
    char    chdegcnt            [   8];    char    _chdegcnt            ;    // [float ,  8.2] 체결강도(건수)                  StartPos 145, Length 8
} t8429OutBlock1, *LPt8429OutBlock1;
#define NAME_t8429OutBlock1     "t8429OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t8429_H_
