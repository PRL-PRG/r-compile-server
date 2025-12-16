#? stdlib
`env_path` <- function (...) 
file.path(..., fsep = .Platform$path.sep)
