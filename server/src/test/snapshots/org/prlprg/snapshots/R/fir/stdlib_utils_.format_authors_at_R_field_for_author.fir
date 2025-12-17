fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.format_authors_at_R_field_for_author` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg _read_authors_at_R_field:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x5:*, reg x6:V, reg attr:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x7:*, reg x8:V, reg attr1:cls, reg r10:V, reg vapply:cls, reg x9:*, reg x10:V, reg p1:p(V +), reg _format_person_for_plain_author_spec:*, reg _format_person_for_plain_author_spec1:V, reg p2:p(V +), reg r13:V, reg x11:*, reg x12:V, reg c2:L, reg x14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg x17:V, reg r15:V, reg x18:*, reg x19:V, reg nzchar:cls, reg r16:V, reg __:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg x20:*, reg x21:V, reg length:cls, reg r20:V, reg r21:V, reg c3:L, reg paste:cls, reg lapply:cls, reg strwrap:cls, reg x22:*, reg x23:V, reg p3:p(V +), reg r25:V, reg p4:p(V +), reg paste1:*, reg paste2:V, reg p5:p(V +), reg r28:V, reg p6:p(V +), reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg header:*, reg header1:V, reg c4:V, reg r33:V, reg c5:L, reg paste3:cls, reg strwrap1:cls, reg header2:*, reg header3:V, reg p7:p(V +), reg r35:V, reg p8:p(V +), reg r37:V, reg paste4:cls, reg header4:*, reg header5:V, reg p9:p(V +), reg out:*, reg out1:V, reg p10:p(V +), reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg footer:*, reg footer1:V, reg c6:V, reg r44:V, reg c7:L, reg paste5:cls, reg strwrap2:cls, reg footer2:*, reg footer3:V, reg p11:p(V +), reg r46:V, reg p12:p(V +), reg r48:V, reg paste6:cls, reg out2:*, reg out3:V, reg p13:p(V +), reg footer4:*, reg footer5:V, reg p14:p(V +), reg r51:V, reg out4:*, reg out5:V |
    mkenv;
    st x = x;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L19() else L1();
  L16():
    x1 = ld x;
    check L18() else D0();
  L17():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    goto L2();
  L2():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L18():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L0(c);
  L19():
    _read_authors_at_R_field = ldf `.read_authors_at_R_field`;
    check L20() else D1();
  D1():
    deopt 5 [];
  L3(r6):
    st header = r6;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L20():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn _read_authors_at_R_field(p);
    check L21() else D2();
  L23():
    x5 = ld x;
    check L25() else D3();
  L24():
    r5 = dyn base1(<sym x>, "header");
    goto L3(r5);
  D2():
    deopt 7 [r3];
  D3():
    deopt 13 [x5];
  L4(r9):
    st footer = r9;
    vapply = ldf vapply;
    check L31() else D7();
  L21():
    st x = r3;
    goto L2();
  L25():
    x6 = force? x5;
    checkMissing(x6);
    attr = ldf attr in base;
    r7 = dyn attr(x6, "header");
    check L26() else D4();
  L27():
    x7 = ld x;
    check L29() else D5();
  L28():
    r8 = dyn base2(<sym x>, "footer");
    goto L4(r8);
  D4():
    deopt 17 [r7];
  D5():
    deopt 21 [x7];
  D7():
    deopt 28 [];
  L26():
    goto L3(r7);
  L29():
    x8 = force? x7;
    checkMissing(x8);
    attr1 = ldf attr in base;
    r10 = dyn attr1(x8, "footer");
    check L30() else D6();
  L31():
    p1 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p2 = prom<V +>{
      _format_person_for_plain_author_spec = ld `.format_person_for_plain_author_spec`;
      _format_person_for_plain_author_spec1 = force? _format_person_for_plain_author_spec;
      checkMissing(_format_person_for_plain_author_spec1);
      return _format_person_for_plain_author_spec1;
    };
    r13 = dyn vapply(p1, p2, "");
    check L32() else D8();
  D6():
    deopt 25 [r10];
  D8():
    deopt 32 [r13];
  L30():
    goto L4(r10);
  L32():
    st x = r13;
    x11 = ld x;
    check L33() else D9();
  D9():
    deopt 34 [x11];
  L33():
    x12 = force? x11;
    checkMissing(x12);
    c2 = `is.object`(x12);
    if c2 then L34() else L35(x12);
  L5(dx1):
    st x = dx1;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L34():
    dr = tryDispatchBuiltin.1("[", x12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(x14):
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L6(x17, r15):
    __ = ldf `[` in base;
    r17 = dyn __(x17, r15);
    goto L5(r17);
  L7(r19):
    r21 = `!`(r19);
    c3 = `as.logical`(r21);
    if c3 then L45() else L8();
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L37():
    x18 = ld x;
    check L39() else D10();
  L38():
    r14 = dyn base3(<sym x>);
    goto L6(x14, r14);
  L41():
    x20 = ld x;
    check L43() else D12();
  L42():
    r18 = dyn base4(<sym x>);
    goto L7(r18);
  D10():
    deopt 38 [x14, x18];
  D12():
    deopt 46 [x20];
  L8():
    paste = ldf paste;
    check L48() else D14();
  L39():
    x19 = force? x18;
    checkMissing(x19);
    nzchar = ldf nzchar in base;
    r16 = dyn nzchar(x19);
    check L40() else D11();
  L43():
    x21 = force? x20;
    checkMissing(x21);
    length = ldf length in base;
    r20 = dyn length(x21);
    check L44() else D13();
  L45():
    popenv;
    return "";
  D11():
    deopt 41 [x14, r16];
  D13():
    deopt 49 [r20];
  D14():
    deopt 57 [];
  L40():
    goto L6(x14, r16);
  L44():
    goto L7(r20);
  L48():
    p6 = prom<V +>{
      lapply = ldf lapply;
      p4 = prom<V +>{
        strwrap = ldf strwrap;
        p3 = prom<V +>{
          x22 = ld x;
          x23 = force? x22;
          checkMissing(x23);
          return x23;
        };
        r25 = dyn strwrap[, indent, exdent, simplify](p3, 0, 4, FALSE);
        return r25;
      };
      p5 = prom<V +>{
        paste1 = ld paste;
        paste2 = force? paste1;
        checkMissing(paste2);
        return paste2;
      };
      r28 = dyn lapply[, , collapse](p4, p5, "\n");
      return r28;
    };
    r30 = dyn paste[, collapse](p6, ",\n  ");
    check L49() else D15();
  D15():
    deopt 61 [r30];
  L49():
    st out = r30;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  L10(r32):
    r33 = `!`(r32);
    c5 = `as.logical`(r33);
    if c5 then L53() else L11();
  L50():
    header = ld header;
    check L52() else D16();
  L51():
    r31 = dyn base5(<sym header>);
    goto L10(r31);
  D16():
    deopt 64 [header];
  L11():
    goto L12();
  L12():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L59() else L60();
  L52():
    header1 = force? header;
    checkMissing(header1);
    c4 = `==`(header1, NULL);
    goto L10(c4);
  L53():
    paste3 = ldf paste;
    check L54() else D17();
  D17():
    deopt 69 [];
  L13(r43):
    r44 = `!`(r43);
    c7 = `as.logical`(r44);
    if c7 then L62() else L14();
  L54():
    p8 = prom<V +>{
      strwrap1 = ldf strwrap;
      p7 = prom<V +>{
        header2 = ld header;
        header3 = force? header2;
        checkMissing(header3);
        return header3;
      };
      r35 = dyn strwrap1[, indent, exdent](p7, 0, 2);
      return r35;
    };
    r37 = dyn paste3[, collapse](p8, "\n");
    check L55() else D18();
  L59():
    footer = ld footer;
    check L61() else D21();
  L60():
    r42 = dyn base6(<sym footer>);
    goto L13(r42);
  D18():
    deopt 73 [r37];
  D21():
    deopt 86 [footer];
  L14():
    goto L15();
  L15():
    out4 = ld out;
    check L68() else D26();
  L55():
    st header = r37;
    paste4 = ldf paste;
    check L56() else D19();
  L61():
    footer1 = force? footer;
    checkMissing(footer1);
    c6 = `==`(footer1, NULL);
    goto L13(c6);
  L62():
    paste5 = ldf paste;
    check L63() else D22();
  D19():
    deopt 76 [];
  D22():
    deopt 91 [];
  D26():
    deopt 107 [out4];
  L56():
    p9 = prom<V +>{
      header4 = ld header;
      header5 = force? header4;
      checkMissing(header5);
      return header5;
    };
    p10 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r40 = dyn paste4[, , sep](p9, p10, "\n  ");
    check L57() else D20();
  L63():
    p12 = prom<V +>{
      strwrap2 = ldf strwrap;
      p11 = prom<V +>{
        footer2 = ld footer;
        footer3 = force? footer2;
        checkMissing(footer3);
        return footer3;
      };
      r46 = dyn strwrap2[, indent, exdent](p11, 2, 2);
      return r46;
    };
    r48 = dyn paste5[, collapse](p12, "\n");
    check L64() else D23();
  L68():
    out5 = force? out4;
    checkMissing(out5);
    popenv;
    return out5;
  D20():
    deopt 81 [r40];
  D23():
    deopt 95 [r48];
  L57():
    st out = r40;
    goto L12();
  L64():
    st footer = r48;
    paste6 = ldf paste;
    check L65() else D24();
  D24():
    deopt 98 [];
  L65():
    p13 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    p14 = prom<V +>{
      footer4 = ld footer;
      footer5 = force? footer4;
      checkMissing(footer5);
      return footer5;
    };
    r51 = dyn paste6[, , sep](p13, p14, ".\n");
    check L66() else D25();
  D25():
    deopt 103 [r51];
  L66():
    st out = r51;
    goto L15();
  }
}