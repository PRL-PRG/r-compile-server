fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.get_standard_Rd_keywords` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg readLines:cls, reg file_path:cls, reg R_home:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg grep:cls, reg lines:*, reg lines1:V, reg p2:p(V +), reg r6:V, reg sub:cls, reg lines2:*, reg lines3:V, reg p3:p(V +), reg r8:V, reg lines4:*, reg lines5:V |
    mkenv;
    readLines = ldf readLines;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        R_home = ldf `R.home`;
        r = dyn R_home("doc");
        return r;
      };
      r2 = dyn file_path(p, "KEYWORDS.db");
      return r2;
    };
    r4 = dyn readLines(p1);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    st lines = r4;
    grep = ldf grep;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p2 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r6 = dyn grep[, , value]("^.*\\|([^:]*):.*", p2, TRUE);
    check L3() else D3();
  D3():
    deopt 11 [r6];
  L3():
    st lines = r6;
    sub = ldf sub;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p3 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      return lines3;
    };
    r8 = dyn sub("^.*\\|([^:]*):.*", "\\1", p3);
    check L5() else D5();
  D5():
    deopt 18 [r8];
  L5():
    st lines = r8;
    lines4 = ld lines;
    check L6() else D6();
  D6():
    deopt 20 [lines4];
  L6():
    lines5 = force? lines4;
    checkMissing(lines5);
    popenv;
    return lines5;
  }
}