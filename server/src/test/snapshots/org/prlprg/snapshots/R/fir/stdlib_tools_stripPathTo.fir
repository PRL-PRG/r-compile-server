fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2073578675;
    st stripPathTo = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2073578675(path, first) {
  (reg path:*, reg first:*) -+> V { var path:*, var first:*, reg paste0:cls, reg first1:*, reg first2:V, reg p:p(V +), reg r1:V, reg sub:cls, reg pattern:*, reg pattern1:V, reg p1:p(V +), reg path1:*, reg path2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st path = path;
    st first = first;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      first1 = ld first;
      first2 = force? first1;
      checkMissing(first2);
      return first2;
    };
    r1 = dyn paste0("^.*[/\\]", p, "[/\\]");
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st pattern = r1;
    sub = ldf sub;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p2 = prom<V +>{
      path1 = ld path;
      path2 = force? path1;
      checkMissing(path2);
      return path2;
    };
    r4 = dyn sub(p1, "", p2);
    check L3() else D3();
  D3():
    deopt 12 [r4];
  L3():
    popenv;
    return r4;
  }
}