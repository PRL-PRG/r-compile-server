#? stdlib
`.get_urls_from_HTML_file` <- function (f) 
{
    doc <- xml2::read_html(f)
    if (!inherits(doc, "xml_node")) 
        return(character())
    nodes <- xml2::xml_find_all(doc, "//a")
    hrefs <- xml2::xml_attr(nodes, "href")
    unique(hrefs[!is.na(hrefs) & !startsWith(hrefs, "#")])
}
