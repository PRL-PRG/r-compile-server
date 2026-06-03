#? stdlib
`mime_type` <- function (path, ext = NULL) 
{
    stopifnot(length(path) == 1L)
    if (missing(ext)) 
        ext <- file_ext(path)
    switch(ext, css = "text/css", js = "text/javascript", sgml = "text/sgml", 
        xml = "text/xml", html = "text/html", htm = "text/html", 
        xhtml = "application/xhtml+xml", php = "application/x-httpd-php", 
        epub = "application/epub+zip", csv = "text/csv", json = "application/json", 
        jsonld = "application/ld+json", mjs = "text/javascript", 
        gif = "image/gif", jpg = "image/jpeg", jpeg = "image/jpeg", 
        png = "image/png", svg = "image/svg+xml", apng = "image/apng", 
        avif = "image/avif", webp = "image/webp", bmp = "image/bmp", 
        ico = "image/x-icon", tiff = "image/tiff", tif = "image/tiff", 
        pdf = "application/pdf", eps = , ps = "application/postscript", 
        eot = "application/vnd.ms-fontobject", otf = "font/otf", 
        ttf = "font/ttf", woff = "font/woff", woff2 = "font/woff2", 
        aac = "audio/aac", avi = "video/x-msvideo", cda = "application/x-cdf", 
        mid = "audio/x-midi", midi = "audio/x-midi", mp3 = "audio/mpeg", 
        mp4 = "video/mp4", mpeg = "video/mpeg", oga = "audio/ogg", 
        ogv = "video/ogg", ogx = "application/ogg", opus = "audio/opus", 
        `3gp` = "video/3gpp", `3g2` = "video/3gpp2", wav = "audio/wav", 
        weba = "audio/webm", webm = "video/webm", bz = "application/x-bzip", 
        bz2 = "application/x-bzip2", gz = "application/gzip", 
        rar = "application/vnd.rar", zip = "application/zip", 
        `7z` = "application/x-7z-compressed", tar = "application/x-tar", 
        "text/plain")
}
