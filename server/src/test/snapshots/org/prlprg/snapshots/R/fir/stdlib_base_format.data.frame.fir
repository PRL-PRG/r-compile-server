fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner491126830;
    st `format.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner491126830(x, `...`, justify, `cut.names`) {
  (reg x:*, reg ddd:dots, reg justify:*, reg cut_names:*) -+> V { var x:*, var `...`:dots?, var justify:*, reg justify_isMissing:L, reg justify_orDefault:*, var `cut.names`:*, reg cut_names_isMissing:L, reg cut_names_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg nc:*, reg nc1:V, reg r3:V, reg c:L, reg x3:*, reg x4:V, reg _row_names_info:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg nc2:*, reg nc3:V, reg vector:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg nc4:*, reg nc5:V, reg r13:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x7:V, reg format:cls, reg x8:*, reg x9:V, reg c2:L, reg x11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r14:V, reg p1:p(V +), reg ddd1:dots?, reg justify1:*, reg justify2:V, reg p2:p(V +), reg r17:V, reg l1:*, reg c3:L, reg i8:I, reg r19:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i10:I, reg dx3:V, reg i11:*, reg i12:V, reg ____:cls, reg r22:V, reg vapply:cls, reg rval:*, reg rval1:V, reg p3:p(V +), reg NROW:*, reg NROW1:V, reg p4:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg lens:*, reg lens1:V, reg nr:*, reg nr1:V, reg r28:V, reg any:cls, reg r29:V, reg c4:L, reg warning:cls, reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg nc6:*, reg nc7:V, reg r33:I, reg s1:V, reg l4:I, reg i13:I, reg i14:I, reg i15:I, reg c5:L, reg x12:V, reg NROW2:cls, reg rval2:*, reg rval3:V, reg c6:L, reg rval5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i18:*, reg i19:V, reg __1:cls, reg r34:V, reg p5:p(V +), reg r36:V, reg len:*, reg len1:V, reg nr2:*, reg nr3:V, reg r37:V, reg c7:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg i26:I, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg i29:I, reg r42:V, reg rval6:*, reg rval7:V, reg c8:L, reg i31:I, reg rval9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i33:I, reg dx7:V, reg i34:*, reg i35:V, reg __2:cls, reg r43:V, reg dim:cls, reg r44:V, reg length1:cls, reg r45:V, reg r46:V, reg c9:L, reg len2:*, reg len3:V, reg nr4:*, reg nr5:V, reg r47:V, reg c10:L, reg rbind:cls, reg rval10:*, reg rval11:V, reg c11:L, reg rval13:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i40:*, reg i41:V, reg __3:cls, reg r48:V, reg p6:p(V +), reg matrix:cls, reg nr6:*, reg nr7:V, reg len4:*, reg len5:V, reg r50:V, reg p7:p(V +), reg ncol:cls, reg rval14:*, reg rval15:V, reg c12:L, reg rval17:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i42:*, reg i43:V, reg __4:cls, reg r52:V, reg p8:p(V +), reg r54:V, reg p9:p(V +), reg r56:V, reg p10:p(V +), reg r58:V, reg i44:I, reg r59:V, reg rval18:*, reg rval19:V, reg c13:L, reg i46:I, reg rval21:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i48:I, reg dx13:V, reg i49:*, reg i50:V, reg __5:cls, reg r60:V, reg c14:L, reg i52:I, reg dx15:V, reg dr14:V, reg dc7:L, reg dx16:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r61:V, reg i56:I, reg r62:V, reg nr8:*, reg nr9:V, reg r63:I, reg __6:cls, reg r64:V, reg i57:I, reg r65:V, reg len6:*, reg len7:V, reg nr10:*, reg nr11:V, reg r66:V, reg c15:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r67:V, reg i62:I, reg r68:V, reg rval22:*, reg rval23:V, reg c16:L, reg i64:I, reg rval25:V, reg dr16:V, reg dc8:L, reg dx20:V, reg i66:I, reg dx21:V, reg i67:*, reg i68:V, reg __7:cls, reg r69:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r70:V, reg i71:I, reg r71:V, reg nr12:*, reg nr13:V, reg len8:*, reg len9:V, reg r72:V, reg rep_int:cls, reg r73:V, reg c17:cls, reg r74:V, reg rval26:*, reg rval27:V, reg c18:L, reg i73:I, reg rval29:V, reg dr18:V, reg dc9:L, reg dx22:V, reg i75:I, reg dx23:V, reg i76:*, reg i77:V, reg __8:cls, reg r75:V, reg c19:L, reg i79:I, reg dx25:V, reg dr20:V, reg dc10:L, reg dx26:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r76:V, reg i83:I, reg dx29:V, reg r77:V, reg nr14:*, reg nr15:V, reg r78:I, reg __9:cls, reg r79:V, reg l5:*, reg c20:L, reg i85:I, reg r81:V, reg l7:*, reg dr22:V, reg dc11:L, reg dx30:V, reg i87:I, reg dx31:V, reg i88:*, reg i89:V, reg ____1:cls, reg r84:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r85:V, reg r86:V, reg nc8:*, reg nc9:V, reg r87:I, reg s2:V, reg l8:I, reg i91:I, reg i92:I, reg i93:I, reg c21:L, reg x13:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r88:V, reg i98:I, reg r89:V, reg rval30:*, reg rval31:V, reg c22:L, reg i100:I, reg rval33:V, reg dr24:V, reg dc12:L, reg dx32:V, reg i102:I, reg dx33:V, reg i103:*, reg i104:V, reg __10:cls, reg r90:V, reg c23:L, reg c24:L, reg i106:I, reg c26:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r91:V, reg i109:I, reg c29:L, reg r92:V, reg rval34:*, reg rval35:V, reg c30:L, reg i111:I, reg c32:L, reg rval37:V, reg dr26:V, reg dc13:L, reg dx34:V, reg i113:I, reg c34:L, reg dx35:V, reg i114:*, reg i115:V, reg __11:cls, reg r93:V, reg inherits:cls, reg r94:V, reg c35:L, reg c36:V, reg c38:L, reg l9:*, reg c39:L, reg i120:I, reg r97:S, reg l12:*, reg r98:S, reg l13:*, reg dr28:V, reg dc14:L, reg dx36:V, reg i122:I, reg r101:S, reg l15:*, reg r102:S, reg dx37:V, reg i123:*, reg i124:V, reg __12:cls, reg r103:V, reg oldClass__:cls, reg r104:V, reg c40:L, reg i126:I, reg r106:S, reg l17:*, reg dr30:V, reg dc15:L, reg dx38:V, reg i128:I, reg r108:S, reg dx39:V, reg i129:*, reg i130:V, reg ____2:cls, reg r109:V, reg i131:I, reg as_data_frame_list:cls, reg rval38:*, reg rval39:V, reg p11:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r112:V, reg r113:V, reg nr16:*, reg nr17:V, reg r114:I, reg p12:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r116:V, reg r117:V, reg x14:*, reg x15:V, reg names:cls, reg r118:V, reg p13:p(V +), reg cut_names1:*, reg cut_names2:V, reg p14:p(V +), reg r121:V, reg row_names:cls, reg x16:*, reg x17:V, reg p15:p(V +), reg r123:V, reg l18:*, reg attr__:cls, reg r124:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    justify_isMissing = missing.0(justify);
    if justify_isMissing then L0("none") else L0(justify);
  L0(justify_orDefault):
    st justify = justify_orDefault;
    cut_names_isMissing = missing.0(cut_names);
    if cut_names_isMissing then L1(TRUE) else L1(cut_names);
  L1(cut_names_orDefault):
    st `cut.names` = cut_names_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L46() else L47();
  L2(r1):
    st nc = r1;
    nc = ld nc;
    check L50() else D2();
  L46():
    x1 = ld x;
    check L48() else D0();
  L47():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 7 [nc];
  L48():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L49() else D1();
  L50():
    nc1 = force? nc;
    checkMissing(nc1);
    r3 = `!`(nc1);
    c = `as.logical`(r3);
    if c then L51() else L3();
  D1():
    deopt 5 [r2];
  L3():
    _row_names_info = ldf `.row_names_info`;
    check L55() else D4();
  L49():
    goto L2(r2);
  L51():
    x3 = ld x;
    check L52() else D3();
  D3():
    deopt 10 [x3];
  D4():
    deopt 16 [];
  L52():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L55():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r7 = dyn _row_names_info(p, 2);
    check L56() else D5();
  D5():
    deopt 19 [r7];
  L56():
    st nr = r7;
    sym1 = ldf vector;
    base1 = ldf vector in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L57() else L58();
  L5(r9):
    st rval = r9;
    sym2 = ldf seq_len;
    base2 = ldf seq_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L61() else L62();
  L57():
    nc2 = ld nc;
    check L59() else D6();
  L58():
    r8 = dyn base1("list", <sym nc>);
    goto L5(r8);
  D6():
    deopt 24 [nc2];
  L6(r12):
    s = toForSeq(r12);
    l = length(s);
    i = 0;
    goto L7(i);
  L59():
    nc3 = force? nc2;
    checkMissing(nc3);
    vector = ldf vector in base;
    r10 = dyn vector("list", nc3);
    check L60() else D7();
  L61():
    nc4 = ld nc;
    check L63() else D8();
  L62():
    r11 = dyn base2(<sym nc>);
    goto L6(r11);
  D7():
    deopt 27 [r10];
  D8():
    deopt 30 [nc4];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L64() else L9();
  L60():
    goto L5(r10);
  L63():
    nc5 = force? nc4;
    checkMissing(nc5);
    r13 = seq_len(nc5);
    goto L6(r13);
  L9():
    x7 = `[[`(s, i2, NULL, TRUE);
    st i = x7;
    format = ldf format;
    check L65() else D9();
  L64():
    vapply = ldf vapply;
    check L71() else D12();
  D9():
    deopt 34 [i2];
  D12():
    deopt 49 [];
  L65():
    p1 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      c2 = `is.object`(x9);
      if c2 then L1() else L2(x9);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x9);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x11):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r14 = dyn __(x11, i6);
      goto L0(r14);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    ddd1 = ld `...`;
    p2 = prom<V +>{
      justify1 = ld justify;
      justify2 = force? justify1;
      checkMissing(justify2);
      return justify2;
    };
    r17 = dyn format[, `...`, justify](p1, ddd1, p2);
    check L66() else D10();
  L71():
    p3 = prom<V +>{
      rval = ld rval;
      rval1 = force? rval;
      checkMissing(rval1);
      return rval1;
    };
    p4 = prom<V +>{
      NROW = ld NROW;
      NROW1 = force? NROW;
      checkMissing(NROW1);
      return NROW1;
    };
    r25 = dyn vapply(p3, p4, 1.0);
    check L72() else D13();
  D10():
    deopt 39 [i2, r17];
  D13():
    deopt 53 [r25];
  L66():
    l1 = ld rval;
    c3 = `is.object`(l1);
    if c3 then L67() else L68(i2, r17, l1);
  L72():
    st lens = r25;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L73() else L74();
  L8(i10, dx3):
    st rval = dx3;
    goto L7(i10);
  L10(r27):
    c4 = `as.logical`(r27);
    if c4 then L78() else L11();
  L67():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, r17);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L69() else L68(i2, r17, dr2);
  L68(i8, r19, l3):
    i11 = ld i;
    check L70() else D11();
  L73():
    lens = ld lens;
    check L75() else D14();
  L74():
    r26 = dyn base3(<lang `!=`(lens, nr)>);
    goto L10(r26);
  D11():
    deopt 41 [i8, r19, l3, r17, i11];
  D14():
    deopt 57 [lens];
  L11():
    goto L33();
  L33():
    sym11 = ldf seq_len;
    base11 = ldf seq_len in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L155() else L156();
  L69():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(i2, dx2);
  L70():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r22 = dyn ____(l3, r17, i12);
    goto L8(i8, r22);
  L75():
    lens1 = force? lens;
    checkMissing(lens1);
    nr = ld nr;
    check L76() else D15();
  L78():
    warning = ldf warning;
    check L79() else D17();
  D15():
    deopt 58 [lens1, nr];
  D17():
    deopt 64 [];
  L34(r86):
    s2 = toForSeq(r86);
    l8 = length(s2);
    i91 = 0;
    goto L35(i91);
  L76():
    nr1 = force? nr;
    checkMissing(nr1);
    r28 = `!=`(lens1, nr1);
    any = ldf any in base;
    r29 = dyn any(r28);
    check L77() else D16();
  L79():
    r30 = dyn warning("corrupt data frame: columns will be truncated or padded with NAs");
    check L80() else D18();
  L155():
    nc8 = ld nc;
    check L157() else D47();
  L156():
    r85 = dyn base11(<sym nc>);
    goto L34(r85);
  D16():
    deopt 62 [r29];
  D18():
    deopt 66 [r30];
  D47():
    deopt 163 [nc8];
  L35(i92):
    i93 = `+`.1(i92, 1);
    c21 = `<`.1(l8, i93);
    if c21 then L158() else L45();
  L77():
    goto L10(r29);
  L80():
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L81() else L82();
  L157():
    nc9 = force? nc8;
    checkMissing(nc9);
    r87 = seq_len(nc9);
    goto L34(r87);
  L12(r32):
    s1 = toForSeq(r32);
    l4 = length(s1);
    i13 = 0;
    goto L13(i13);
  L45():
    x13 = `[[`(s2, i93, NULL, TRUE);
    st i = x13;
    sym12 = ldf `is.character`;
    base12 = ldf `is.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L159() else L160();
  L81():
    nc6 = ld nc;
    check L83() else D19();
  L82():
    r31 = dyn base4(<sym nc>);
    goto L12(r31);
  L158():
    as_data_frame_list = ldf `as.data.frame.list`;
    check L188() else D57();
  D19():
    deopt 68 [nc6];
  D57():
    deopt 206 [];
  L13(i14):
    i15 = `+`.1(i14, 1);
    c5 = `<`.1(l4, i15);
    if c5 then L84() else L32();
  L36(i98, r89):
    c24 = `as.logical`(r89);
    if c24 then L166() else L38(i98, c24);
  L83():
    nc7 = force? nc6;
    checkMissing(nc7);
    r33 = seq_len(nc7);
    goto L12(r33);
  L159():
    rval30 = ld rval;
    check L161() else D48();
  L160():
    r88 = dyn base12(<lang `[[`(rval, i)>);
    goto L36(i93, r88);
  L188():
    p11 = prom<V +>{
      rval38 = ld rval;
      rval39 = force? rval38;
      checkMissing(rval39);
      return rval39;
    };
    p12 = prom<V +>{
      sym14 = ldf seq_len;
      base14 = ldf seq_len in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r113):
      return r113;
    L1():
      nr16 = ld nr;
      nr17 = force? nr16;
      checkMissing(nr17);
      r114 = seq_len(nr17);
      goto L0(r114);
    L2():
      r112 = dyn base14(<sym nr>);
      goto L0(r112);
    };
    p13 = prom<V +>{
      sym15 = ldf names;
      base15 = ldf names in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r117):
      return r117;
    L1():
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      names = ldf names in base;
      r118 = dyn names(x15);
      goto L0(r118);
    L2():
      r116 = dyn base15(<sym x>);
      goto L0(r116);
    };
    p14 = prom<V +>{
      cut_names1 = ld `cut.names`;
      cut_names2 = force? cut_names1;
      checkMissing(cut_names2);
      return cut_names2;
    };
    r121 = dyn as_data_frame_list[, `row.names`, `col.names`, optional, `fix.empty.names`, `cut.names`](p11, p12, p13, TRUE, FALSE, p14);
    check L189() else D58();
  D48():
    deopt 167 [i93, rval30];
  D58():
    deopt 218 [r121];
  L32():
    x12 = `[[`(s1, i15, NULL, TRUE);
    st i = x12;
    NROW2 = ldf NROW;
    check L85() else D20();
  L38(i106, c26):
    c38 = `as.logical`(c26);
    if c38 then L176() else L41();
  L84():
    goto L33();
  L161():
    rval31 = force? rval30;
    checkMissing(rval31);
    c22 = `is.object`(rval31);
    if c22 then L162() else L163(i93, rval31);
  L166():
    sym13 = ldf inherits;
    base13 = ldf inherits in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L167() else L168();
  L189():
    st y = r121;
    row_names = ldf `row.names`;
    check L190() else D59();
  D20():
    deopt 72 [i15];
  D59():
    deopt 221 [];
  L37(i102, dx33):
    c23 = `is.character`(dx33);
    goto L36(i102, c23);
  L39(i109, c29, r92):
    c35 = `as.logical`(r92);
    c36 = `&&`(c29, c35);
    goto L38(i109, c36);
  L41():
    goto L44(i106);
  L44(i131):
    goto L35(i131);
  L85():
    p5 = prom<V +>{
      rval2 = ld rval;
      rval3 = force? rval2;
      checkMissing(rval3);
      c6 = `is.object`(rval3);
      if c6 then L1() else L2(rval3);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", rval3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(rval5):
      i18 = ld i;
      i19 = force? i18;
      __1 = ldf `[[` in base;
      r34 = dyn __1(rval5, i19);
      goto L0(r34);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r36 = dyn NROW2(p5);
    check L86() else D21();
  L162():
    dr24 = tryDispatchBuiltin.1("[[", rval31);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L164() else L163(i93, dr24);
  L163(i100, rval33):
    i103 = ld i;
    check L165() else D49();
  L167():
    rval34 = ld rval;
    check L169() else D50();
  L168():
    r91 = dyn base13(<lang `[[`(rval, i)>, "character");
    goto L39(i98, c24, r91);
  L176():
    l9 = ld rval;
    c39 = `is.object`(l9);
    if c39 then L177() else L178(i106, "AsIs", l9, "AsIs", l9);
  L190():
    p15 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    r123 = dyn row_names(p15);
    check L191() else D60();
  D21():
    deopt 74 [i15, r36];
  D49():
    deopt 169 [i100, rval33, i103];
  D50():
    deopt 175 [i98, c24, rval34];
  D60():
    deopt 223 [r123];
  L42(i122, r101, l15, r102, dx37):
    oldClass__ = ldf `oldClass<-`;
    check L181() else D54();
  L86():
    st len = r36;
    len = ld len;
    check L87() else D22();
  L164():
    dx32 = getTryDispatchBuiltinValue(dr24);
    goto L37(i93, dx32);
  L165():
    i104 = force? i103;
    __10 = ldf `[[` in base;
    r90 = dyn __10(rval33, i104);
    goto L37(i100, r90);
  L169():
    rval35 = force? rval34;
    checkMissing(rval35);
    c30 = `is.object`(rval35);
    if c30 then L170() else L171(i98, c24, rval35);
  L177():
    dr28 = tryDispatchBuiltin.1("[[", l9);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L179() else L178(i106, "AsIs", l9, "AsIs", dr28);
  L178(i120, r97, l12, r98, l13):
    i123 = ld i;
    check L180() else D53();
  L191():
    l18 = ld y;
    attr__ = ldf `attr<-`;
    check L192() else D61();
  D22():
    deopt 76 [i15, len];
  D53():
    deopt 189 [i120, r97, l12, r98, l13, i123];
  D54():
    deopt 193 [i122, r101, l15, dx37, r102];
  D61():
    deopt 225 [r123, l18, r123];
  L40(i113, c34, dx35):
    inherits = ldf inherits in base;
    r94 = dyn inherits(dx35, "character", FALSE);
    check L174() else D52();
  L87():
    len1 = force? len;
    checkMissing(len1);
    nr2 = ld nr;
    check L88() else D23();
  L170():
    dr26 = tryDispatchBuiltin.1("[[", rval35);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L172() else L171(i98, c24, dr26);
  L171(i111, c32, rval37):
    i114 = ld i;
    check L173() else D51();
  L179():
    dx36 = getTryDispatchBuiltinValue(dr28);
    goto L42(i106, "AsIs", l9, "AsIs", dx36);
  L180():
    i124 = force? i123;
    __12 = ldf `[[` in base;
    r103 = dyn __12(l13, i124);
    goto L42(i120, r97, l12, r98, r103);
  L181():
    r104 = dyn oldClass__(dx37, NULL, r102);
    check L182() else D55();
  L192():
    r124 = dyn attr__(l18, NULL, "row.names", r123);
    check L193() else D62();
  D23():
    deopt 77 [i15, len1, nr2];
  D51():
    deopt 177 [i111, c32, rval37, i114];
  D52():
    deopt 183 [i113, c34, r94];
  D55():
    deopt 195 [i122, r101, l15, r104];
  D62():
    deopt 228 [r123, r124];
  L88():
    nr3 = force? nr2;
    checkMissing(nr3);
    r37 = `==`(len1, nr3);
    c7 = `as.logical`(r37);
    if c7 then L89() else L14();
  L172():
    dx34 = getTryDispatchBuiltinValue(dr26);
    goto L40(i98, c24, dx34);
  L173():
    i115 = force? i114;
    __11 = ldf `[[` in base;
    r93 = dyn __11(rval37, i115);
    goto L40(i111, c32, r93);
  L174():
    goto L39(i113, c34, r94);
  L182():
    c40 = `is.object`(l15);
    if c40 then L183() else L184(i122, r101, l15);
  L193():
    st y = r124;
    y = ld y;
    check L194() else D63();
  D63():
    deopt 230 [y];
  L14():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L92() else L93();
  L43(i128, r108, dx39):
    st rval = dx39;
    goto L44(i128);
  L89():
    goto L13(i15);
  L183():
    dr30 = tryDispatchBuiltin.0("[[<-", l15, r104);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L185() else L184(i122, r101, dr30);
  L184(i126, r106, l17):
    i129 = ld i;
    check L186() else D56();
  L194():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D56():
    deopt 196 [i126, r106, l17, r104, i129];
  L16(i26, r40):
    r46 = `==`(r40, 2);
    c9 = `as.logical`(r46);
    if c9 then L103() else L19();
  L92():
    sym6 = ldf dim;
    base6 = ldf dim in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L94() else L95();
  L93():
    r39 = dyn base5(<lang dim(`[[`(rval, i))>);
    goto L16(i15, r39);
  L185():
    dx38 = getTryDispatchBuiltinValue(dr30);
    goto L43(i122, r101, dx38);
  L186():
    i130 = force? i129;
    ____2 = ldf `[[<-` in base;
    r109 = dyn ____2(l17, r104, i130);
    goto L43(i126, r106, r109);
  L17(i29, r42):
    length1 = ldf length in base;
    r45 = dyn length1(r42);
    check L102() else D27();
  L19():
    len6 = ld len;
    check L122() else D35();
  L24(i57, r65):
    l5 = ld rval;
    c20 = `is.object`(l5);
    if c20 then L150() else L151(i57, r65, l5);
  L94():
    rval6 = ld rval;
    check L96() else D24();
  L95():
    r41 = dyn base6(<lang `[[`(rval, i)>);
    goto L17(i15, r41);
  L103():
    len2 = ld len;
    check L104() else D28();
  D24():
    deopt 88 [i15, rval6];
  D27():
    deopt 96 [i29, r45];
  D28():
    deopt 99 [i26, len2];
  D35():
    deopt 120 [i26, len6];
  L31(i87, dx31):
    st rval = dx31;
    goto L13(i87);
  L96():
    rval7 = force? rval6;
    checkMissing(rval7);
    c8 = `is.object`(rval7);
    if c8 then L97() else L98(i15, rval7);
  L102():
    goto L16(i29, r45);
  L104():
    len3 = force? len2;
    checkMissing(len3);
    nr4 = ld nr;
    check L105() else D29();
  L122():
    len7 = force? len6;
    checkMissing(len7);
    nr10 = ld nr;
    check L123() else D36();
  L150():
    dr22 = tryDispatchBuiltin.0("[[<-", l5, r65);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L152() else L151(i57, r65, dr22);
  L151(i85, r81, l7):
    i88 = ld i;
    check L153() else D46();
  D29():
    deopt 100 [i26, len3, nr4];
  D36():
    deopt 121 [i26, len7, nr10];
  D46():
    deopt 153 [i85, r81, l7, r65, i88];
  L18(i33, dx7):
    dim = ldf dim in base;
    r44 = dyn dim(dx7);
    check L101() else D26();
  L97():
    dr6 = tryDispatchBuiltin.1("[[", rval7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L99() else L98(i15, dr6);
  L98(i31, rval9):
    i34 = ld i;
    check L100() else D25();
  L105():
    nr5 = force? nr4;
    checkMissing(nr5);
    r47 = `<`(len3, nr5);
    c10 = `as.logical`(r47);
    if c10 then L106() else L20();
  L123():
    nr11 = force? nr10;
    checkMissing(nr11);
    r66 = `<`(len7, nr11);
    c15 = `as.logical`(r66);
    if c15 then L124() else L25();
  L152():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L31(i57, dx30);
  L153():
    i89 = force? i88;
    ____1 = ldf `[[<-` in base;
    r84 = dyn ____1(l7, r65, i89);
    goto L31(i85, r84);
  D25():
    deopt 90 [i31, rval9, i34];
  D26():
    deopt 94 [i33, r44];
  L20():
    rval18 = ld rval;
    check L110() else D32();
  L21(i44, r59):
    goto L24(i44, r59);
  L25():
    rval26 = ld rval;
    check L139() else D43();
  L99():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L18(i15, dx6);
  L100():
    i35 = force? i34;
    __2 = ldf `[[` in base;
    r43 = dyn __2(rval9, i35);
    goto L18(i31, r43);
  L101():
    goto L17(i33, r44);
  L106():
    rbind = ldf rbind;
    check L107() else D30();
  L124():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L125() else L126();
  D30():
    deopt 104 [i26];
  D32():
    deopt 108 [i26, rval18];
  D43():
    deopt 142 [i26, rval26];
  L26(i62, r68):
    goto L24(i62, r68);
  L107():
    p6 = prom<V +>{
      rval10 = ld rval;
      rval11 = force? rval10;
      checkMissing(rval11);
      c11 = `is.object`(rval11);
      if c11 then L1() else L2(rval11);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", rval11);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(rval13):
      i40 = ld i;
      i41 = force? i40;
      __3 = ldf `[[` in base;
      r48 = dyn __3(rval13, i41);
      goto L0(r48);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p10 = prom<V +>{
      matrix = ldf matrix;
      p7 = prom<V +>{
        nr6 = ld nr;
        nr7 = force? nr6;
        checkMissing(nr7);
        len4 = ld len;
        len5 = force? len4;
        checkMissing(len5);
        r50 = `-`(nr7, len5);
        return r50;
      };
      p9 = prom<V +>{
        ncol = ldf ncol;
        p8 = prom<V +>{
          rval14 = ld rval;
          rval15 = force? rval14;
          checkMissing(rval15);
          c12 = `is.object`(rval15);
          if c12 then L1() else L2(rval15);
        L0(dx11):
          return dx11;
        L1():
          dr10 = tryDispatchBuiltin.1("[[", rval15);
          dc5 = getTryDispatchBuiltinDispatched(dr10);
          if dc5 then L3() else L2(dr10);
        L2(rval17):
          i42 = ld i;
          i43 = force? i42;
          __4 = ldf `[[` in base;
          r52 = dyn __4(rval17, i43);
          goto L0(r52);
        L3():
          dx10 = getTryDispatchBuiltinValue(dr10);
          goto L0(dx10);
        };
        r54 = dyn ncol(p8);
        return r54;
      };
      r56 = dyn matrix(NA_LGL, p7, p9);
      return r56;
    };
    r58 = dyn rbind(p6, p10);
    check L108() else D31();
  L110():
    rval19 = force? rval18;
    checkMissing(rval19);
    c13 = `is.object`(rval19);
    if c13 then L111() else L112(i26, rval19);
  L125():
    rval22 = ld rval;
    check L127() else D37();
  L126():
    r67 = dyn base8(<lang `[[`(rval, i)>, <lang rep.int(NA_LGL, `-`(nr, len))>);
    goto L26(i26, r67);
  L139():
    rval27 = force? rval26;
    checkMissing(rval27);
    c18 = `is.object`(rval27);
    if c18 then L140() else L141(i26, rval27);
  D31():
    deopt 107 [i26, r58];
  D37():
    deopt 126 [i26, rval22];
  L22(i48, dx13):
    c14 = `is.object`(dx13);
    if c14 then L115() else L116(i48, dx13);
  L29(i75, dx23):
    c19 = `is.object`(dx23);
    if c19 then L144() else L145(i75, dx23);
  L108():
    goto L21(i26, r58);
  L111():
    dr12 = tryDispatchBuiltin.1("[[", rval19);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L113() else L112(i26, dr12);
  L112(i46, rval21):
    i49 = ld i;
    check L114() else D33();
  L127():
    rval23 = force? rval22;
    checkMissing(rval23);
    c16 = `is.object`(rval23);
    if c16 then L128() else L129(i26, rval23);
  L140():
    dr18 = tryDispatchBuiltin.1("[[", rval27);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L142() else L141(i26, dr18);
  L141(i73, rval29):
    i76 = ld i;
    check L143() else D44();
  D33():
    deopt 110 [i46, rval21, i49];
  D44():
    deopt 144 [i73, rval29, i76];
  L27(i66, dx21):
    sym9 = ldf `rep.int`;
    base9 = ldf `rep.int` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L132() else L133();
  L113():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L22(i26, dx12);
  L114():
    i50 = force? i49;
    __5 = ldf `[[` in base;
    r60 = dyn __5(rval21, i50);
    goto L22(i46, r60);
  L115():
    dr14 = tryDispatchBuiltin.1("[", dx13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L117() else L116(i48, dr14);
  L116(i52, dx15):
    sym7 = ldf seq_len;
    base7 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L118() else L119();
  L128():
    dr16 = tryDispatchBuiltin.1("[[", rval23);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L130() else L129(i26, dr16);
  L129(i64, rval25):
    i67 = ld i;
    check L131() else D38();
  L142():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L29(i26, dx22);
  L143():
    i77 = force? i76;
    __8 = ldf `[[` in base;
    r75 = dyn __8(rval29, i77);
    goto L29(i73, r75);
  L144():
    dr20 = tryDispatchBuiltin.1("[", dx23);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L146() else L145(i75, dr20);
  L145(i79, dx25):
    sym10 = ldf seq_len;
    base10 = ldf seq_len in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L147() else L148();
  D38():
    deopt 128 [i64, rval25, i67];
  L23(i56, r62):
    __6 = ldf `[` in base;
    r64 = dyn __6(dx13, r62, <missing>);
    goto L21(i56, r64);
  L28(i71, r71):
    c17 = ldf c in base;
    r74 = dyn c17(dx21, r71);
    check L137() else D42();
  L30(i83, dx29, r77):
    __9 = ldf `[` in base;
    r79 = dyn __9(dx29, r77);
    goto L24(i83, r79);
  L117():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L21(i48, dx16);
  L118():
    nr8 = ld nr;
    check L120() else D34();
  L119():
    r61 = dyn base7(<sym nr>);
    goto L23(i52, r61);
  L130():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L27(i26, dx20);
  L131():
    i68 = force? i67;
    __7 = ldf `[[` in base;
    r69 = dyn __7(rval25, i68);
    goto L27(i64, r69);
  L132():
    nr12 = ld nr;
    check L134() else D39();
  L133():
    r70 = dyn base9(NA_LGL, <lang `-`(nr, len)>);
    goto L28(i66, r70);
  L146():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L24(i75, dx26);
  L147():
    nr14 = ld nr;
    check L149() else D45();
  L148():
    r76 = dyn base10(<sym nr>);
    goto L30(i79, dx25, r76);
  D34():
    deopt 114 [i52, dx15, nr8];
  D39():
    deopt 134 [i66, nr12];
  D42():
    deopt 141 [i71, r74];
  D45():
    deopt 148 [i79, dx25, nr14];
  L120():
    nr9 = force? nr8;
    checkMissing(nr9);
    r63 = seq_len(nr9);
    goto L23(i52, r63);
  L134():
    nr13 = force? nr12;
    checkMissing(nr13);
    len8 = ld len;
    check L135() else D40();
  L137():
    goto L26(i71, r74);
  L149():
    nr15 = force? nr14;
    checkMissing(nr15);
    r78 = seq_len(nr15);
    goto L30(i79, dx25, r78);
  D40():
    deopt 135 [i66, nr13, len8];
  L135():
    len9 = force? len8;
    checkMissing(len9);
    r72 = `-`(nr13, len9);
    rep_int = ldf `rep.int` in base;
    r73 = dyn rep_int(NA_LGL, r72);
    check L136() else D41();
  D41():
    deopt 139 [i66, r73];
  L136():
    goto L28(i66, r73);
  }
}