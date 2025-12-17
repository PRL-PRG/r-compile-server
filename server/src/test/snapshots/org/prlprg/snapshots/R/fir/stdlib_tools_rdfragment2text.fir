fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner411216918;
    st rdfragment2text = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner411216918(rd, html) {
  (reg rd:*, reg html:*) -+> V { var rd:*, var html:*, reg html_isMissing:L, reg html_orDefault:*, reg html1:*, reg html2:V, reg c:L, reg trimws:cls, reg __:cls, reg r:V, reg r1:cls, reg Rd2HTML:cls, reg rd1:*, reg rd2:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg which:cls, reg startsWith:cls, reg s:*, reg s1:V, reg p3:p(V +), reg r9:V, reg endsWith:cls, reg s2:*, reg s3:V, reg p4:p(V +), reg r11:V, reg r12:V, reg r13:V, reg p5:p(V +), reg r15:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg i:*, reg i1:V, reg length:cls, reg r18:V, reg c1:L, reg s4:*, reg s5:V, reg c2:L, reg s7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i2:*, reg i3:V, reg __1:cls, reg r19:V, reg which1:cls, reg lengths:cls, reg gregexpr:cls, reg z:*, reg z1:V, reg p6:p(V +), reg r21:V, reg p7:p(V +), reg r23:V, reg __2:cls, reg r24:V, reg r25:V, reg p8:p(V +), reg r27:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg r29:V, reg j:*, reg j1:V, reg length1:cls, reg r30:V, reg c3:L, reg paste0:cls, reg z2:*, reg z3:V, reg c4:L, reg z5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg j2:*, reg j3:V, reg __3:cls, reg r31:V, reg p9:p(V +), reg r33:V, reg l:*, reg c5:L, reg r35:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r37:V, reg dx5:V, reg i4:*, reg i5:V, reg c6:L, reg r40:V, reg l4:*, reg r41:V, reg i7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r44:V, reg l6:*, reg r45:V, reg dx7:V, reg j4:*, reg j5:V, reg __4:cls, reg r46:V, reg ___:cls, reg r47:V, reg r48:V, reg paste1:cls, reg s8:*, reg s9:V, reg p10:p(V +), reg r51:V, reg trimws1:cls, reg paste2:cls, reg __5:cls, reg r52:V, reg r53:cls, reg Rd2txt:cls, reg rd3:*, reg rd4:V, reg p11:p(V +), reg r55:V, reg p12:p(V +), reg r57:V, reg p13:p(V +), reg r59:V, reg p14:p(V +), reg r61:V |
    mkenv;
    st rd = rd;
    html_isMissing = missing.0(html);
    if html_isMissing then L0(TRUE) else L0(html);
  L0(html_orDefault):
    st html = html_orDefault;
    html1 = ld html;
    check L11() else D0();
  D0():
    deopt 0 [html1];
  L11():
    html2 = force? html1;
    checkMissing(html2);
    c = `as.logical`(html2);
    if c then L12() else L1();
  L1():
    trimws1 = ldf trimws;
    check L49() else D19();
  L12():
    trimws = ldf trimws;
    check L13() else D1();
  D1():
    deopt 3 [];
  D19():
    deopt 59 [];
  L13():
    p2 = prom<V +>{
      __ = ldf `::`;
      r = dyn __("utils", "capture.output");
      checkFun.0(r);
      r1 = r as cls;
      p1 = prom<V +>{
        Rd2HTML = ldf Rd2HTML;
        p = prom<V +>{
          rd1 = ld rd;
          rd2 = force? rd1;
          checkMissing(rd2);
          return rd2;
        };
        r3 = dyn Rd2HTML[, fragment](p, TRUE);
        return r3;
      };
      r5 = dyn r1(p1);
      return r5;
    };
    r7 = dyn trimws(p2);
    check L14() else D2();
  L49():
    p14 = prom<V +>{
      paste2 = ldf paste;
      p13 = prom<V +>{
        __5 = ldf `::`;
        r52 = dyn __5("utils", "capture.output");
        checkFun.0(r52);
        r53 = r52 as cls;
        p12 = prom<V +>{
          Rd2txt = ldf Rd2txt;
          p11 = prom<V +>{
            rd3 = ld rd;
            rd4 = force? rd3;
            checkMissing(rd4);
            return rd4;
          };
          r55 = dyn Rd2txt[, fragment](p11, TRUE);
          return r55;
        };
        r57 = dyn r53(p12);
        return r57;
      };
      r59 = dyn paste2[, collapse](p13, "\n");
      return r59;
    };
    r61 = dyn trimws1(p14);
    check L50() else D20();
  D2():
    deopt 5 [r7];
  D20():
    deopt 61 [r61];
  L14():
    st s = r7;
    which = ldf which;
    check L15() else D3();
  L50():
    visible.0();
    popenv;
    return r61;
  D3():
    deopt 8 [];
  L15():
    p5 = prom<V +>{
      startsWith = ldf startsWith;
      p3 = prom<V +>{
        s = ld s;
        s1 = force? s;
        checkMissing(s1);
        return s1;
      };
      r9 = dyn startsWith(p3, "<p>");
      endsWith = ldf endsWith;
      p4 = prom<V +>{
        s2 = ld s;
        s3 = force? s2;
        checkMissing(s3);
        return s3;
      };
      r11 = dyn endsWith(p4, "</p>");
      r12 = `!`(r11);
      r13 = `&&`(r9, r12);
      return r13;
    };
    r15 = dyn which(p5);
    check L16() else D4();
  D4():
    deopt 10 [r15];
  L16():
    st i = r15;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L2(r17):
    c1 = `as.logical`(r17);
    if c1 then L21() else L3();
  L17():
    i = ld i;
    check L19() else D5();
  L18():
    r16 = dyn base(<sym i>);
    goto L2(r16);
  D5():
    deopt 14 [i];
  L3():
    goto L10();
  L10():
    paste1 = ldf paste;
    check L46() else D17();
  L19():
    i1 = force? i;
    checkMissing(i1);
    length = ldf length in base;
    r18 = dyn length(i1);
    check L20() else D6();
  L21():
    s4 = ld s;
    check L22() else D7();
  D6():
    deopt 17 [r18];
  D7():
    deopt 18 [s4];
  D17():
    deopt 53 [];
  L20():
    goto L2(r18);
  L22():
    s5 = force? s4;
    checkMissing(s5);
    c2 = `is.object`(s5);
    if c2 then L23() else L24(s5);
  L46():
    p10 = prom<V +>{
      s8 = ld s;
      s9 = force? s8;
      checkMissing(s9);
      return s9;
    };
    r51 = dyn paste1[, collapse](p10, "\n");
    check L47() else D18();
  D18():
    deopt 57 [r51];
  L4(dx1):
    st z = dx1;
    which1 = ldf which;
    check L27() else D9();
  L23():
    dr = tryDispatchBuiltin.1("[", s5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(s7):
    i2 = ld i;
    check L26() else D8();
  L47():
    popenv;
    return r51;
  D8():
    deopt 20 [s7, i2];
  D9():
    deopt 25 [];
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L26():
    i3 = force? i2;
    __1 = ldf `[` in base;
    r19 = dyn __1(s7, i3);
    goto L4(r19);
  L27():
    p8 = prom<V +>{
      lengths = ldf lengths;
      p7 = prom<V +>{
        gregexpr = ldf gregexpr;
        p6 = prom<V +>{
          z = ld z;
          z1 = force? z;
          checkMissing(z1);
          return z1;
        };
        r21 = dyn gregexpr("</?p>", p6);
        return r21;
      };
      r23 = dyn lengths(p7);
      __2 = ldf `%%` in base;
      r24 = dyn __2(r23, 2);
      r25 = `>`(r24, 0);
      return r25;
    };
    r27 = dyn which1(p8);
    check L28() else D10();
  D10():
    deopt 27 [r27];
  L28():
    st j = r27;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L5(r29):
    c3 = `as.logical`(r29);
    if c3 then L33() else L6();
  L29():
    j = ld j;
    check L31() else D11();
  L30():
    r28 = dyn base1(<sym j>);
    goto L5(r28);
  D11():
    deopt 31 [j];
  L6():
    goto L9(NULL);
  L9(r48):
    goto L10();
  L31():
    j1 = force? j;
    checkMissing(j1);
    length1 = ldf length in base;
    r30 = dyn length1(j1);
    check L32() else D12();
  L33():
    paste0 = ldf paste0;
    check L34() else D13();
  D12():
    deopt 34 [r30];
  D13():
    deopt 36 [];
  L32():
    goto L5(r30);
  L34():
    p9 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      c4 = `is.object`(z3);
      if c4 then L1() else L2(z3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", z3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(z5):
      j2 = ld j;
      j3 = force? j2;
      __3 = ldf `[` in base;
      r31 = dyn __3(z5, j3);
      goto L0(r31);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r33 = dyn paste0(p9, "</p>");
    check L35() else D14();
  D14():
    deopt 39 [r33];
  L35():
    l = ld s;
    c5 = `is.object`(l);
    if c5 then L36() else L37(r33, l);
  L7(r37, dx5):
    st s = dx5;
    goto L9(r37);
  L36():
    dr4 = tryDispatchBuiltin.0("[<-", l, r33);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L38() else L37(r33, dr4);
  L37(r35, l2):
    i4 = ld i;
    check L39() else D15();
  D15():
    deopt 41 [r35, l2, r33, i4];
  L38():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(r33, dx4);
  L39():
    i5 = force? i4;
    checkMissing(i5);
    c6 = `is.object`(i5);
    if c6 then L40() else L41(r35, l2, r33, i5);
  L8(r44, l6, r45, dx7):
    ___ = ldf `[<-` in base;
    r47 = dyn ___(l6, r45, dx7);
    goto L7(r44, r47);
  L40():
    dr6 = tryDispatchBuiltin.1("[", i5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L42() else L41(r35, l2, r33, dr6);
  L41(r40, l4, r41, i7):
    j4 = ld j;
    check L43() else D16();
  D16():
    deopt 43 [r40, l4, r41, i7, j4];
  L42():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(r35, l2, r33, dx6);
  L43():
    j5 = force? j4;
    __4 = ldf `[` in base;
    r46 = dyn __4(i7, j5);
    goto L8(r40, l4, r41, r46);
  }
}