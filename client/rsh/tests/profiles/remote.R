# Enable bytecode JIT compilation on startup
#
# To use as the current R profile, run `export R_PROFILE=path/to/remote.R`
#
# If R is invoked from the parent directory, this profile will be loaded at
# startup. However, it will _not_ be loaded if another R process is spawned
# (for example, by R CMD INSTALL or install.packages()). In this case, it
# is necessary to use the environment variable.

dyn.load(paste(R.home(), "library/rsh/libs/rsh.so", sep="/"), local = FALSE)
rsh::enable_bc_jit()

.First <- function(){
  if(interactive()){
    print("##--- Running R with bytecode JIT compilation ---##")
  }
}
