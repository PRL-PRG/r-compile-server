fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner620249668;
    st `xpdrows.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner620249668(x, `old.rows`, `new.rows`) {
  (reg x:*, reg old_rows:*, reg new_rows:*) -+> V { var x:*, var `old.rows`:*, var `new.rows`:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg old_rows1:*, reg old_rows2:V, reg length1:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg new_rows1:*, reg new_rows2:V, reg length2:cls, reg r8:V, reg nro:*, reg nro1:V, reg nrn:*, reg nrn1:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg nc:*, reg nc1:V, reg r12:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x3:V, reg x4:*, reg x5:V, reg c1:L, reg i6:I, reg x7:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg i13:I, reg r15:V, reg y:*, reg y1:V, reg dim:cls, reg r16:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg i16:I, reg r18:V, reg y2:*, reg y3:V, reg oldClass:cls, reg r19:V, reg l1:*, reg class__:cls, reg r20:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r21:V, reg i19:I, reg r22:V, reg dy:*, reg dy1:V, reg length3:cls, reg r23:V, reg r24:V, reg c2:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r25:V, reg i24:I, reg r26:V, reg y4:*, reg y5:V, reg dimnames:cls, reg r27:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r28:V, reg i27:I, reg r29:V, reg dny:*, reg dny1:V, reg c3:L, reg i29:I, reg dny3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i31:I, reg dx3:V, reg __1:cls, reg r30:V, reg length4:cls, reg r31:V, reg r32:V, reg c4:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r33:V, reg i36:I, reg r34:V, reg dny4:*, reg dny5:V, reg c5:L, reg i38:I, reg dny7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i40:I, reg dx5:V, reg __2:cls, reg r35:V, reg new_rows3:*, reg new_rows4:V, reg c6:cls, reg r36:V, reg l2:*, reg c7:L, reg i42:I, reg r38:V, reg l4:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i44:I, reg r40:V, reg dx7:V, reg ____:cls, reg r41:V, reg i45:I, reg array:cls, reg y6:*, reg y7:V, reg c8:L, reg y9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r43:V, reg p:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r45:V, reg r46:V, reg nr:*, reg nr1:V, reg nc2:*, reg nc3:V, reg c9:cls, reg r47:V, reg p1:p(V +), reg dny8:*, reg dny9:V, reg p2:p(V +), reg r50:V, reg y10:*, reg y11:V, reg l5:*, reg c10:L, reg i47:I, reg y13:V, reg l7:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i49:I, reg dx11:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r51:V, reg i52:I, reg y20:V, reg y21:V, reg r52:V, reg nro2:*, reg nro3:V, reg r53:I, reg ___:cls, reg r54:V, reg cy:*, reg cy1:V, reg l11:*, reg class__1:cls, reg r55:V, reg z:*, reg z1:V, reg l12:*, reg c11:L, reg i54:I, reg z3:V, reg l14:*, reg dr12:V, reg dc6:L, reg dx12:V, reg i56:I, reg z5:V, reg dx13:V, reg i57:*, reg i58:V, reg ____1:cls, reg r56:V, reg i59:I, reg sym12:cls, reg base12:cls, reg guard12:L, reg r57:V, reg i62:I, reg r58:V, reg y22:*, reg y23:V, reg attributes:cls, reg r59:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r60:V, reg i65:I, reg r61:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r62:V, reg i68:I, reg r63:V, reg y24:*, reg y25:V, reg names:cls, reg r64:V, reg length5:cls, reg r65:V, reg r66:V, reg c12:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r67:V, reg i73:I, reg r68:V, reg ay:*, reg ay1:V, reg c13:L, reg i75:I, reg ay3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i77:I, reg dx15:V, reg r69:V, reg new_rows5:*, reg new_rows6:V, reg c14:cls, reg r70:V, reg l15:*, reg c15:L, reg i79:I, reg r72:V, reg l17:*, reg dr16:V, reg dc8:L, reg dx16:V, reg i81:I, reg r74:V, reg dx17:V, reg r75:V, reg i82:I, reg nr2:*, reg nr3:V, reg l18:*, reg length__:cls, reg r77:V, reg ay4:*, reg ay5:V, reg l19:*, reg attributes__:cls, reg r78:V, reg cy2:*, reg cy3:V, reg l20:*, reg class__2:cls, reg r79:V, reg y26:*, reg y27:V, reg l21:*, reg c16:L, reg i84:I, reg y29:V, reg l23:*, reg dr18:V, reg dc9:L, reg dx18:V, reg i86:I, reg y31:V, reg dx19:V, reg i87:*, reg i88:V, reg ____2:cls, reg r80:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r81:V, reg r82:V, reg old_rows3:*, reg old_rows4:V, reg new_rows7:*, reg new_rows8:V, reg c17:cls, reg r83:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r84:V, reg r85:V, reg duplicated:cls, reg nm:*, reg nm1:V, reg p3:p(V +), reg r87:V, reg any:cls, reg r88:V, reg c18:L, reg make_unique:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r89:V, reg r90:V, reg nm2:*, reg nm3:V, reg as_character:cls, reg r91:V, reg p4:p(V +), reg r93:V, reg nm4:*, reg nm5:V, reg l24:*, reg attr__:cls, reg r95:V, reg x8:*, reg x9:V |
    mkenv;
    st x = x;
    st `old.rows` = old_rows;
    st `new.rows` = new_rows;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L0(r1):
    st nc = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L34():
    x1 = ld x;
    check L36() else D0();
  L35():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    st nro = r4;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L36():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L37() else D1();
  L38():
    old_rows1 = ld `old.rows`;
    check L40() else D2();
  L39():
    r3 = dyn base1(<sym old.rows>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [old_rows1];
  L2(r7):
    st nrn = r7;
    nro = ld nro;
    check L46() else D6();
  L37():
    goto L0(r2);
  L40():
    old_rows2 = force? old_rows1;
    checkMissing(old_rows2);
    length1 = ldf length in base;
    r5 = dyn length1(old_rows2);
    check L41() else D3();
  L42():
    new_rows1 = ld `new.rows`;
    check L44() else D4();
  L43():
    r6 = dyn base2(<sym new.rows>);
    goto L2(r6);
  D3():
    deopt 12 [r5];
  D4():
    deopt 16 [new_rows1];
  D6():
    deopt 21 [nro];
  L41():
    goto L1(r5);
  L44():
    new_rows2 = force? new_rows1;
    checkMissing(new_rows2);
    length2 = ldf length in base;
    r8 = dyn length2(new_rows2);
    check L45() else D5();
  L46():
    nro1 = force? nro;
    checkMissing(nro1);
    nrn = ld nrn;
    check L47() else D7();
  D5():
    deopt 19 [r8];
  D7():
    deopt 22 [nro1, nrn];
  L45():
    goto L2(r8);
  L47():
    nrn1 = force? nrn;
    checkMissing(nrn1);
    r9 = `+`(nro1, nrn1);
    st nr = r9;
    sym3 = ldf seq_len;
    base3 = ldf seq_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L3(r11):
    s = toForSeq(r11);
    l = length(s);
    i = 0;
    goto L4(i);
  L48():
    nc = ld nc;
    check L50() else D8();
  L49():
    r10 = dyn base3(<sym nc>);
    goto L3(r10);
  D8():
    deopt 27 [nc];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L51() else L29();
  L50():
    nc1 = force? nc;
    checkMissing(nc1);
    r12 = seq_len(nc1);
    goto L3(r12);
  L29():
    x3 = `[[`(s, i2, NULL, TRUE);
    st i = x3;
    x4 = ld x;
    check L52() else D9();
  L51():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L154() else L155();
  D9():
    deopt 30 [i2, x4];
  L30(r82):
    st nm = r82;
    sym17 = ldf any;
    base17 = ldf any in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L159() else L160();
  L52():
    x5 = force? x4;
    checkMissing(x5);
    c1 = `is.object`(x5);
    if c1 then L53() else L54(i2, x5);
  L154():
    old_rows3 = ld `old.rows`;
    check L156() else D54();
  L155():
    r81 = dyn base16(<sym old.rows>, <sym new.rows>);
    goto L30(r81);
  D54():
    deopt 201 [old_rows3];
  L5(i8, dx1):
    st y = dx1;
    sym4 = ldf dim;
    base4 = ldf dim in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  L31(r85):
    c18 = `as.logical`(r85);
    if c18 then L164() else L32();
  L53():
    dr = tryDispatchBuiltin.1("[[", x5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L55() else L54(i2, dr);
  L54(i6, x7):
    i9 = ld i;
    check L56() else D10();
  L156():
    old_rows4 = force? old_rows3;
    checkMissing(old_rows4);
    new_rows7 = ld `new.rows`;
    check L157() else D55();
  L159():
    duplicated = ldf duplicated;
    check L161() else D57();
  L160():
    r84 = dyn base17(<lang duplicated(nm)>);
    goto L31(r84);
  D10():
    deopt 32 [i6, x7, i9];
  D55():
    deopt 203 [new_rows7];
  D57():
    deopt 211 [];
  L6(i13, r15):
    st dy = r15;
    sym5 = ldf oldClass;
    base5 = ldf oldClass in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L32():
    goto L33();
  L33():
    nm4 = ld nm;
    check L168() else D62();
  L55():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(i2, dx);
  L56():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r13 = dyn __(x7, i10);
    goto L5(i6, r13);
  L57():
    y = ld y;
    check L59() else D11();
  L58():
    r14 = dyn base4(<sym y>);
    goto L6(i8, r14);
  L157():
    new_rows8 = force? new_rows7;
    checkMissing(new_rows8);
    c17 = ldf c in base;
    r83 = dyn c17(old_rows4, new_rows8);
    check L158() else D56();
  L161():
    p3 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    r87 = dyn duplicated(p3);
    check L162() else D58();
  L164():
    make_unique = ldf `make.unique`;
    check L165() else D60();
  D11():
    deopt 38 [i8, y];
  D56():
    deopt 206 [r83];
  D58():
    deopt 213 [r87];
  D60():
    deopt 217 [];
  D62():
    deopt 223 [nm4];
  L7(i16, r18):
    st cy = r18;
    l1 = ld y;
    class__ = ldf `class<-`;
    check L65() else D15();
  L59():
    y1 = force? y;
    checkMissing(y1);
    dim = ldf dim in base;
    r16 = dyn dim(y1);
    check L60() else D12();
  L61():
    y2 = ld y;
    check L63() else D13();
  L62():
    r17 = dyn base5(<sym y>);
    goto L7(i13, r17);
  L158():
    goto L30(r83);
  L162():
    any = ldf any in base;
    r88 = dyn any(r87);
    check L163() else D59();
  L165():
    p4 = prom<V +>{
      sym18 = ldf `as.character`;
      base18 = ldf `as.character` in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r90):
      return r90;
    L1():
      nm2 = ld nm;
      nm3 = force? nm2;
      checkMissing(nm3);
      as_character = ldf `as.character` in base;
      r91 = dyn as_character(nm3);
      goto L0(r91);
    L2():
      r89 = dyn base18(<sym nm>);
      goto L0(r89);
    };
    r93 = dyn make_unique(p4);
    check L166() else D61();
  L168():
    nm5 = force? nm4;
    checkMissing(nm5);
    l24 = ld x;
    attr__ = ldf `attr<-`;
    check L169() else D63();
  D12():
    deopt 41 [i8, r16];
  D13():
    deopt 45 [i13, y2];
  D15():
    deopt 53 [i16, NULL, l1, NULL];
  D59():
    deopt 215 [r88];
  D61():
    deopt 219 [r93];
  D63():
    deopt 226 [nm5, l24, nm5];
  L60():
    goto L6(i8, r16);
  L63():
    y3 = force? y2;
    checkMissing(y3);
    oldClass = ldf oldClass in base;
    r19 = dyn oldClass(y3);
    check L64() else D14();
  L65():
    r20 = dyn class__(l1, NULL, NULL);
    check L66() else D16();
  L163():
    goto L31(r88);
  L166():
    st nm = r93;
    goto L33();
  L169():
    r95 = dyn attr__(l24, NULL, "row.names", nm5);
    check L170() else D64();
  D14():
    deopt 48 [i13, r19];
  D16():
    deopt 55 [i16, NULL, r20];
  D64():
    deopt 229 [nm5, r95];
  L64():
    goto L7(i13, r19);
  L66():
    st y = r20;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L67() else L68();
  L170():
    st x = r95;
    x8 = ld x;
    check L171() else D65();
  D65():
    deopt 231 [x8];
  L8(i19, r22):
    r24 = `==`(r22, 2);
    c2 = `as.logical`(r24);
    if c2 then L71() else L9();
  L67():
    dy = ld dy;
    check L69() else D17();
  L68():
    r21 = dyn base6(<sym dy>);
    goto L8(i16, r21);
  L171():
    x9 = force? x8;
    checkMissing(x9);
    popenv;
    return x9;
  D17():
    deopt 59 [i16, dy];
  L9():
    sym12 = ldf attributes;
    base12 = ldf attributes in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L114() else L115();
  L21(i59):
    goto L4(i59);
  L69():
    dy1 = force? dy;
    checkMissing(dy1);
    length3 = ldf length in base;
    r23 = dyn length3(dy1);
    check L70() else D18();
  L71():
    sym7 = ldf dimnames;
    base7 = ldf dimnames in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L72() else L73();
  D18():
    deopt 62 [i16, r23];
  L10(i24, r26):
    st dny = r26;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L76() else L77();
  L22(i62, r58):
    st ay = r58;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L118() else L119();
  L70():
    goto L8(i16, r23);
  L72():
    y4 = ld y;
    check L74() else D19();
  L73():
    r25 = dyn base7(<sym y>);
    goto L10(i19, r25);
  L114():
    y22 = ld y;
    check L116() else D35();
  L115():
    r57 = dyn base12(<sym y>);
    goto L22(i19, r57);
  D19():
    deopt 67 [i19, y4];
  D35():
    deopt 137 [i19, y22];
  L11(i27, r29):
    r32 = `>`(r29, 0);
    c4 = `as.logical`(r32);
    if c4 then L83() else L13();
  L23(i65, r61):
    r66 = `>`(r61, 0);
    c12 = `as.logical`(r66);
    if c12 then L125() else L25();
  L74():
    y5 = force? y4;
    checkMissing(y5);
    dimnames = ldf dimnames in base;
    r27 = dyn dimnames(y5);
    check L75() else D20();
  L76():
    dny = ld dny;
    check L78() else D21();
  L77():
    r28 = dyn base8(<lang `[[`(dny, 1)>);
    goto L11(i24, r28);
  L116():
    y23 = force? y22;
    checkMissing(y23);
    attributes = ldf attributes in base;
    r59 = dyn attributes(y23);
    check L117() else D36();
  L118():
    sym14 = ldf names;
    base14 = ldf names in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L120() else L121();
  L119():
    r60 = dyn base13(<lang names(y)>);
    goto L23(i62, r60);
  D20():
    deopt 70 [i19, r27];
  D21():
    deopt 74 [i24, dny];
  D36():
    deopt 140 [i19, r59];
  L13():
    goto L17(i27);
  L17(i45):
    array = ldf array;
    check L96() else D26();
  L24(i68, r63):
    length5 = ldf length in base;
    r65 = dyn length5(r63);
    check L124() else D39();
  L25():
    goto L27(i65);
  L27(i82):
    nr2 = ld nr;
    check L140() else D43();
  L75():
    goto L10(i19, r27);
  L78():
    dny1 = force? dny;
    checkMissing(dny1);
    c3 = `is.object`(dny1);
    if c3 then L79() else L80(i24, dny1);
  L83():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L84() else L85();
  L117():
    goto L22(i19, r59);
  L120():
    y24 = ld y;
    check L122() else D37();
  L121():
    r62 = dyn base14(<sym y>);
    goto L24(i62, r62);
  L125():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L126() else L127();
  D26():
    deopt 102 [i45];
  D37():
    deopt 146 [i62, y24];
  D39():
    deopt 151 [i68, r65];
  D43():
    deopt 168 [i82, nr2];
  L12(i31, dx3):
    length4 = ldf length in base;
    r31 = dyn length4(dx3);
    check L82() else D22();
  L14(i36, r34):
    l2 = ld dny;
    c7 = `is.object`(l2);
    if c7 then L92() else L93(i36, r34, l2);
  L26(i73, r68):
    l15 = ld ay;
    c15 = `is.object`(l15);
    if c15 then L136() else L137(i73, r68, l15);
  L79():
    dr2 = tryDispatchBuiltin.1("[[", dny1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L81() else L80(i24, dr2);
  L80(i29, dny3):
    __1 = ldf `[[` in base;
    r30 = dyn __1(dny3, 1);
    goto L12(i29, r30);
  L84():
    dny4 = ld dny;
    check L86() else D23();
  L85():
    r33 = dyn base9(<lang `[[`(dny, 1)>, <sym new.rows>);
    goto L14(i27, r33);
  L96():
    p = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      c8 = `is.object`(y7);
      if c8 then L1() else L2(y7);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", y7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(y9):
      __3 = ldf `[` in base;
      r43 = dyn __3(y9, 1);
      goto L0(r43);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p1 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      nr = ld nr;
      nr1 = force? nr;
      checkMissing(nr1);
      nc2 = ld nc;
      nc3 = force? nc2;
      checkMissing(nc3);
      c9 = ldf c in base;
      r47 = dyn c9(nr1, nc3);
      goto L0(r47);
    L2():
      r45 = dyn base10(<sym nr>, <sym nc>);
      goto L0(r45);
    };
    p2 = prom<V +>{
      dny8 = ld dny;
      dny9 = force? dny8;
      checkMissing(dny9);
      return dny9;
    };
    r50 = dyn array[, dim, dimnames](p, p1, p2);
    check L97() else D27();
  L122():
    y25 = force? y24;
    checkMissing(y25);
    names = ldf names in base;
    r64 = dyn names(y25);
    check L123() else D38();
  L124():
    goto L23(i68, r65);
  L126():
    ay = ld ay;
    check L128() else D40();
  L127():
    r67 = dyn base15(<lang `$`(ay, names)>, <sym new.rows>);
    goto L26(i65, r67);
  L140():
    nr3 = force? nr2;
    checkMissing(nr3);
    l18 = ld y;
    length__ = ldf `length<-`;
    check L141() else D44();
  D22():
    deopt 80 [i31, r31];
  D23():
    deopt 85 [i27, dny4];
  D27():
    deopt 108 [i45, r50];
  D38():
    deopt 149 [i62, r64];
  D40():
    deopt 156 [i65, ay];
  D44():
    deopt 171 [i82, nr3, l18, nr3];
  L16(i44, r40, dx7):
    st dny = dx7;
    goto L17(i44);
  L81():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(i24, dx2);
  L82():
    goto L11(i31, r31);
  L86():
    dny5 = force? dny4;
    checkMissing(dny5);
    c5 = `is.object`(dny5);
    if c5 then L87() else L88(i27, dny5);
  L92():
    dr6 = tryDispatchBuiltin.0("[[<-", l2, r34);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L94() else L93(i36, r34, dr6);
  L93(i42, r38, l4):
    ____ = ldf `[[<-` in base;
    r41 = dyn ____(l4, r34, 1);
    goto L16(i42, r38, r41);
  L97():
    st z = r50;
    y10 = ld y;
    check L98() else D28();
  L123():
    goto L24(i62, r64);
  L128():
    ay1 = force? ay;
    checkMissing(ay1);
    c13 = `is.object`(ay1);
    if c13 then L130() else L131(i65, ay1);
  L135(i81, r74, dx17):
    st ay = dx17;
    goto L27(i81);
  L136():
    dr16 = tryDispatchBuiltin.0("$<-", l15, r68);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L138() else L137(i73, r68, dr16);
  L137(i79, r72, l17):
    r75 = `$<-`(l17, <sym names>, r68);
    goto L135(i79, r72, r75);
  L141():
    r77 = dyn length__(l18, NULL, nr3);
    check L142() else D45();
  D28():
    deopt 110 [i45, y10];
  D45():
    deopt 173 [i82, nr3, r77];
  L15(i40, dx5):
    new_rows3 = ld `new.rows`;
    check L90() else D24();
  L87():
    dr4 = tryDispatchBuiltin.1("[[", dny5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L89() else L88(i27, dr4);
  L88(i38, dny7):
    __2 = ldf `[[` in base;
    r35 = dyn __2(dny7, 1);
    goto L15(i38, r35);
  L94():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(i36, r34, dx6);
  L98():
    y11 = force? y10;
    checkMissing(y11);
    l5 = ld z;
    c10 = `is.object`(l5);
    if c10 then L99() else L100(i45, y11, l5);
  L129(i77, dx15):
    new_rows5 = ld `new.rows`;
    check L133() else D41();
  L130():
    dr14 = tryDispatchBuiltin.1("$", ay1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L132() else L131(i65, dr14);
  L131(i75, ay3):
    r69 = `$`(ay3, <sym names>);
    goto L129(i75, r69);
  L138():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L135(i73, r68, dx16);
  L142():
    st y = r77;
    ay4 = ld ay;
    check L143() else D46();
  D24():
    deopt 90 [i40, new_rows3];
  D41():
    deopt 159 [i77, new_rows5];
  D46():
    deopt 175 [i82, ay4];
  L18(i49, dx11):
    st z = dx11;
    cy = ld cy;
    check L105() else D30();
  L89():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(i27, dx4);
  L90():
    new_rows4 = force? new_rows3;
    checkMissing(new_rows4);
    c6 = ldf c in base;
    r36 = dyn c6(dx5, new_rows4);
    check L91() else D25();
  L99():
    dr10 = tryDispatchBuiltin.0("[<-", l5, y11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L101() else L100(i45, y11, dr10);
  L100(i47, y13, l7):
    sym11 = ldf seq_len;
    base11 = ldf seq_len in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L102() else L103();
  L132():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L129(i65, dx14);
  L133():
    new_rows6 = force? new_rows5;
    checkMissing(new_rows6);
    c14 = ldf c in base;
    r70 = dyn c14(dx15, new_rows6);
    check L134() else D42();
  L143():
    ay5 = force? ay4;
    checkMissing(ay5);
    l19 = ld y;
    attributes__ = ldf `attributes<-`;
    check L144() else D47();
  D25():
    deopt 93 [i40, r36];
  D30():
    deopt 121 [i49, cy];
  D42():
    deopt 162 [i77, r70];
  D47():
    deopt 178 [i82, ay5, l19, ay5];
  L19(i52, y20, y21, r52):
    ___ = ldf `[<-` in base;
    r54 = dyn ___(l5, r52, <missing>, y21);
    goto L18(i52, r54);
  L91():
    goto L14(i40, r36);
  L101():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L18(i45, dx10);
  L102():
    nro2 = ld nro;
    check L104() else D29();
  L103():
    r51 = dyn base11(<sym nro>);
    goto L19(i47, y13, y11, r51);
  L105():
    cy1 = force? cy;
    checkMissing(cy1);
    l11 = ld z;
    class__1 = ldf `class<-`;
    check L106() else D31();
  L134():
    goto L26(i77, r70);
  L144():
    r78 = dyn attributes__(l19, NULL, ay5);
    check L145() else D48();
  D29():
    deopt 114 [i47, y13, l7, y11, nro2];
  D31():
    deopt 124 [i49, cy1, l11, cy1];
  D48():
    deopt 180 [i82, ay5, r78];
  L104():
    nro3 = force? nro2;
    checkMissing(nro3);
    r53 = seq_len(nro3);
    goto L19(i47, y13, y11, r53);
  L106():
    r55 = dyn class__1(l11, NULL, cy1);
    check L107() else D32();
  L145():
    st y = r78;
    cy2 = ld cy;
    check L146() else D49();
  D32():
    deopt 126 [i49, cy1, r55];
  D49():
    deopt 182 [i82, cy2];
  L107():
    st z = r55;
    z = ld z;
    check L108() else D33();
  L146():
    cy3 = force? cy2;
    checkMissing(cy3);
    l20 = ld y;
    class__2 = ldf `class<-`;
    check L147() else D50();
  D33():
    deopt 128 [i49, z];
  D50():
    deopt 185 [i82, cy3, l20, cy3];
  L108():
    z1 = force? z;
    checkMissing(z1);
    l12 = ld x;
    c11 = `is.object`(l12);
    if c11 then L109() else L110(i49, z1, l12);
  L147():
    r79 = dyn class__2(l20, NULL, cy3);
    check L148() else D51();
  D51():
    deopt 187 [i82, cy3, r79];
  L20(i56, z5, dx13):
    st x = dx13;
    goto L21(i56);
  L109():
    dr12 = tryDispatchBuiltin.0("[[<-", l12, z1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L111() else L110(i49, z1, dr12);
  L110(i54, z3, l14):
    i57 = ld i;
    check L112() else D34();
  L148():
    st y = r79;
    y26 = ld y;
    check L149() else D52();
  D34():
    deopt 131 [i54, z3, l14, z1, i57];
  D52():
    deopt 189 [i82, y26];
  L111():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L20(i49, z1, dx12);
  L112():
    i58 = force? i57;
    ____1 = ldf `[[<-` in base;
    r56 = dyn ____1(l14, z1, i58);
    goto L20(i54, z3, r56);
  L149():
    y27 = force? y26;
    checkMissing(y27);
    l21 = ld x;
    c16 = `is.object`(l21);
    if c16 then L150() else L151(i82, y27, l21);
  L28(i86, y31, dx19):
    st x = dx19;
    goto L21(i86);
  L150():
    dr18 = tryDispatchBuiltin.0("[[<-", l21, y27);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L152() else L151(i82, y27, dr18);
  L151(i84, y29, l23):
    i87 = ld i;
    check L153() else D53();
  D53():
    deopt 192 [i84, y29, l23, y27, i87];
  L152():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L28(i82, y27, dx18);
  L153():
    i88 = force? i87;
    ____2 = ldf `[[<-` in base;
    r80 = dyn ____2(l23, y27, i88);
    goto L28(i84, y29, r80);
  }
}