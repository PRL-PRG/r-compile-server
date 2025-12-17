fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.build_library_links_index` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg unlist:cls, reg lapply:cls, reg rev:cls, reg dir1:cls, reg dir2:*, reg dir3:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg _find_HTML_links_in_package:*, reg _find_HTML_links_in_package1:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V |
    mkenv;
    st dir = dir;
    unlist = ldf unlist;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p4 = prom<V +>{
      lapply = ldf lapply;
      p2 = prom<V +>{
        rev = ldf rev;
        p1 = prom<V +>{
          dir1 = ldf dir;
          p = prom<V +>{
            dir2 = ld dir;
            dir3 = force? dir2;
            checkMissing(dir3);
            return dir3;
          };
          r1 = dyn dir1[, `full.names`](p, TRUE);
          return r1;
        };
        r3 = dyn rev(p1);
        return r3;
      };
      p3 = prom<V +>{
        _find_HTML_links_in_package = ld `.find_HTML_links_in_package`;
        _find_HTML_links_in_package1 = force? _find_HTML_links_in_package;
        checkMissing(_find_HTML_links_in_package1);
        return _find_HTML_links_in_package1;
      };
      r6 = dyn lapply(p2, p3);
      return r6;
    };
    r8 = dyn unlist(p4);
    check L1() else D1();
  D1():
    deopt 3 [r8];
  L1():
    popenv;
    return r8;
  }
}