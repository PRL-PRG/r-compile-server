fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_xrefs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg matrix:cls, reg character:cls, reg r:V, reg p:p(V +), reg r2:V, reg r3:cls, reg lapply:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg recurse:*, reg recurse1:V, reg p2:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg c:cls, reg r11:V, reg list:cls, reg r12:V, reg l:*, reg dimnames__:cls, reg r13:V, reg out:*, reg out1:V |
    mkenv;
    st x = x;
    matrix = ldf matrix;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    r2 = dyn matrix[, nrow, ncol](p, 0, 2);
    check L3() else D1();
  D1():
    deopt 7 [r2];
  L3():
    st out = r2;
    r3 = clos inner3708401697;
    st recurse = r3;
    lapply = ldf lapply;
    check L4() else D2();
  D2():
    deopt 13 [];
  L4():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      recurse = ld recurse;
      recurse1 = force? recurse;
      checkMissing(recurse1);
      return recurse1;
    };
    r6 = dyn lapply(p1, p2);
    check L5() else D3();
  D3():
    deopt 16 [r6];
  L5():
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r8):
    l = ld out;
    dimnames__ = ldf `dimnames<-`;
    check L12() else D6();
  L6():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L7():
    r7 = dyn base(NULL, <lang c("Target", "Anchor")>);
    goto L0(r7);
  D6():
    deopt 29 [r8, l, r8];
  L1(r10):
    list = ldf list in base;
    r12 = dyn list(NULL, r10);
    check L11() else D5();
  L8():
    c = ldf c in base;
    r11 = dyn c("Target", "Anchor");
    check L10() else D4();
  L9():
    r9 = dyn base1("Target", "Anchor");
    goto L1(r9);
  L12():
    r13 = dyn dimnames__(l, NULL, r8);
    check L13() else D7();
  D4():
    deopt 25 [r11];
  D5():
    deopt 27 [r12];
  D7():
    deopt 31 [r8, r13];
  L10():
    goto L1(r11);
  L11():
    goto L0(r12);
  L13():
    st out = r13;
    out = ld out;
    check L14() else D8();
  D8():
    deopt 33 [out];
  L14():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg tag:*, reg tag1:V, reg identical:cls, reg r5:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg e3:*, reg e4:V, reg length:cls, reg r8:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg e5:*, reg e6:V, reg c2:L, reg e8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg as_character:cls, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg e9:*, reg e10:V, reg attr1:cls, reg r15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg r17:V, reg arg:*, reg arg1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r18:V, reg r19:V, reg opt:*, reg opt1:V, reg c3:V, reg c4:L, reg r20:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r21:V, reg opt2:*, reg opt3:V, reg as_character1:cls, reg r22:V, reg c5:cls, reg r23:V, reg r24:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r25:V, reg c6:cls, reg r26:V, reg rbind:cls, reg out:*, reg out1:V, reg p:p(V +), reg val:*, reg val1:V, reg p1:p(V +), reg r29:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r31:V, reg r32:V, reg tag2:*, reg tag3:V, reg identical1:cls, reg r33:V, reg c7:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r34:V, reg r35:V, reg e11:*, reg e12:V, reg c8:L, reg e14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r36:V, reg as_character2:cls, reg r37:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r38:V, reg r39:V, reg arg2:*, reg arg3:V, reg sprintf:cls, reg arg4:*, reg arg5:V, reg p2:p(V +), reg r41:V, reg c9:cls, reg r42:V, reg rbind1:cls, reg out2:*, reg out3:V, reg p3:p(V +), reg val2:*, reg val3:V, reg p4:p(V +), reg r45:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r46:V, reg r47:V, reg e15:*, reg e16:V, reg is_list:cls, reg r48:V, reg c10:L, reg lapply:cls, reg e17:*, reg e18:V, reg p5:p(V +), reg recurse:*, reg recurse1:V, reg p6:p(V +), reg r51:V |
    mkenv;
    st e = e;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L0(r1):
    st tag = r1;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L21():
    e1 = ld e;
    check L23() else D0();
  L22():
    r = dyn base(<sym e>, "Rd_tag");
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(r4):
    c = `as.logical`(r4);
    if c then L29() else L2();
  L23():
    e2 = force? e1;
    checkMissing(e2);
    attr = ldf attr in base;
    r2 = dyn attr(e2, "Rd_tag");
    check L24() else D1();
  L25():
    tag = ld tag;
    check L27() else D2();
  L26():
    r3 = dyn base1(<sym tag>, "\\link");
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 10 [tag];
  L2():
    sym9 = ldf identical;
    base9 = ldf identical in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L66() else L67();
  L13():
    sym12 = ldf `is.list`;
    base12 = ldf `is.list` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L87() else L88();
  L24():
    goto L0(r2);
  L27():
    tag1 = force? tag;
    checkMissing(tag1);
    identical = ldf identical in base;
    r5 = dyn identical(tag1, "\\link", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L28() else D3();
  L29():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  D3():
    deopt 21 [r5];
  L3(r7):
    c1 = `as.logical`(r7);
    if c1 then L34() else L4();
  L14(r32):
    c7 = `as.logical`(r32);
    if c7 then L70() else L15();
  L19(r47):
    c10 = `as.logical`(r47);
    if c10 then L91() else L20();
  L28():
    goto L1(r5);
  L30():
    e3 = ld e;
    check L32() else D4();
  L31():
    r6 = dyn base2(<sym e>);
    goto L3(r6);
  L66():
    tag2 = ld tag;
    check L68() else D18();
  L67():
    r31 = dyn base9(<sym tag>, "\\linkS4class");
    goto L14(r31);
  L87():
    e15 = ld e;
    check L89() else D28();
  L88():
    r46 = dyn base12(<sym e>);
    goto L19(r46);
  D4():
    deopt 24 [e3];
  D18():
    deopt 79 [tag2];
  D28():
    deopt 123 [e15];
  L4():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L60() else L61();
  L12(r24):
    st val = r24;
    rbind = ldf rbind;
    check L63() else D16();
  L15():
    goto L13();
  L20():
    invisible.0();
    popenv;
    return NULL;
  L32():
    e4 = force? e3;
    checkMissing(e4);
    length = ldf length in base;
    r8 = dyn length(e4);
    check L33() else D5();
  L34():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L68():
    tag3 = force? tag2;
    checkMissing(tag3);
    identical1 = ldf identical in base;
    r33 = dyn identical1(tag3, "\\linkS4class", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L69() else D19();
  L70():
    sym10 = ldf `as.character`;
    base10 = ldf `as.character` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L71() else L72();
  L89():
    e16 = force? e15;
    checkMissing(e16);
    is_list = ldf `is.list` in base;
    r48 = dyn is_list(e16);
    check L90() else D29();
  L91():
    lapply = ldf lapply;
    check L92() else D30();
  D5():
    deopt 27 [r8];
  D16():
    deopt 72 [];
  D19():
    deopt 90 [r33];
  D29():
    deopt 126 [r48];
  D30():
    deopt 128 [];
  L5(r10):
    st arg = r10;
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L16(r35):
    st arg = r35;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L78() else L79();
  L33():
    goto L3(r8);
  L35():
    e5 = ld e;
    check L37() else D6();
  L36():
    r9 = dyn base3(<lang `[[`(e, 1)>);
    goto L5(r9);
  L60():
    c6 = ldf c in base;
    r26 = dyn c6("", "");
    check L62() else D15();
  L61():
    r25 = dyn base8("", "");
    goto L12(r25);
  L63():
    p = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    p1 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      return val1;
    };
    r29 = dyn rbind(p, p1);
    check L64() else D17();
  L69():
    goto L14(r33);
  L71():
    e11 = ld e;
    check L73() else D20();
  L72():
    r34 = dyn base10(<lang `[[`(e, 1)>);
    goto L16(r34);
  L90():
    goto L19(r48);
  L92():
    p5 = prom<V +>{
      e17 = ld e;
      e18 = force? e17;
      checkMissing(e18);
      return e18;
    };
    p6 = prom<V +>{
      recurse = ld recurse;
      recurse1 = force? recurse;
      checkMissing(recurse1);
      return recurse1;
    };
    r51 = dyn lapply(p5, p6);
    check L93() else D31();
  D6():
    deopt 30 [e5];
  D15():
    deopt 69 [r26];
  D17():
    deopt 75 [r29];
  D20():
    deopt 93 [e11];
  D31():
    deopt 131 [r51];
  L7(r14):
    st opt = r14;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L18(r39):
    st val = r39;
    rbind1 = ldf rbind;
    check L84() else D26();
  L37():
    e6 = force? e5;
    checkMissing(e6);
    c2 = `is.object`(e6);
    if c2 then L38() else L39(e6);
  L42():
    e9 = ld e;
    check L44() else D8();
  L43():
    r13 = dyn base4(<sym e>, "Rd_option");
    goto L7(r13);
  L62():
    goto L12(r26);
  L64():
    sst out = r29;
    goto L13();
  L73():
    e12 = force? e11;
    checkMissing(e12);
    c8 = `is.object`(e12);
    if c8 then L74() else L75(e12);
  L78():
    arg2 = ld arg;
    check L80() else D22();
  L79():
    r38 = dyn base11(<sym arg>, <lang sprintf("=%s-class", arg)>);
    goto L18(r38);
  L93():
    popenv;
    return r51;
  D8():
    deopt 40 [e9];
  D22():
    deopt 103 [arg2];
  D26():
    deopt 114 [];
  L6(dx1):
    as_character = ldf `as.character` in base;
    r12 = dyn as_character(dx1);
    check L41() else D7();
  L8(r17):
    goto L12(r17);
  L17(dx3):
    as_character2 = ldf `as.character` in base;
    r37 = dyn as_character2(dx3);
    check L77() else D21();
  L38():
    dr = tryDispatchBuiltin.1("[[", e6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L40() else L39(dr);
  L39(e8):
    __ = ldf `[[` in base;
    r11 = dyn __(e8, 1);
    goto L6(r11);
  L44():
    e10 = force? e9;
    checkMissing(e10);
    attr1 = ldf attr in base;
    r15 = dyn attr1(e10, "Rd_option");
    check L45() else D9();
  L46():
    arg = ld arg;
    check L48() else D10();
  L47():
    r16 = dyn base5(<sym arg>, <lang if(is.null(opt), "", as.character(opt))>);
    goto L8(r16);
  L74():
    dr2 = tryDispatchBuiltin.1("[[", e12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L76() else L75(dr2);
  L75(e14):
    __1 = ldf `[[` in base;
    r36 = dyn __1(e14, 1);
    goto L17(r36);
  L80():
    arg3 = force? arg2;
    checkMissing(arg3);
    sprintf = ldf sprintf;
    check L81() else D23();
  L84():
    p3 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    p4 = prom<V +>{
      val2 = ld val;
      val3 = force? val2;
      checkMissing(val3);
      return val3;
    };
    r45 = dyn rbind1(p3, p4);
    check L85() else D27();
  D7():
    deopt 36 [r12];
  D9():
    deopt 44 [r15];
  D10():
    deopt 48 [arg];
  D21():
    deopt 99 [r37];
  D23():
    deopt 106 [];
  D27():
    deopt 117 [r45];
  L40():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L41():
    goto L5(r12);
  L45():
    goto L7(r15);
  L48():
    arg1 = force? arg;
    checkMissing(arg1);
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L49() else L50();
  L76():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L77():
    goto L16(r37);
  L81():
    p2 = prom<V +>{
      arg4 = ld arg;
      arg5 = force? arg4;
      checkMissing(arg5);
      return arg5;
    };
    r41 = dyn sprintf("=%s-class", p2);
    check L82() else D24();
  L85():
    sst out = r45;
    goto L13();
  D24():
    deopt 109 [r41];
  L9(r19):
    c4 = `as.logical`(r19);
    if c4 then L52() else L10();
  L49():
    opt = ld opt;
    check L51() else D11();
  L50():
    r18 = dyn base6(<sym opt>);
    goto L9(r18);
  L82():
    c9 = ldf c in base;
    r42 = dyn c9(arg3, r41);
    check L83() else D25();
  D11():
    deopt 51 [opt];
  D25():
    deopt 111 [r42];
  L10():
    sym7 = ldf `as.character`;
    base7 = ldf `as.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L54() else L55();
  L11(r20):
    c5 = ldf c in base;
    r23 = dyn c5(arg1, r20);
    check L58() else D14();
  L51():
    opt1 = force? opt;
    checkMissing(opt1);
    c3 = `==`(opt1, NULL);
    goto L9(c3);
  L52():
    goto L11("");
  L83():
    goto L18(r42);
  D14():
    deopt 63 [r23];
  L54():
    opt2 = ld opt;
    check L56() else D12();
  L55():
    r21 = dyn base7(<sym opt>);
    goto L11(r21);
  L58():
    goto L8(r23);
  D12():
    deopt 58 [opt2];
  L56():
    opt3 = force? opt2;
    checkMissing(opt3);
    as_character1 = ldf `as.character` in base;
    r22 = dyn as_character1(opt3);
    check L57() else D13();
  D13():
    deopt 61 [r22];
  L57():
    goto L11(r22);
  }
}