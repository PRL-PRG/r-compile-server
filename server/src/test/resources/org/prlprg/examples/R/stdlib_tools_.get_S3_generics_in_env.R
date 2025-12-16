#? stdlib
`.get_S3_generics_in_env` <- function (env, nms = NULL) 
{
    if (is.null(nms)) 
        nms <- sort(names(env))
    if (".no_S3_generics" %in% nms) 
        character()
    else Filter(function(f) .is_S3_generic(f, envir = env), nms)
}
