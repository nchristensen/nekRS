
#include "ins.h"  

namespace neknek {



/*
void neknek_setup(void *handle, comm, elx[3], n[3], nel, m[3]  newt_tol=) {

  const struct comm *const comm; //passed in
  const double *const elx[3]; //passed in, possibly as single arrays
np
ndim = 3;
const unsigned n[3] = []; //passed in, possibly as individual dimensions
const uint nel // passed in
const unsigned m[3] = [2*lx1, 2*ly1, 2*lz10 //passed in
const double bbox_tol = 0.01 // Use a default value
int n = lx1*ly1*lz1*lelt;
const uint local_hash_size = n //set
const uint global_hash_size = n //set
const unsigned npt_max = 128 // use a default value
const double newt_tol = max(5e-13, tolin) //Use a default value



}
*/
/*
void neknek_field_to_usrwrk(occa::memory field, ){
  
  field.copyTo(ins->usrwrk, ins->NVfields*ins->fieldOffset*sizeof(dfloat));
  //printf("%g\n", ins->U[0]);
  //ins->o_U;
  //ins->U;
  //sizeof(dfloat)*ins->fieldOffset*ins->NVfields;

}
*/

void neknek_exchange(int count){
  ins->o_usrwrk.copyFrom(ins->usrwrk, sizeof(dfloat)*count, 0)
}


}

//end namespace
