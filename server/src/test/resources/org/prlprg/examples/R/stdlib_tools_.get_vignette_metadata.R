#? stdlib
`.get_vignette_metadata` <- function (lines, tag) 
{
    meta_RE <- paste0("[[:space:]]*%+[[:space:]]*\\\\Vignette", 
        tag, "\\{([^}]*(\\{[^}]*\\})*[^}]*)\\}.*")
    meta <- grep(meta_RE, lines, value = TRUE, useBytes = TRUE)
    trimws(gsub(meta_RE, "\\1", meta))
}
