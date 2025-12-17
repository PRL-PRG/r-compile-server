fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.checkVignettes` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg character:cls, reg r3:V, reg myfmt:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p:p(V +), reg r6:V, reg myfmt1:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg p1:p(V +), reg r9:V, reg myfmt2:cls, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r10:V, reg p2:p(V +), reg r12:V, reg myfmt3:cls, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r13:V, reg p3:p(V +), reg r15:V, reg c4:cls, reg r16:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner1080349355;
    st myfmt = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r2):
    popenv;
    return r2;
  L1():
    character = ldf character;
    check L3() else D0();
  L2():
    r1 = dyn base(<lang character()>, <lang myfmt(`$`(x, tangle), "*** Tangle Errors ***")>, <lang myfmt(`$`(x, source), "*** Source Errors ***")>, <lang myfmt(`$`(x, weave), "*** Weave Errors ***")>, <lang myfmt(`$`(x, latex), "*** PDFLaTeX Errors ***")>);
    goto L0(r1);
  D0():
    deopt 6 [];
  L3():
    r3 = dyn character();
    check L4() else D1();
  D1():
    deopt 7 [r3];
  L4():
    myfmt = ldf myfmt;
    check L5() else D2();
  D2():
    deopt 9 [];
  L5():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r4 = `$`(x4, <sym tangle>);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn myfmt(p, "*** Tangle Errors ***");
    check L6() else D3();
  D3():
    deopt 12 [r6];
  L6():
    myfmt1 = ldf myfmt;
    check L7() else D4();
  D4():
    deopt 14 [];
  L7():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r7 = `$`(x8, <sym source>);
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r9 = dyn myfmt1(p1, "*** Source Errors ***");
    check L8() else D5();
  D5():
    deopt 17 [r9];
  L8():
    myfmt2 = ldf myfmt;
    check L9() else D6();
  D6():
    deopt 19 [];
  L9():
    p2 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c2 = `is.object`(x10);
      if c2 then L1() else L2(x10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x12):
      r10 = `$`(x12, <sym weave>);
      goto L0(r10);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r12 = dyn myfmt2(p2, "*** Weave Errors ***");
    check L10() else D7();
  D7():
    deopt 22 [r12];
  L10():
    myfmt3 = ldf myfmt;
    check L11() else D8();
  D8():
    deopt 24 [];
  L11():
    p3 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c3 = `is.object`(x14);
      if c3 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r13 = `$`(x16, <sym latex>);
      goto L0(r13);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r15 = dyn myfmt3(p3, "*** PDFLaTeX Errors ***");
    check L12() else D9();
  D9():
    deopt 27 [r15];
  L12():
    c4 = ldf c in base;
    r16 = dyn c4(r3, r6, r9, r12, r15);
    check L13() else D10();
  D10():
    deopt 29 [r16];
  L13():
    goto L0(r16);
  }
}
fun inner1080349355(y, title) {
  (reg y:*, reg title:*) -+> V { var y:*, var title:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg y1:*, reg y2:V, reg length:cls, reg r2:V, reg c:L, reg paste:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg paste1:cls, reg title1:*, reg title2:V, reg p:p(V +), reg r6:V, reg unlist:cls, reg Map:cls, reg c1:*, reg c2:V, reg p1:p(V +), reg paste2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg y3:*, reg y4:V, reg names:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg lapply:cls, reg y5:*, reg y6:V, reg p4:p(V +), reg as_character:*, reg as_character1:V, reg p5:p(V +), reg r16:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:V, reg c3:cls, reg r21:V, reg p8:p(V +), reg r23:V |
    mkenv;
    st y = y;
    st title = title;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    y1 = ld y;
    check L4() else D0();
  L3():
    r = dyn base(<sym y>);
    goto L0(r);
  D0():
    deopt 2 [y1];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L4():
    y2 = force? y1;
    checkMissing(y2);
    length = ldf length in base;
    r2 = dyn length(y2);
    check L5() else D1();
  L6():
    paste = ldf paste;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L5():
    goto L0(r2);
  L7():
    p8 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      paste1 = ldf paste0;
      p = prom<V +>{
        title1 = ld title;
        title2 = force? title1;
        checkMissing(title2);
        return title2;
      };
      r6 = dyn paste1("\n", p, "\n");
      unlist = ldf unlist;
      p7 = prom<V +>{
        Map = ldf Map;
        p1 = prom<V +>{
          c1 = ld c;
          c2 = force? c1;
          checkMissing(c2);
          return c2;
        };
        p3 = prom<V +>{
          paste2 = ldf paste0;
          p2 = prom<V +>{
            sym2 = ldf names;
            base2 = ldf names in base;
            guard2 = `==`.4(sym2, base2);
            if guard2 then L1() else L2();
          L0(r9):
            return r9;
          L1():
            y3 = ld y;
            y4 = force? y3;
            checkMissing(y4);
            names = ldf names in base;
            r10 = dyn names(y4);
            goto L0(r10);
          L2():
            r8 = dyn base2(<sym y>);
            goto L0(r8);
          };
          r12 = dyn paste2("File ", p2, ":");
          return r12;
        };
        p6 = prom<V +>{
          lapply = ldf lapply;
          p4 = prom<V +>{
            y5 = ld y;
            y6 = force? y5;
            checkMissing(y6);
            return y6;
          };
          p5 = prom<V +>{
            as_character = ld `as.character`;
            as_character1 = force? as_character;
            checkMissing(as_character1);
            return as_character1;
          };
          r16 = dyn lapply(p4, p5);
          return r16;
        };
        r18 = dyn Map(p1, p3, p6);
        return r18;
      };
      r20 = dyn unlist[, `use.names`](p7, FALSE);
      c3 = ldf c in base;
      r21 = dyn c3(r6, r20);
      goto L0(r21);
    L2():
      r3 = dyn base1(<lang paste0("\n", title, "\n")>, <lang unlist(Map(c, paste0("File ", names(y), ":"), lapply(y, as.character)), use.names=FALSE)>);
      goto L0(r3);
    };
    r23 = dyn paste[, collapse](p8, "\n");
    check L8() else D3();
  D3():
    deopt 11 [r23];
  L8():
    popenv;
    return r23;
  }
}