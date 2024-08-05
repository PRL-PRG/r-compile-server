# Enable bytecode JIT compilation on startup
# To use as the current R profile, run `export R_PROFILE=path/to/.Rprofile`
dyn.load(file.path(R.home(), "library", "rsh", "libs", "rsh.so"))
rsh::enable_bc_jit()

.First <- function(){
  if(interactive()){
    print("##--- Running R with bytecode JIT compilation ---##")
  }
}
