#? stdlib
`.license_component_is_for_stub_and_ok` <- function (com, dir) 
{
    parts <- unlist(strsplit(com, "[[:space:]]*\\+[[:space:]]*file *"))
    fields_for_stubs <- c(rep.int(list(c("YEAR", "COPYRIGHT HOLDER")), 
        4L), rep.int(list(c("YEAR", "COPYRIGHT HOLDER", "ORGANIZATION")), 
        2L))
    names(fields_for_stubs) <- c("MIT License", "MIT", "BSD 2-clause License", 
        "BSD_2_clause", "BSD 3-clause License", "BSD_3_clause")
    fields_to_have <- fields_for_stubs[[parts[1L]]]
    if (is.null(fields_to_have)) 
        return(1L)
    fields <- tryCatch(read.dcf(file.path(dir, parts[2L])), error = identity)
    if (inherits(fields, "error")) 
        return(2L)
    if (!identical(sort(colnames(fields)), sort(fields_to_have))) 
        return(3L)
    if (!all(!is.na(fields) & nzchar(fields))) 
        return(4L)
    0L
}
