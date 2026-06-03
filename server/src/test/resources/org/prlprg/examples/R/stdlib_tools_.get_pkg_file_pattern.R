#? stdlib
`.get_pkg_file_pattern` <- function (type = c("source", "mac.binary", "win.binary"), ext.only = FALSE) 
{
    type <- match.arg(type)
    ret = switch(type, source = "_.*\\.tar\\.[^_]*$", mac.binary = "_.*\\.tgz$", 
        win.binary = "_.*\\.zip$")
    if (ext.only) 
        ret = gsub("_.*", "", fixed = TRUE, ret)
    ret
}
