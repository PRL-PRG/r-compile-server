#? stdlib
`.expand_R_libs_env_var` <- function (x) 
{
    v <- paste(R.version[c("major", "minor")], collapse = ".")
    s <- Sys.info()
    R_LIBS_USER_default <- function() {
        home <- normalizePath("~", mustWork = FALSE)
        x.y <- paste(R.version$major, sep = ".", strsplit(R.version$minor, 
            ".", fixed = TRUE)[[1L]][1L])
        if (.Platform$OS.type == "windows" && s["machine"] == 
            "x86-64") 
            file.path(Sys.getenv("LOCALAPPDATA"), "R", "win-library", 
                x.y)
        else if (.Platform$OS.type == "windows") 
            file.path(Sys.getenv("LOCALAPPDATA"), "R", paste0(s["machine"], 
                "-library"), x.y)
        else if (s["sysname"] == "Darwin") 
            file.path(home, "Library", "R", s["machine"], x.y, 
                "library")
        else file.path(home, "R", paste0(R.version$platform, 
            "-library"), x.y)
    }
    R_LIBS_SITE_default <- file.path(R.home(), "site-library")
    expand <- function(x, spec, expansion) {
        replace <- sprintf("\\1\\2%s", gsub("([\\])", "\\\\\\1", 
            expansion))
        gsub(paste0("(^|[^%])(%%)*%", spec), replace, x)
    }
    x <- expand(x, "V", v)
    x <- expand(x, "v", sub("\\.[^.]*$", "", v))
    x <- expand(x, "p", R.version$platform)
    x <- expand(x, "a", R.version$arch)
    x <- expand(x, "o", R.version$os)
    x <- expand(x, "U", R_LIBS_USER_default())
    x <- expand(x, "S", R_LIBS_SITE_default)
    gsub("%%", "%", x, fixed = TRUE)
}
