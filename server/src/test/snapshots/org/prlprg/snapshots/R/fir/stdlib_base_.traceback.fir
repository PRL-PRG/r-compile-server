fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1008433146`;
    st `.traceback` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1008433146`(x, `max.lines`) {
  (reg x:*, reg max_lines:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, var `max.lines`:*, reg max_lines_isMissing:L, reg max_lines_orDefault:*, reg getOption:cls, reg getOption1:cls, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg max_lines1:*, reg max_lines2:V, reg length:cls, reg r7:V, reg r8:V, reg p3:p(V +), reg r10:V, reg r11:cls, reg _is_positive_intlike:cls, reg x1:*, reg x2:V, reg p4:p(V +), reg r13:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg x3:*, reg x4:V, reg traceback:cls, reg r16:V, reg int_x:*, reg int_x1:V, reg c1:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg c6:L, reg r19:V, reg x5:*, reg x6:V, reg c7:V, reg c8:L, reg c11:L, reg c12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg c17:L, reg c18:L, reg r21:V, reg get0:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg baseenv:cls, reg r24:V, reg p5:p(V +), reg r26:V, reg c19:V, reg r27:V, reg c20:L, reg c21:V, reg c24:L, reg c25:V, reg c27:L, reg c28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg c32:L, reg r29:V, reg x7:*, reg x8:V, reg is_pairlist:cls, reg r30:V, reg c33:L, reg c34:V, reg c36:L, reg c37:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg c41:L, reg r32:V, reg x9:*, reg x10:V, reg is_list:cls, reg r33:V, reg c42:L, reg c43:V, reg c45:L, reg _is_positive_intlike1:cls, reg max_lines3:*, reg max_lines4:V, reg p6:p(V +), reg r35:V, reg valid_max_lines:*, reg valid_max_lines1:V, reg c46:L, reg max_lines5:*, reg max_lines6:V, reg r36:V, reg r37:V, reg max_lines7:*, reg max_lines8:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg x11:*, reg x12:V, reg r40:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c47:L, reg x13:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg i7:I, reg r42:V, reg x14:*, reg x15:V, reg c48:L, reg i9:I, reg x17:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg i12:*, reg i13:V, reg __:cls, reg r43:V, reg attr:cls, reg r44:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg i16:I, reg r46:V, reg x18:*, reg x19:V, reg c49:L, reg i18:I, reg x21:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i20:I, reg dx3:V, reg i21:*, reg i22:V, reg __1:cls, reg r47:V, reg typeof:cls, reg r48:V, reg r49:V, reg c50:L, reg deparse:cls, reg x22:*, reg x23:V, reg c51:L, reg x25:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i25:*, reg i26:V, reg __2:cls, reg r50:V, reg p7:p(V +), reg nlines:*, reg nlines1:V, reg p8:p(V +), reg r53:V, reg l1:*, reg c52:L, reg i28:I, reg r55:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i30:I, reg r57:V, reg dx7:V, reg i31:*, reg i32:V, reg ____:cls, reg r58:V, reg i33:I, reg valid_max_lines2:*, reg valid_max_lines3:V, reg c53:L, reg i35:I, reg c55:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r60:V, reg i38:I, reg c58:L, reg r61:V, reg x26:*, reg x27:V, reg c59:L, reg i40:I, reg c61:L, reg x29:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i42:I, reg c63:L, reg dx9:V, reg i43:*, reg i44:V, reg __3:cls, reg r62:V, reg length1:cls, reg r63:V, reg max_lines9:*, reg max_lines10:V, reg r64:V, reg c64:L, reg c65:V, reg c67:L, reg x30:*, reg x31:V, reg c68:L, reg i49:I, reg x33:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i51:I, reg dx11:V, reg i52:*, reg i53:V, reg __4:cls, reg r65:V, reg c69:L, reg i55:I, reg dx13:V, reg dr12:V, reg dc6:L, reg dx14:V, reg i57:I, reg dx15:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg i60:I, reg dx18:V, reg r67:V, reg max_lines11:*, reg max_lines12:V, reg r68:I, reg __5:cls, reg r69:V, reg l4:*, reg c70:L, reg i62:I, reg dx20:V, reg l6:*, reg dr14:V, reg dc7:L, reg dx22:V, reg i64:I, reg dx24:V, reg i65:*, reg i66:V, reg ____1:cls, reg r70:V, reg l7:*, reg c71:L, reg i68:I, reg r73:L, reg l10:*, reg r74:L, reg l11:*, reg dr16:V, reg dc8:L, reg dx25:V, reg i70:I, reg r77:L, reg l13:*, reg r78:L, reg dx26:V, reg i71:*, reg i72:V, reg __6:cls, reg r79:V, reg attr__:cls, reg r80:V, reg c72:L, reg i74:I, reg r82:L, reg l15:*, reg dr18:V, reg dc9:L, reg dx27:V, reg i76:I, reg r84:L, reg dx28:V, reg i77:*, reg i78:V, reg ____2:cls, reg r85:V, reg i79:I, reg srcref:*, reg srcref1:V, reg l16:*, reg c73:L, reg i81:I, reg srcref4:V, reg l19:*, reg srcref5:V, reg l20:*, reg dr20:V, reg dc10:L, reg dx29:V, reg i83:I, reg srcref8:V, reg l22:*, reg srcref9:V, reg dx30:V, reg i84:*, reg i85:V, reg __7:cls, reg r87:V, reg attr__1:cls, reg r88:V, reg c74:L, reg i87:I, reg srcref11:V, reg l24:*, reg dr22:V, reg dc11:L, reg dx31:V, reg i89:I, reg dx32:V, reg i90:*, reg i91:V, reg ____3:cls, reg r89:V, reg x34:*, reg x35:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0(NULL) else L0(x);
  L0(x_orDefault):
    st x = x_orDefault;
    max_lines_isMissing = missing.0(max_lines);
    if max_lines_isMissing then L1() else L2(max_lines);
  L1():
    p2 = prom<V +>{
      getOption = ldf getOption;
      p1 = prom<V +>{
        getOption1 = ldf getOption;
        p = prom<V +>{
          return -1;
        };
        r1 = dyn getOption1("deparse.max.lines", p);
        return r1;
      };
      r3 = dyn getOption("traceback.max.lines", p1);
      return r3;
    };
    goto L2(p2);
  L2(max_lines_orDefault):
    st `max.lines` = max_lines_orDefault;
    stopifnot = ldf stopifnot;
    check L41() else D0();
  D0():
    deopt 1 [];
  L41():
    p3 = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      r8 = `<=`(r6, 1.0);
      return r8;
    L1():
      max_lines1 = ld `max.lines`;
      max_lines2 = force? max_lines1;
      checkMissing(max_lines2);
      length = ldf length in base;
      r7 = dyn length(max_lines2);
      goto L0(r7);
    L2():
      r5 = dyn base(<sym max.lines>);
      goto L0(r5);
    };
    r10 = dyn stopifnot(p3);
    check L42() else D1();
  D1():
    deopt 3 [r10];
  L42():
    r11 = clos inner354062069;
    st `.is.positive.intlike` = r11;
    _is_positive_intlike = ldf `.is.positive.intlike`;
    check L43() else D2();
  D2():
    deopt 8 [];
  L43():
    p4 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r13 = dyn _is_positive_intlike(p4);
    check L44() else D3();
  D3():
    deopt 10 [r13];
  L44():
    st `int.x` = r13;
    c = `as.logical`(r13);
    if c then L45() else L3();
  L3():
    goto L5();
  L5():
    int_x = ld `int.x`;
    check L51() else D6();
  L45():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  D6():
    deopt 21 [int_x];
  L4(r15):
    st x = r15;
    goto L5();
  L46():
    x3 = ld x;
    check L48() else D4();
  L47():
    r14 = dyn base1(<lang traceback(x)>);
    goto L4(r14);
  L51():
    int_x1 = force? int_x;
    checkMissing(int_x1);
    c1 = `as.logical`(int_x1);
    if c1 then L6(c1) else L52();
  D4():
    deopt 14 [x3];
  L6(c2):
    c27 = `as.logical`(c2);
    if c27 then L10(c27) else L63();
  L48():
    x4 = force? x3;
    checkMissing(x4);
    traceback = ldf traceback in base;
    r16 = dyn traceback(x4);
    check L49() else D5();
  L52():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L53() else L54();
  D5():
    deopt 17 [r16];
  L7(c6, r19):
    c8 = `as.logical`(r19);
    if c8 then L56() else L8(c6, c8);
  L10(c28):
    c36 = `as.logical`(c28);
    if c36 then L12(c36) else L69();
  L49():
    goto L4(r16);
  L53():
    x5 = ld x;
    check L55() else D7();
  L54():
    r18 = dyn base2(<sym x>);
    goto L7(c1, r18);
  L63():
    sym5 = ldf `is.pairlist`;
    base5 = ldf `is.pairlist` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  D7():
    deopt 24 [c1, x5];
  L8(c11, c12):
    c24 = `as.logical`(c12);
    c25 = `||`(c11, c24);
    goto L6(c25);
  L11(c32, r29):
    c33 = `as.logical`(r29);
    c34 = `||`(c32, c33);
    goto L10(c34);
  L12(c37):
    c45 = `as.logical`(c37);
    if c45 then L75() else L14();
  L55():
    x6 = force? x5;
    checkMissing(x6);
    c7 = `==`(x6, NULL);
    goto L7(c1, c7);
  L56():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L64():
    x7 = ld x;
    check L66() else D10();
  L65():
    r28 = dyn base5(<sym x>);
    goto L11(c27, r28);
  L69():
    sym6 = ldf `is.list`;
    base6 = ldf `is.list` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L70() else L71();
  D10():
    deopt 41 [c27, x7];
  L9(c17, c18, r21):
    r27 = `!`(r21);
    c20 = `as.logical`(r27);
    c21 = `&&`(c18, c20);
    goto L8(c17, c21);
  L13(c41, r32):
    c42 = `as.logical`(r32);
    c43 = `||`(c41, c42);
    goto L12(c43);
  L14():
    goto L40();
  L40():
    x34 = ld x;
    check L162() else D47();
  L57():
    get0 = ldf get0;
    check L59() else D8();
  L58():
    r20 = dyn base3(<lang `<-`(x, get0(".Traceback", envir=baseenv()))>);
    goto L9(c6, c8, r20);
  L66():
    x8 = force? x7;
    checkMissing(x8);
    is_pairlist = ldf `is.pairlist` in base;
    r30 = dyn is_pairlist(x8);
    check L67() else D11();
  L70():
    x9 = ld x;
    check L72() else D12();
  L71():
    r31 = dyn base6(<sym x>);
    goto L13(c36, r31);
  L75():
    _is_positive_intlike1 = ldf `.is.positive.intlike`;
    check L76() else D14();
  D8():
    deopt 29 [c6, c8];
  D11():
    deopt 44 [c27, r30];
  D12():
    deopt 48 [c36, x9];
  D14():
    deopt 54 [];
  D47():
    deopt 174 [x34];
  L59():
    p5 = prom<V +>{
      sym4 = ldf baseenv;
      base4 = ldf baseenv in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      baseenv = ldf baseenv in base;
      r24 = dyn baseenv();
      goto L0(r24);
    L2():
      r22 = dyn base4();
      goto L0(r22);
    };
    r26 = dyn get0[, envir](".Traceback", p5);
    check L60() else D9();
  L67():
    goto L11(c27, r30);
  L72():
    x10 = force? x9;
    checkMissing(x10);
    is_list = ldf `is.list` in base;
    r33 = dyn is_list(x10);
    check L73() else D13();
  L76():
    p6 = prom<V +>{
      max_lines3 = ld `max.lines`;
      max_lines4 = force? max_lines3;
      checkMissing(max_lines4);
      return max_lines4;
    };
    r35 = dyn _is_positive_intlike1(p6);
    check L77() else D15();
  L162():
    x35 = force? x34;
    checkMissing(x35);
    popenv;
    return x35;
  D9():
    deopt 33 [c6, c8, r26];
  D13():
    deopt 51 [c36, r33];
  D15():
    deopt 56 [r35];
  L60():
    st x = r26;
    c19 = `==`(r26, NULL);
    goto L9(c6, c8, c19);
  L73():
    goto L13(c36, r33);
  L77():
    st `valid.max.lines` = r35;
    valid_max_lines = ld `valid.max.lines`;
    check L78() else D16();
  D16():
    deopt 58 [valid_max_lines];
  L78():
    valid_max_lines1 = force? valid_max_lines;
    checkMissing(valid_max_lines1);
    c46 = `as.logical`(valid_max_lines1);
    if c46 then L79() else L15();
  L15():
    max_lines7 = ld `max.lines`;
    check L82() else D18();
  L16(r37):
    st nlines = r37;
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L83() else L84();
  L79():
    max_lines5 = ld `max.lines`;
    check L80() else D17();
  D17():
    deopt 60 [max_lines5];
  D18():
    deopt 64 [max_lines7];
  L17(r39):
    s = toForSeq(r39);
    l = length(s);
    i = 0;
    goto L18(i);
  L80():
    max_lines6 = force? max_lines5;
    checkMissing(max_lines6);
    r36 = `+`(max_lines6, 1);
    goto L16(r36);
  L82():
    max_lines8 = force? max_lines7;
    checkMissing(max_lines8);
    goto L16(max_lines8);
  L83():
    x11 = ld x;
    check L85() else D19();
  L84():
    r38 = dyn base7(<sym x>);
    goto L17(r38);
  D19():
    deopt 68 [x11];
  L18(i1):
    i2 = `+`.1(i1, 1);
    c47 = `<`.1(l, i2);
    if c47 then L86() else L39();
  L85():
    x12 = force? x11;
    checkMissing(x12);
    r40 = seq_along(x12);
    goto L17(r40);
  L39():
    x13 = `[[`(s, i2, NULL, TRUE);
    st i = x13;
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L87() else L88();
  L86():
    goto L40();
  L19(i7, r42):
    st srcref = r42;
    sym9 = ldf typeof;
    base9 = ldf typeof in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L95() else L96();
  L87():
    x14 = ld x;
    check L89() else D20();
  L88():
    r41 = dyn base8(<lang `[[`(x, i)>, "srcref");
    goto L19(i2, r41);
  D20():
    deopt 73 [i2, x14];
  L21(i16, r46):
    r49 = `==`(r46, "language");
    c50 = `as.logical`(r49);
    if c50 then L103() else L23();
  L89():
    x15 = force? x14;
    checkMissing(x15);
    c48 = `is.object`(x15);
    if c48 then L90() else L91(i2, x15);
  L95():
    x18 = ld x;
    check L97() else D23();
  L96():
    r45 = dyn base9(<lang `[[`(x, i)>);
    goto L21(i7, r45);
  D23():
    deopt 84 [i7, x18];
  L20(i11, dx1):
    attr = ldf attr in base;
    r44 = dyn attr(dx1, "srcref");
    check L94() else D22();
  L23():
    goto L25(i16);
  L25(i33):
    valid_max_lines2 = ld `valid.max.lines`;
    check L111() else D29();
  L90():
    dr = tryDispatchBuiltin.1("[[", x15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L92() else L91(i2, dr);
  L91(i9, x17):
    i12 = ld i;
    check L93() else D21();
  L97():
    x19 = force? x18;
    checkMissing(x19);
    c49 = `is.object`(x19);
    if c49 then L98() else L99(i7, x19);
  L103():
    deparse = ldf deparse;
    check L104() else D26();
  D21():
    deopt 75 [i9, x17, i12];
  D22():
    deopt 80 [i11, r44];
  D26():
    deopt 94 [i16];
  D29():
    deopt 106 [i33, valid_max_lines2];
  L22(i20, dx3):
    typeof = ldf typeof in base;
    r48 = dyn typeof(dx3);
    check L102() else D25();
  L92():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(i2, dx);
  L93():
    i13 = force? i12;
    __ = ldf `[[` in base;
    r43 = dyn __(x17, i13);
    goto L20(i9, r43);
  L94():
    goto L19(i11, r44);
  L98():
    dr2 = tryDispatchBuiltin.1("[[", x19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L100() else L99(i7, dr2);
  L99(i18, x21):
    i21 = ld i;
    check L101() else D24();
  L104():
    p7 = prom<V +>{
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      c51 = `is.object`(x23);
      if c51 then L1() else L2(x23);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", x23);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x25):
      i25 = ld i;
      i26 = force? i25;
      __2 = ldf `[[` in base;
      r50 = dyn __2(x25, i26);
      goto L0(r50);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p8 = prom<V +>{
      nlines = ld nlines;
      nlines1 = force? nlines;
      checkMissing(nlines1);
      return nlines1;
    };
    r53 = dyn deparse[, nlines](p7, p8);
    check L105() else D27();
  L111():
    valid_max_lines3 = force? valid_max_lines2;
    checkMissing(valid_max_lines3);
    c53 = `as.logical`(valid_max_lines3);
    if c53 then L112() else L26(i33, c53);
  D24():
    deopt 86 [i18, x21, i21];
  D25():
    deopt 90 [i20, r48];
  D27():
    deopt 98 [i16, r53];
  L26(i35, c55):
    c67 = `as.logical`(c55);
    if c67 then L123() else L29();
  L100():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L22(i7, dx2);
  L101():
    i22 = force? i21;
    __1 = ldf `[[` in base;
    r47 = dyn __1(x21, i22);
    goto L22(i18, r47);
  L102():
    goto L21(i20, r48);
  L105():
    l1 = ld x;
    c52 = `is.object`(l1);
    if c52 then L106() else L107(i16, r53, l1);
  L112():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L113() else L114();
  L24(i30, r57, dx7):
    st x = dx7;
    goto L25(i30);
  L27(i38, c58, r61):
    max_lines9 = ld `max.lines`;
    check L121() else D33();
  L29():
    goto L36(i35);
  L36(i79):
    srcref = ld srcref;
    check L150() else D42();
  L106():
    dr6 = tryDispatchBuiltin.0("[[<-", l1, r53);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L108() else L107(i16, r53, dr6);
  L107(i28, r55, l3):
    i31 = ld i;
    check L109() else D28();
  L113():
    x26 = ld x;
    check L115() else D30();
  L114():
    r60 = dyn base10(<lang `[[`(x, i)>);
    goto L27(i33, c53, r60);
  L123():
    x30 = ld x;
    check L124() else D34();
  D28():
    deopt 100 [i28, r55, l3, r53, i31];
  D30():
    deopt 110 [i33, c53, x26];
  D33():
    deopt 116 [i38, c58, r61, max_lines9];
  D34():
    deopt 120 [i35, x30];
  D42():
    deopt 153 [i79, srcref];
  L108():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L24(i16, r53, dx6);
  L109():
    i32 = force? i31;
    ____ = ldf `[[<-` in base;
    r58 = dyn ____(l3, r53, i32);
    goto L24(i28, r55, r58);
  L115():
    x27 = force? x26;
    checkMissing(x27);
    c59 = `is.object`(x27);
    if c59 then L116() else L117(i33, c53, x27);
  L121():
    max_lines10 = force? max_lines9;
    checkMissing(max_lines10);
    r64 = `>`(r61, max_lines10);
    c64 = `as.logical`(r64);
    c65 = `&&`(c58, c64);
    goto L26(i38, c65);
  L124():
    x31 = force? x30;
    checkMissing(x31);
    c68 = `is.object`(x31);
    if c68 then L125() else L126(i35, x31);
  L150():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    l16 = ld x;
    c73 = `is.object`(l16);
    if c73 then L151() else L152(i79, srcref1, l16, srcref1, l16);
  L28(i42, c63, dx9):
    length1 = ldf length in base;
    r63 = dyn length1(dx9);
    check L120() else D32();
  L30(i51, dx11):
    c69 = `is.object`(dx11);
    if c69 then L129() else L130(i51, dx11);
  L37(i83, srcref8, l22, srcref9, dx30):
    attr__1 = ldf `attr<-`;
    check L155() else D44();
  L116():
    dr8 = tryDispatchBuiltin.1("[[", x27);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L118() else L117(i33, c53, dr8);
  L117(i40, c61, x29):
    i43 = ld i;
    check L119() else D31();
  L125():
    dr10 = tryDispatchBuiltin.1("[[", x31);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L127() else L126(i35, dr10);
  L126(i49, x33):
    i52 = ld i;
    check L128() else D35();
  L151():
    dr20 = tryDispatchBuiltin.1("[[", l16);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L153() else L152(i79, srcref1, l16, srcref1, dr20);
  L152(i81, srcref4, l19, srcref5, l20):
    i84 = ld i;
    check L154() else D43();
  D31():
    deopt 112 [i40, c61, x29, i43];
  D32():
    deopt 116 [i42, c63, r63];
  D35():
    deopt 122 [i49, x33, i52];
  D43():
    deopt 157 [i81, srcref4, l19, srcref5, l20, i84];
  D44():
    deopt 161 [i83, srcref8, l22, dx30, srcref9];
  L31(i57, dx15):
    l4 = ld x;
    c70 = `is.object`(l4);
    if c70 then L135() else L136(i57, dx15, l4);
  L118():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L28(i33, c53, dx8);
  L119():
    i44 = force? i43;
    __3 = ldf `[[` in base;
    r62 = dyn __3(x29, i44);
    goto L28(i40, c61, r62);
  L120():
    goto L27(i42, c63, r63);
  L127():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L30(i35, dx10);
  L128():
    i53 = force? i52;
    __4 = ldf `[[` in base;
    r65 = dyn __4(x33, i53);
    goto L30(i49, r65);
  L129():
    dr12 = tryDispatchBuiltin.1("[", dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L131() else L130(i51, dr12);
  L130(i55, dx13):
    sym11 = ldf seq_len;
    base11 = ldf seq_len in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L132() else L133();
  L153():
    dx29 = getTryDispatchBuiltinValue(dr20);
    goto L37(i79, srcref1, l16, srcref1, dx29);
  L154():
    i85 = force? i84;
    __7 = ldf `[[` in base;
    r87 = dyn __7(l20, i85);
    goto L37(i81, srcref4, l19, srcref5, r87);
  L155():
    r88 = dyn attr__1(dx30, NULL, "srcref", srcref9);
    check L156() else D45();
  D45():
    deopt 164 [i83, srcref8, l22, r88];
  L32(i60, dx18, r67):
    __5 = ldf `[` in base;
    r69 = dyn __5(dx18, r67);
    goto L31(i60, r69);
  L33(i64, dx24):
    st x = dx24;
    l7 = ld x;
    c71 = `is.object`(l7);
    if c71 then L139() else L140(i64, TRUE, l7, TRUE, l7);
  L131():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L31(i51, dx14);
  L132():
    max_lines11 = ld `max.lines`;
    check L134() else D36();
  L133():
    r66 = dyn base11(<sym max.lines>);
    goto L32(i55, dx13, r66);
  L135():
    dr14 = tryDispatchBuiltin.0("[[<-", l4, dx15);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L137() else L136(i57, dx15, dr14);
  L136(i62, dx20, l6):
    i65 = ld i;
    check L138() else D37();
  L156():
    c74 = `is.object`(l22);
    if c74 then L157() else L158(i83, srcref8, l22);
  D36():
    deopt 126 [i55, dx13, max_lines11];
  D37():
    deopt 131 [i62, dx20, l6, dx15, i65];
  L34(i70, r77, l13, r78, dx26):
    attr__ = ldf `attr<-`;
    check L143() else D39();
  L38(i89, dx32):
    st x = dx32;
    goto L18(i89);
  L134():
    max_lines12 = force? max_lines11;
    checkMissing(max_lines12);
    r68 = seq_len(max_lines12);
    goto L32(i55, dx13, r68);
  L137():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L33(i57, dx22);
  L138():
    i66 = force? i65;
    ____1 = ldf `[[<-` in base;
    r70 = dyn ____1(l6, dx15, i66);
    goto L33(i62, r70);
  L139():
    dr16 = tryDispatchBuiltin.1("[[", l7);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L141() else L140(i64, TRUE, l7, TRUE, dr16);
  L140(i68, r73, l10, r74, l11):
    i71 = ld i;
    check L142() else D38();
  L157():
    dr22 = tryDispatchBuiltin.0("[[<-", l22, r88);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L159() else L158(i83, srcref8, dr22);
  L158(i87, srcref11, l24):
    i90 = ld i;
    check L160() else D46();
  D38():
    deopt 139 [i68, r73, l10, r74, l11, i71];
  D39():
    deopt 143 [i70, r77, l13, dx26, r78];
  D46():
    deopt 165 [i87, srcref11, l24, r88, i90];
  L141():
    dx25 = getTryDispatchBuiltinValue(dr16);
    goto L34(i64, TRUE, l7, TRUE, dx25);
  L142():
    i72 = force? i71;
    __6 = ldf `[[` in base;
    r79 = dyn __6(l11, i72);
    goto L34(i68, r73, l10, r74, r79);
  L143():
    r80 = dyn attr__(dx26, NULL, "truncated", r78);
    check L144() else D40();
  L159():
    dx31 = getTryDispatchBuiltinValue(dr22);
    goto L38(i83, dx31);
  L160():
    i91 = force? i90;
    ____3 = ldf `[[<-` in base;
    r89 = dyn ____3(l24, r88, i91);
    goto L38(i87, r89);
  D40():
    deopt 146 [i70, r77, l13, r80];
  L144():
    c72 = `is.object`(l13);
    if c72 then L145() else L146(i70, r77, l13);
  L35(i76, r84, dx28):
    st x = dx28;
    goto L36(i76);
  L145():
    dr18 = tryDispatchBuiltin.0("[[<-", l13, r80);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L147() else L146(i70, r77, dr18);
  L146(i74, r82, l15):
    i77 = ld i;
    check L148() else D41();
  D41():
    deopt 147 [i74, r82, l15, r80, i77];
  L147():
    dx27 = getTryDispatchBuiltinValue(dr18);
    goto L35(i70, r77, dx27);
  L148():
    i78 = force? i77;
    ____2 = ldf `[[<-` in base;
    r85 = dyn ____2(l15, r80, i78);
    goto L35(i74, r82, r85);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg x3:*, reg x4:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c14:L, reg r8:V, reg x5:*, reg x6:V, reg is_na:cls, reg r9:V, reg r10:V, reg c15:L, reg c16:V, reg c18:L, reg c20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c23:L, reg r12:V, reg x7:*, reg x8:V, reg as_integer:cls, reg r13:V, reg r14:V, reg c24:L, reg c25:V |
    mkenv;
    st x = x;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c = `as.logical`(r1);
    if c then L11() else L1(c);
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L17() else L3(c9);
  L9():
    x2 = force? x1;
    checkMissing(x2);
    is_numeric = ldf `is.numeric` in base;
    r2 = dyn is_numeric(x2);
    check L10() else D1();
  L11():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    r6 = `==`(r4, 1);
    c6 = `as.logical`(r6);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3(c11):
    c18 = `as.logical`(c11);
    if c18 then L23() else L5(c18);
  L10():
    goto L0(r2);
  L12():
    x3 = ld x;
    check L14() else D2();
  L13():
    r3 = dyn base1(<sym x>);
    goto L2(c, r3);
  L17():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  D2():
    deopt 8 [c, x3];
  L4(c14, r8):
    r10 = `!`(r8);
    c15 = `as.logical`(r10);
    c16 = `&&`(c14, c15);
    goto L3(c16);
  L5(c20):
    popenv;
    return c20;
  L14():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r5 = dyn length(x4);
    check L15() else D3();
  L18():
    x5 = ld x;
    check L20() else D4();
  L19():
    r7 = dyn base2(<sym x>);
    goto L4(c9, r7);
  L23():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  D3():
    deopt 11 [c, r5];
  D4():
    deopt 17 [c9, x5];
  L6(c23, r12):
    r14 = `>=`(r12, 0);
    c24 = `as.logical`(r14);
    c25 = `&&`(c23, c24);
    goto L5(c25);
  L15():
    goto L2(c, r5);
  L20():
    x6 = force? x5;
    checkMissing(x6);
    is_na = ldf `is.na` in base;
    r9 = dyn is_na(x6);
    check L21() else D5();
  L24():
    x7 = ld x;
    check L26() else D6();
  L25():
    r11 = dyn base3(<sym x>);
    goto L6(c18, r11);
  D5():
    deopt 20 [c9, r9];
  D6():
    deopt 25 [c18, x7];
  L21():
    goto L4(c9, r9);
  L26():
    x8 = force? x7;
    checkMissing(x8);
    as_integer = ldf `as.integer` in base;
    r13 = dyn as_integer(x8);
    check L27() else D7();
  D7():
    deopt 28 [c18, r13];
  L27():
    goto L6(c18, r13);
  }
}