#ifndef __THREAD_FIXED_POINT_H
#define __THREAD_FIXED_POINT_H

/* Dinh nghia co ban ve fixed_point number */
typedef int fixed_t;

/* 15 LSB duoc su dung cho phan thap phan. */
#define FP_SHIFT_AMOUNT 15

/* chuyen gia tri sang fixed point number */
#define FP_CONST(A) ((fixed_t)(A << FP_SHIFT_AMOUNT))

/* Cong hai so fixed point number */
#define FP_ADD(A,B) (A + B)

/* Cong mot so fixed-point A va mot so nguyen B. */
#define FP_ADD_MIX(A,B) (A + (B << FP_SHIFT_AMOUNT))

/* Tru hai so fixed-point */
#define FP_SUB(A,B) (A - B)

/* Tru mot gia tri nguyen B tu mot so fixed-point  A */
#define FP_SUB_MIX(A,B) (A - (B << FP_SHIFT_AMOUNT))

/* Nhan so fixed-point A voi so nguyen gia tri B. */
#define FP_MULT_MIX(A,B) (A * B)

/* Chi so fixed-point gia tri A cho mot so nguyen gia tri B. */
#define FP_DIV_MIX(A,B) (A / B)

/* Nhan hai so fixed point number A va B */
#define FP_MULT(A,B) ((fixed_t)(((int64_t) A) * B >> FP_SHIFT_AMOUNT))

/* Chia hai so fixed-point */
#define FP_DIV(A,B) ((fixed_t)((((int64_t) A) << FP_SHIFT_AMOUNT) / B))

/* Lay phan nguyen cua fixed-point . */
#define FP_INT_PART(A) (A >> FP_SHIFT_AMOUNT)

/* Chuyen doi sang so nguyen va lam tron tu so fixed-point */
#define FP_ROUND(A) (A >= 0 ? ((A + (1 << (FP_SHIFT_AMOUNT - 1))) >> FP_SHIFT_AMOUNT) \
        : ((A - (1 << (FP_SHIFT_AMOUNT - 1))) >> FP_SHIFT_AMOUNT))

// ket thuc dinh nghia fixed_point.h
// ket thuc
#endif /* thread/fixed_point.h */