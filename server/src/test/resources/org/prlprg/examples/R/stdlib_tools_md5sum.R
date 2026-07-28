#? stdlib
`md5sum` <- function (files) 
{
    files <- path.expand(files)
    structure(.Call(C_Rmd5, files), names = files)
}

# Examples
as.vector(md5sum(dir(R.home(), pattern = "^COPY", full.names = TRUE)))

