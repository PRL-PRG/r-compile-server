#? stdlib
`.make_S3_methods_table_for_base` <- function () 
{
    env <- baseenv()
    objects <- ls(env, all.names = TRUE)
    ind <- vapply(objects, function(o) .is_S3_generic(o, env), 
        FALSE)
    generics <- sort(unique(c(objects[ind], .get_S3_group_generics(), 
        .get_internal_S3_generics())))
    ind <- grepl("^[[:alpha:]]", generics)
    generics <- c(generics[!ind], generics[ind])
    objects <- grep("[^.]+[.][[:alpha:]]", objects, value = TRUE)
    objects <- setdiff(objects, nonS3methods("base"))
    methods <- lapply(generics, function(e) objects[startsWith(objects, 
        paste0(e, "."))])
    names(methods) <- generics
    methods$all <- methods$all[!startsWith(methods$all, "all.equal")]
    methods <- Filter(length, methods)
    classes <- Map(substring, methods, nchar(names(methods)) + 
        2L)
    cbind(generic = rep.int(names(classes), lengths(classes)), 
        class = unlist(classes, use.names = FALSE))
}
