#include <torch/extension.h>

namespace grouped_gemm {
  
torch::Tensor GroupedGemm(torch::Tensor a, torch::Tensor b, torch::Tensor batch_sizes);

}  // namespace grouped_gemm