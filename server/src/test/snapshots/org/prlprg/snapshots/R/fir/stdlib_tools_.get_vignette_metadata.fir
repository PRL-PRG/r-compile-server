fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1387554919;
    st `.get_vignette_metadata` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1387554919(lines, tag) {
  (reg lines:*, reg tag:*) -+> V { var lines:*, var tag:*, reg paste0:cls, reg tag1:*, reg tag2:V, reg p:p(V +), reg r1:V, reg grep:cls, reg meta_RE:*, reg meta_RE1:V, reg p1:p(V +), reg lines1:*, reg lines2:V, reg p2:p(V +), reg r4:V, reg trimws:cls, reg gsub:cls, reg meta_RE2:*, reg meta_RE3:V, reg p3:p(V +), reg meta:*, reg meta1:V, reg p4:p(V +), reg r7:V, reg p5:p(V +), reg r9:V |
    mkenv;
    st lines = lines;
    st tag = tag;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      tag1 = ld tag;
      tag2 = force? tag1;
      checkMissing(tag2);
      return tag2;
    };
    r1 = dyn paste0("[[:space:]]*%+[[:space:]]*\\\\Vignette", p, "\\{([^}]*(\\{[^}]*\\})*[^}]*)\\}.*");
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st meta_RE = r1;
    grep = ldf grep;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      meta_RE = ld meta_RE;
      meta_RE1 = force? meta_RE;
      checkMissing(meta_RE1);
      return meta_RE1;
    };
    p2 = prom<V +>{
      lines1 = ld lines;
      lines2 = force? lines1;
      checkMissing(lines2);
      return lines2;
    };
    r4 = dyn grep[, , value, useBytes](p1, p2, TRUE, TRUE);
    check L3() else D3();
  D3():
    deopt 15 [r4];
  L3():
    st meta = r4;
    trimws = ldf trimws;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p5 = prom<V +>{
      gsub = ldf gsub;
      p3 = prom<V +>{
        meta_RE2 = ld meta_RE;
        meta_RE3 = force? meta_RE2;
        checkMissing(meta_RE3);
        return meta_RE3;
      };
      p4 = prom<V +>{
        meta = ld meta;
        meta1 = force? meta;
        checkMissing(meta1);
        return meta1;
      };
      r7 = dyn gsub(p3, "\\1", p4);
      return r7;
    };
    r9 = dyn trimws(p5);
    check L5() else D5();
  D5():
    deopt 20 [r9];
  L5():
    popenv;
    return r9;
  }
}