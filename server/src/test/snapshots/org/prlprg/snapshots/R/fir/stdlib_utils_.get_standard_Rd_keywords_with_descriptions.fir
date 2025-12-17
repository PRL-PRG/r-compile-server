fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.get_standard_Rd_keywords_with_descriptions` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg readLines:cls, reg file_path:cls, reg R_home:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg grep:cls, reg lines:*, reg lines1:V, reg p2:p(V +), reg r6:V, reg sub:cls, reg lines2:*, reg lines3:V, reg p3:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg sub1:cls, reg lines4:*, reg lines5:V, reg p4:p(V +), reg r12:V, reg sub2:cls, reg lines6:*, reg lines7:V, reg p5:p(V +), reg r14:V, reg list:cls, reg r15:V |
    mkenv;
    readLines = ldf readLines;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
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
    check L2() else D1();
  D1():
    deopt 3 [r4];
  L2():
    st lines = r4;
    grep = ldf grep;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p2 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r6 = dyn grep[, , value]("^.*\\|([^:]*):.*", p2, TRUE);
    check L4() else D3();
  D3():
    deopt 11 [r6];
  L4():
    st lines = r6;
    sub = ldf sub;
    check L5() else D4();
  D4():
    deopt 14 [];
  L5():
    p3 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      return lines3;
    };
    r8 = dyn sub("[[:space:]]*#.*", "", p3);
    check L6() else D5();
  D5():
    deopt 18 [r8];
  L6():
    st lines = r8;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r10):
    popenv;
    return r10;
  L7():
    sub1 = ldf sub;
    check L9() else D6();
  L8():
    r9 = dyn base[Keywords, Descriptions](<lang sub("^.*\\|([^:]*):.*", "\\1", lines)>, <lang sub(".*:[[:space:]]*", "", lines)>);
    goto L0(r9);
  D6():
    deopt 23 [];
  L9():
    p4 = prom<V +>{
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      return lines5;
    };
    r12 = dyn sub1("^.*\\|([^:]*):.*", "\\1", p4);
    check L10() else D7();
  D7():
    deopt 27 [r12];
  L10():
    sub2 = ldf sub;
    check L11() else D8();
  D8():
    deopt 30 [];
  L11():
    p5 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      return lines7;
    };
    r14 = dyn sub2(".*:[[:space:]]*", "", p5);
    check L12() else D9();
  D9():
    deopt 34 [r14];
  L12():
    list = ldf list in base;
    r15 = dyn list(r12, r14);
    check L13() else D10();
  D10():
    deopt 37 [r15];
  L13():
    goto L0(r15);
  }
}