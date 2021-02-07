#ifndef __KERNEL__
#define __KERNEL__

#define KERNEL_ITERS 100000000

struct benchmark_gpu;

struct benchmark_gpu* init_benchmark_gpu(struct gpu* gpu, int nbk, int tpb);
double get_gflops_gpu(struct benchmark_gpu* bench);
bool compute_gpu(struct benchmark_gpu* bench);
const char* get_benchmark_name_gpu(struct benchmark_gpu* bench);
void exit_benchmark_gpu();
char* get_str_gpu_name(struct gpu* gpu);
const char* get_str_gpu_uarch(struct gpu* gpu);
struct gpu* get_gpu_info();
int get_n_blocks(struct benchmark_gpu* bench);
int get_threads_per_block(struct benchmark_gpu* bench);

#endif