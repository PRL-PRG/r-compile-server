fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2073606131;
    st `.format_rl_table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2073606131(labels, x, offset, width, sep) {
  (reg labels:*, reg x:*, reg offset:*, reg width:*, reg sep:*) -+> V { var labels:*, var x:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, reg getOption:cls, reg r:V, reg r1:V, reg p:p(V +), var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, reg format:cls, reg labels1:*, reg labels2:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg length:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg labels3:*, reg labels4:V, reg c:L, reg labels6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg nchar:cls, reg r11:V, reg offset1:*, reg offset2:V, reg r12:V, reg strwrap:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg width1:*, reg width2:V, reg delta:*, reg delta1:V, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg r19:V, reg sep1:*, reg sep2:V, reg nchar1:cls, reg r20:V, reg r21:V, reg p3:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg lengths:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r27:V, reg cumsum:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg strrep:cls, reg delta2:*, reg delta3:V, reg p5:p(V +), reg r32:V, reg nlines:*, reg nlines1:V, reg c1:L, reg nlines3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg len:*, reg len1:V, reg __1:cls, reg r33:V, reg rep_int:cls, reg r34:V, reg paste0:cls, reg strrep1:cls, reg offset3:*, reg offset4:V, reg p6:p(V +), reg r36:V, reg p7:p(V +), reg labels7:*, reg labels8:V, reg p8:p(V +), reg r39:V, reg l:*, reg c2:L, reg r41:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg l5:*, reg r52:V, reg r53:I, reg r54:V, reg nlines4:*, reg nlines5:V, reg c3:L, reg r58:V, reg l7:*, reg r59:V, reg r60:I, reg nlines7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r64:V, reg l9:*, reg r65:V, reg r66:I, reg dx7:V, reg len2:*, reg len3:V, reg r67:V, reg __2:cls, reg r68:V, reg c4:cls, reg r69:V, reg r70:V, reg ___:cls, reg r71:V, reg paste1:cls, reg prefix:*, reg prefix1:V, reg p9:p(V +), reg unlist:cls, reg x7:*, reg x8:V, reg p10:p(V +), reg r74:V, reg p11:p(V +), reg sep3:*, reg sep4:V, reg p12:p(V +), reg r77:V |
    mkenv;
    st labels = labels;
    st x = x;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L0(0.0) else L0(offset);
  L0(offset_orDefault):
    st offset = offset_orDefault;
    width_isMissing = missing.0(width);
    if width_isMissing then L1() else L2(width);
  L1():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("width");
      r1 = `*`(0.9, r);
      return r1;
    };
    goto L2(p);
  L2(width_orDefault):
    st width = width_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L3(" ") else L3(sep);
  L3(sep_orDefault):
    st sep = sep_orDefault;
    format = ldf format;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p1 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    r4 = dyn format[, justify](p1, "right");
    check L14() else D1();
  D1():
    deopt 5 [r4];
  L14():
    st labels = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L4(r6):
    st len = r6;
    sym1 = ldf nchar;
    base1 = ldf nchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L15():
    x1 = ld x;
    check L17() else D2();
  L16():
    r5 = dyn base(<sym x>);
    goto L4(r5);
  D2():
    deopt 9 [x1];
  L5(r9):
    offset1 = ld offset;
    check L26() else D6();
  L17():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r7 = dyn length(x2);
    check L18() else D3();
  L19():
    labels3 = ld labels;
    check L21() else D4();
  L20():
    r8 = dyn base1(<lang `[`(labels, 1)>, "width");
    goto L5(r8);
  D3():
    deopt 12 [r7];
  D4():
    deopt 16 [labels3];
  D6():
    deopt 25 [r9, offset1];
  L18():
    goto L4(r7);
  L21():
    labels4 = force? labels3;
    checkMissing(labels4);
    c = `is.object`(labels4);
    if c then L22() else L23(labels4);
  L26():
    offset2 = force? offset1;
    checkMissing(offset2);
    r12 = `+`(r9, offset2);
    st delta = r12;
    strwrap = ldf strwrap;
    check L27() else D7();
  D7():
    deopt 30 [];
  L6(dx1):
    nchar = ldf nchar in base;
    r11 = dyn nchar(dx1, "width", FALSE, NA_LGL);
    check L25() else D5();
  L22():
    dr = tryDispatchBuiltin.1("[", labels4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(labels6):
    __ = ldf `[` in base;
    r10 = dyn __(labels6, 1);
    goto L6(r10);
  L27():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      width1 = ld width;
      width2 = force? width1;
      checkMissing(width2);
      delta = ld delta;
      delta1 = force? delta;
      checkMissing(delta1);
      r14 = `-`(width2, delta1);
      sym2 = ldf nchar;
      base2 = ldf nchar in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18, r19):
      r21 = `-`(r18, r19);
      return r21;
    L1():
      sep1 = ld sep;
      sep2 = force? sep1;
      checkMissing(sep2);
      nchar1 = ldf nchar in base;
      r20 = dyn nchar1(sep2, "width", FALSE, NA_LGL);
      goto L0(r14, r20);
    L2():
      r17 = dyn base2(<sym sep>, "width");
      goto L0(r14, r17);
    };
    r23 = dyn strwrap[, width, simplify](p2, p3, FALSE);
    check L28() else D8();
  D5():
    deopt 25 [r11];
  D8():
    deopt 36 [r23];
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L25():
    goto L5(r11);
  L28():
    st x = r23;
    sym3 = ldf cumsum;
    base3 = ldf cumsum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L7(r25):
    st nlines = r25;
    sym4 = ldf `rep.int`;
    base4 = ldf `rep.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L29():
    lengths = ldf lengths;
    check L31() else D9();
  L30():
    r24 = dyn base3(<lang lengths(x)>);
    goto L7(r24);
  D9():
    deopt 41 [];
  L8(r30):
    st prefix = r30;
    paste0 = ldf paste0;
    check L44() else D17();
  L31():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r27 = dyn lengths(p4);
    check L32() else D10();
  L34():
    strrep = ldf strrep;
    check L36() else D12();
  L35():
    r29 = dyn base4(<lang strrep(" ", delta)>, <lang `[`(nlines, len)>);
    goto L8(r29);
  D10():
    deopt 43 [r27];
  D12():
    deopt 50 [];
  D17():
    deopt 63 [];
  L32():
    cumsum = ldf cumsum in base;
    r28 = dyn cumsum(r27);
    check L33() else D11();
  L36():
    p5 = prom<V +>{
      delta2 = ld delta;
      delta3 = force? delta2;
      checkMissing(delta3);
      return delta3;
    };
    r32 = dyn strrep(" ", p5);
    check L37() else D13();
  L44():
    p7 = prom<V +>{
      strrep1 = ldf strrep;
      p6 = prom<V +>{
        offset3 = ld offset;
        offset4 = force? offset3;
        checkMissing(offset4);
        return offset4;
      };
      r36 = dyn strrep1(" ", p6);
      return r36;
    };
    p8 = prom<V +>{
      labels7 = ld labels;
      labels8 = force? labels7;
      checkMissing(labels8);
      return labels8;
    };
    r39 = dyn paste0(p7, p8);
    check L45() else D18();
  D11():
    deopt 45 [r28];
  D13():
    deopt 53 [r32];
  D18():
    deopt 66 [r39];
  L33():
    goto L7(r28);
  L37():
    nlines = ld nlines;
    check L38() else D14();
  L45():
    l = ld prefix;
    c2 = `is.object`(l);
    if c2 then L46() else L47(r39, l);
  D14():
    deopt 54 [nlines];
  L10(dx5):
    st prefix = dx5;
    paste1 = ldf paste;
    check L57() else D22();
  L38():
    nlines1 = force? nlines;
    checkMissing(nlines1);
    c1 = `is.object`(nlines1);
    if c1 then L39() else L40(nlines1);
  L46():
    dr4 = tryDispatchBuiltin.0("[<-", l, r39);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(r39, dr4);
  L47(r41, l2):
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L49() else L50();
  D22():
    deopt 84 [];
  L9(dx3):
    rep_int = ldf `rep.int` in base;
    r34 = dyn rep_int(r32, dx3);
    check L43() else D16();
  L11(r51, l5, r52, r53, r54):
    r70 = `+`(r53, r54);
    ___ = ldf `[<-` in base;
    r71 = dyn ___(l5, r52, r70);
    goto L10(r71);
  L39():
    dr2 = tryDispatchBuiltin.1("[", nlines1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(dr2);
  L40(nlines3):
    len = ld len;
    check L42() else D15();
  L48():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L49():
    nlines4 = ld nlines;
    check L51() else D19();
  L50():
    r50 = dyn base5(0, <lang `[`(nlines, `-`(len))>);
    goto L11(r41, l2, r39, 1, r50);
  L57():
    p9 = prom<V +>{
      prefix = ld prefix;
      prefix1 = force? prefix;
      checkMissing(prefix1);
      return prefix1;
    };
    p11 = prom<V +>{
      unlist = ldf unlist;
      p10 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r74 = dyn unlist(p10);
      return r74;
    };
    p12 = prom<V +>{
      sep3 = ld sep;
      sep4 = force? sep3;
      checkMissing(sep4);
      return sep4;
    };
    r77 = dyn paste1[, , sep](p9, p11, p12);
    check L58() else D23();
  D15():
    deopt 56 [nlines3, len];
  D16():
    deopt 60 [r34];
  D19():
    deopt 72 [r41, l2, r39, 1, nlines4];
  D23():
    deopt 89 [r77];
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L42():
    len1 = force? len;
    __1 = ldf `[` in base;
    r33 = dyn __1(nlines3, len1);
    goto L9(r33);
  L43():
    goto L8(r34);
  L51():
    nlines5 = force? nlines4;
    checkMissing(nlines5);
    c3 = `is.object`(nlines5);
    if c3 then L52() else L53(r41, l2, r39, 1, nlines5);
  L58():
    popenv;
    return r77;
  L12(r64, l9, r65, r66, dx7):
    c4 = ldf c in base;
    r69 = dyn c4(0, dx7);
    check L56() else D21();
  L52():
    dr6 = tryDispatchBuiltin.1("[", nlines5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L54() else L53(r41, l2, r39, 1, dr6);
  L53(r58, l7, r59, r60, nlines7):
    len2 = ld len;
    check L55() else D20();
  D20():
    deopt 74 [r58, l7, r59, r60, nlines7, len2];
  D21():
    deopt 79 [r64, l9, r65, r66, r69];
  L54():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(r41, l2, r39, 1, dx6);
  L55():
    len3 = force? len2;
    checkMissing(len3);
    r67 = `-`(<missing>, len3);
    __2 = ldf `[` in base;
    r68 = dyn __2(nlines7, r67);
    goto L12(r58, l7, r59, r60, r68);
  L56():
    goto L11(r64, l9, r65, r66, r69);
  }
}