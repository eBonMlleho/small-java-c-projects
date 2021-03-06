/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _FINAL_H_RPCGEN
#define _FINAL_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


typedef int arr[10];

#define HW2 0x31234567
#define DATE_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define APPEND 1
extern  bool_t * append_1(int *, CLIENT *);
extern  bool_t * append_1_svc(int *, struct svc_req *);
#define QUERY 2
extern  int * query_1(int *, CLIENT *);
extern  int * query_1_svc(int *, struct svc_req *);
#define REMOVE 3
extern  bool_t * remove_1(int *, CLIENT *);
extern  bool_t * remove_1_svc(int *, struct svc_req *);
extern int hw2_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define APPEND 1
extern  bool_t * append_1();
extern  bool_t * append_1_svc();
#define QUERY 2
extern  int * query_1();
extern  int * query_1_svc();
#define REMOVE 3
extern  bool_t * remove_1();
extern  bool_t * remove_1_svc();
extern int hw2_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_arr (XDR *, arr);

#else /* K&R C */
extern bool_t xdr_arr ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_FINAL_H_RPCGEN */
