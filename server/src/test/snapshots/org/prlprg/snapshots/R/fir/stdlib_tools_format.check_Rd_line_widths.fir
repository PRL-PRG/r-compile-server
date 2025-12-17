fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_Rd_line_widths` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg r7:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg attr:cls, reg r10:V, reg limit:*, reg limit1:V, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg limit2:*, reg limit3:V, reg names:cls, reg r14:V, reg r15:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg unlist:cls, reg lapply:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg x5:*, reg x6:V, reg names1:cls, reg r20:V, reg p:p(V +), reg _fmt:*, reg _fmt1:V, reg p1:p(V +), reg r23:V, reg p2:p(V +), reg r25:V, reg as_character:cls, reg r26:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L10() else L1();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    r7 = clos inner1236783023;
    st `.truncate` = r7;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L9() else D1();
  L10():
    character = ldf character;
    check L11() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  L3(r9):
    st limit = r9;
    limit = ld limit;
    check L19() else D6();
  L9():
    goto L0(r2);
  L11():
    r4 = dyn character();
    check L12() else D3();
  L15():
    x3 = ld x;
    check L17() else D4();
  L16():
    r8 = dyn base1(<sym x>, "limit");
    goto L3(r8);
  D3():
    deopt 9 [r4];
  D4():
    deopt 18 [x3];
  D6():
    deopt 24 [limit];
  L12():
    popenv;
    return r4;
  L17():
    x4 = force? x3;
    checkMissing(x4);
    attr = ldf attr in base;
    r10 = dyn attr(x4, "limit");
    check L18() else D5();
  L19():
    limit1 = force? limit;
    checkMissing(limit1);
    r11 = `-`(limit1, 5);
    st limit = r11;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  D5():
    deopt 22 [r10];
  L4(r13):
    st sections = r13;
    r15 = clos inner3369547807;
    st `.fmt` = r15;
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L18():
    goto L3(r10);
  L20():
    limit2 = ld limit;
    check L22() else D7();
  L21():
    r12 = dyn base2(<sym limit>);
    goto L4(r12);
  D7():
    deopt 31 [limit2];
  L5(r17):
    popenv;
    return r17;
  L22():
    limit3 = force? limit2;
    checkMissing(limit3);
    names = ldf names in base;
    r14 = dyn names(limit3);
    check L23() else D8();
  L24():
    unlist = ldf unlist;
    check L26() else D9();
  L25():
    r16 = dyn base3(<lang unlist(lapply(names(x), .fmt))>);
    goto L5(r16);
  D8():
    deopt 34 [r14];
  D9():
    deopt 42 [];
  L23():
    goto L4(r14);
  L26():
    p2 = prom<V +>{
      lapply = ldf lapply;
      p = prom<V +>{
        sym4 = ldf names;
        base4 = ldf names in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r19):
        return r19;
      L1():
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        names1 = ldf names in base;
        r20 = dyn names1(x6);
        goto L0(r20);
      L2():
        r18 = dyn base4(<sym x>);
        goto L0(r18);
      };
      p1 = prom<V +>{
        _fmt = ld `.fmt`;
        _fmt1 = force? _fmt;
        checkMissing(_fmt1);
        return _fmt1;
      };
      r23 = dyn lapply(p, p1);
      return r23;
    };
    r25 = dyn unlist(p2);
    check L27() else D10();
  D10():
    deopt 44 [r25];
  L27():
    as_character = ldf `as.character` in base;
    r26 = dyn as_character(r25);
    check L28() else D11();
  D11():
    deopt 46 [r26];
  L28():
    goto L5(r26);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg ifelse:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg s1:*, reg s2:V, reg nchar:cls, reg r2:V, reg r3:V, reg p:p(V +), reg paste:cls, reg substr:cls, reg s3:*, reg s4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg s5:*, reg s6:V, reg p4:p(V +), reg r11:V |
    mkenv;
    st s = s;
    ifelse = ldf ifelse;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf nchar;
      base = ldf nchar in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      r3 = `>`(r1, 140);
      return r3;
    L1():
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      nchar = ldf nchar in base;
      r2 = dyn nchar(s2, "chars", FALSE, NA_LGL);
      goto L0(r2);
    L2():
      r = dyn base(<sym s>);
      goto L0(r);
    };
    p3 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        substr = ldf substr;
        p1 = prom<V +>{
          s3 = ld s;
          s4 = force? s3;
          checkMissing(s4);
          return s4;
        };
        r6 = dyn substr(p1, 1.0, 140);
        return r6;
      };
      r8 = dyn paste(p2, "... [TRUNCATED]");
      return r8;
    };
    p4 = prom<V +>{
      s5 = ld s;
      s6 = force? s5;
      checkMissing(s6);
      return s6;
    };
    r11 = dyn ifelse(p, p3, p4);
    check L1() else D1();
  D1():
    deopt 5 [r11];
  L1():
    popenv;
    return r11;
  }
}
fun inner3369547807(nm) {
  (reg nm:*) -+> V { var nm:*, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nm1:*, reg nm2:V, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sprintf:cls, reg nm3:*, reg nm4:V, reg p:p(V +), reg r4:V, reg unlist:cls, reg lapply:cls, reg sections:*, reg sections1:V, reg p1:p(V +), reg r6:cls, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg c1:cls, reg r11:V |
    mkenv;
    st nm = nm;
    x = ld x;
    check L2() else D0();
  D0():
    deopt 0 [x];
  L2():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L3() else L4(x1);
  L0(dx1):
    st y = dx1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L3():
    dr = tryDispatchBuiltin.1("[[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(x3):
    nm1 = ld nm;
    check L6() else D1();
  D1():
    deopt 2 [x3, nm1];
  L1(r2):
    popenv;
    return r2;
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    nm2 = force? nm1;
    __ = ldf `[[` in base;
    r = dyn __(x3, nm2);
    goto L0(r);
  L7():
    sprintf = ldf sprintf;
    check L9() else D2();
  L8():
    r1 = dyn base(<lang sprintf("Rd file '%s':", nm)>, <lang unlist(lapply(sections, function((s=), {
            `<-`(lines, `[[`(y, s));
            if(`!`(length(lines)), character(), {
                c(sprintf("  \\%s lines wider than %d characters:", s, `[`(limit, s)), .truncate(lines))
              })
          }, NULL)), use.names=FALSE)>, "");
    goto L1(r1);
  D2():
    deopt 9 [];
  L9():
    p = prom<V +>{
      nm3 = ld nm;
      nm4 = force? nm3;
      checkMissing(nm4);
      return nm4;
    };
    r4 = dyn sprintf("Rd file '%s':", p);
    check L10() else D3();
  D3():
    deopt 12 [r4];
  L10():
    unlist = ldf unlist;
    check L11() else D4();
  D4():
    deopt 14 [];
  L11():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        sections = ld sections;
        sections1 = force? sections;
        checkMissing(sections1);
        return sections1;
      };
      p2 = prom<V +>{
        r6 = clos inner1236783023;
        return r6;
      };
      r8 = dyn lapply(p1, p2);
      return r8;
    };
    r10 = dyn unlist[, `use.names`](p3, FALSE);
    check L12() else D5();
  D5():
    deopt 18 [r10];
  L12():
    c1 = ldf c in base;
    r11 = dyn c1(r4, r10, "");
    check L13() else D6();
  D6():
    deopt 21 [r11];
  L13():
    goto L1(r11);
  }
}