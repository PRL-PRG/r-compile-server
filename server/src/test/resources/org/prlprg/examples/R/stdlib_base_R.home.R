#? stdlib
`R.home` <- function (component = "home") 
{
    rh <- .Internal(R.home())
    switch(component, home = rh, bin = if (.Platform$OS.type == 
        "windows" && nzchar(p <- .Platform$r_arch)) file.path(rh, 
        component, p) else file.path(rh, component), share = if (nzchar(p <- Sys.getenv("R_SHARE_DIR"))) p else file.path(rh, 
        component), doc = if (nzchar(p <- Sys.getenv("R_DOC_DIR"))) p else file.path(rh, 
        component), include = if (nzchar(p <- Sys.getenv("R_INCLUDE_DIR"))) p else file.path(rh, 
        component), modules = if (nzchar(p <- .Platform$r_arch)) file.path(rh, 
        component, p) else file.path(rh, component), file.path(rh, 
        component))
}
