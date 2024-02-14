# This script is used to generate the `.ast.rds` and `.bc.rds` files from the closures in other scripts
.args <- commandArgs(trailingOnly = TRUE)
.source <- .args[1]
.target <- .args[2]

source(.source, chdir = TRUE, keep.source = TRUE)
dir.create(.target)
for (.name in ls()) {
  if (is.function(get(.name))) {
    .func <- get(.name)
    print(attributes(.func))
    saveRDS(.func, compress = FALSE, file = file.path(.target, paste0(.name, ".ast.rds")))
    saveRDS(compiler::cmpfun(.func), compress = FALSE, file = file.path(.target, paste0(.name, ".bc.rds")))
  }
}