fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1546639492;
    st polym = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1546639492(`...`, degree, coefs, raw) {
  (reg ddd:dots, reg degree:*, reg coefs:*, reg raw:*) -+> V { var `...`:dots?, var degree:*, reg degree_isMissing:L, reg degree_orDefault:*, var coefs:*, reg coefs_isMissing:L, reg coefs_orDefault:*, var raw:*, reg raw_isMissing:L, reg raw_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg ____:cls, reg coefs1:*, reg coefs2:V, reg p:p(V +), reg dots:*, reg dots1:V, reg p1:p(V +), reg r7:V, reg length:cls, reg r8:V, reg nd:*, reg nd1:V, reg r9:V, reg c:L, reg stop:cls, reg r10:V, reg do_call:cls, reg expand_grid:*, reg expand_grid1:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg degree1:*, reg degree2:V, reg r19:V, reg list1:cls, reg r20:V, reg nd2:*, reg nd3:V, reg rep_int:cls, reg r21:V, reg c1:cls, reg r22:V, reg p3:p(V +), reg r24:V, reg rowSums:cls, reg z:*, reg z1:V, reg p4:p(V +), reg r26:V, reg s:*, reg s1:V, reg r27:V, reg s2:*, reg s3:V, reg degree3:*, reg degree4:V, reg r28:V, reg r29:V, reg z2:*, reg z3:V, reg c2:L, reg z5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r30:V, reg s4:*, reg s5:V, reg c3:L, reg s7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg __1:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg coefs3:*, reg coefs4:V, reg c4:V, reg c5:L, reg poly:cls, reg dots2:*, reg dots3:V, reg c6:L, reg dots5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r34:V, reg p5:p(V +), reg degree5:*, reg degree6:V, reg p6:p(V +), reg raw1:*, reg raw2:V, reg p7:p(V +), reg raw3:*, reg raw4:V, reg c7:L, reg c9:V, reg nd4:*, reg nd5:V, reg r38:V, reg c10:L, reg c11:V, reg p8:p(V +), reg r40:V, reg nd6:*, reg nd7:V, reg r41:V, reg c13:L, reg aPoly:*, reg aPoly1:V, reg lengths:cls, reg dots6:*, reg dots7:V, reg p9:p(V +), reg r45:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg n:*, reg n1:V, reg n2:*, reg n3:V, reg c14:L, reg n6:V, reg n7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg n9:V, reg dx7:V, reg __3:cls, reg r48:V, reg r49:V, reg any:cls, reg r50:V, reg c15:L, reg stop1:cls, reg r51:V, reg cbind:cls, reg aPoly2:*, reg aPoly3:V, reg p10:p(V +), reg r54:V, reg c16:L, reg r56:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg z6:*, reg z7:V, reg c17:L, reg r59:V, reg r60:I, reg dr10:V, reg dc5:L, reg dx10:V, reg r64:I, reg dx11:V, reg __4:cls, reg r65:V, reg r66:V, reg __5:cls, reg r67:V, reg raw5:*, reg raw6:V, reg r68:V, reg c18:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r69:V, reg r70:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r71:V, reg r72:V, reg aPoly4:*, reg aPoly5:V, reg attr:cls, reg r73:V, reg list2:cls, reg r74:V, reg nd8:*, reg nd9:V, reg r76:V, reg s8:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c19:L, reg x:V, reg poly1:cls, reg dots8:*, reg dots9:V, reg c20:L, reg dots11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg i5:*, reg i6:V, reg __6:cls, reg r77:V, reg p11:p(V +), reg degree7:*, reg degree8:V, reg p12:p(V +), reg raw7:*, reg raw8:V, reg p13:p(V +), reg raw9:*, reg raw10:V, reg p14:p(V +), reg r82:V, reg res:*, reg res1:V, reg cbind1:cls, reg aPoly6:*, reg aPoly7:V, reg p15:p(V +), reg r84:V, reg c21:L, reg i8:I, reg res3:V, reg r86:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i10:I, reg res5:V, reg dx15:V, reg z10:*, reg z11:V, reg c22:L, reg i12:I, reg res7:V, reg r89:V, reg r90:I, reg z13:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i14:I, reg res9:V, reg r94:I, reg dx17:V, reg i15:*, reg i16:V, reg __7:cls, reg r95:V, reg r96:V, reg __8:cls, reg r97:V, reg r98:V, reg raw11:*, reg raw12:V, reg r99:V, reg c23:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r100:V, reg i21:I, reg r101:V, reg coefs5:*, reg coefs6:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r102:V, reg i24:I, reg r103:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r104:V, reg i27:I, reg r105:V, reg aPoly8:*, reg aPoly9:V, reg attr1:cls, reg r106:V, reg list3:cls, reg r107:V, reg c24:cls, reg r108:V, reg i28:I, reg apply:cls, reg z14:*, reg z15:V, reg p16:p(V +), reg r111:cls, reg p17:p(V +), reg r113:V, reg l1:*, reg colnames__:cls, reg r114:V, reg structure:cls, reg res10:*, reg res11:V, reg p18:p(V +), reg as_vector:cls, reg s9:*, reg s10:V, reg p19:p(V +), reg r117:V, reg p20:p(V +), reg raw13:*, reg raw14:V, reg r119:V, reg c25:L, reg coefs7:*, reg coefs8:V, reg p21:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r121:V, reg r122:V, reg c26:cls, reg r123:V, reg p22:p(V +), reg r125:V, reg as_data_frame:cls, reg dots12:*, reg dots13:V, reg p23:p(V +), reg r127:V, reg nd10:*, reg nd11:V, reg ncol:cls, reg newdata:*, reg newdata1:V, reg p24:p(V +), reg r129:V, reg r130:V, reg c27:L, reg stop2:cls, reg deparse1:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r131:V, reg r132:V, reg substitute:cls, reg r133:V, reg p25:p(V +), reg r135:V, reg p26:p(V +), reg r137:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r139:V, reg r140:V, reg nd12:*, reg nd13:V, reg r141:I, reg s11:V, reg l2:I, reg i29:I, reg i30:I, reg i31:I, reg c28:L, reg x1:V, reg res12:*, reg res13:V, reg cbind2:cls, reg poly2:cls, reg newdata2:*, reg newdata3:V, reg c29:L, reg newdata5:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg i34:*, reg i35:V, reg __9:cls, reg r142:V, reg p27:p(V +), reg degree9:*, reg degree10:V, reg p28:p(V +), reg coefs9:*, reg coefs10:V, reg c30:L, reg coefs12:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg i36:*, reg i37:V, reg __10:cls, reg r145:V, reg p29:p(V +), reg r147:V, reg p30:p(V +), reg r149:V, reg c31:L, reg i39:I, reg res15:V, reg r151:V, reg dr22:V, reg dc11:L, reg dx22:V, reg i41:I, reg res17:V, reg dx23:V, reg z16:*, reg z17:V, reg c32:L, reg i43:I, reg res19:V, reg r154:V, reg r155:I, reg z19:V, reg dr24:V, reg dc12:L, reg dx24:V, reg i45:I, reg res21:V, reg r159:I, reg dx25:V, reg i46:*, reg i47:V, reg __11:cls, reg r160:V, reg r161:V, reg __12:cls, reg r162:V, reg r163:V, reg apply1:cls, reg z20:*, reg z21:V, reg p31:p(V +), reg r165:cls, reg p32:p(V +), reg r167:V, reg l3:*, reg colnames__1:cls, reg r168:V, reg res22:*, reg res23:V |
    mkenv;
    st `...` = ddd;
    degree_isMissing = missing.0(degree);
    if degree_isMissing then L0(1.0) else L0(degree);
  L0(degree_orDefault):
    st degree = degree_orDefault;
    coefs_isMissing = missing.0(coefs);
    if coefs_isMissing then L1(NULL) else L1(coefs);
  L1(coefs_orDefault):
    st coefs = coefs_orDefault;
    raw_isMissing = missing.0(raw);
    if raw_isMissing then L2(FALSE) else L2(raw);
  L2(raw_orDefault):
    st raw = raw_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L3(r1):
    st dots = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L39():
    list = ldf list;
    check L41() else D0();
  L40():
    r = dyn base(<sym ...>);
    goto L3(r);
  D0():
    deopt 2 [];
  L4(r4):
    st nd = r4;
    nd = ld nd;
    check L48() else D5();
  L41():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L42() else D1();
  L43():
    ____ = ldf `%||%`;
    check L45() else D2();
  L44():
    r3 = dyn base1(<lang `%||%`(coefs, dots)>);
    goto L4(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 9 [];
  D5():
    deopt 16 [nd];
  L42():
    goto L3(r2);
  L45():
    p = prom<V +>{
      coefs1 = ld coefs;
      coefs2 = force? coefs1;
      checkMissing(coefs2);
      return coefs2;
    };
    p1 = prom<V +>{
      dots = ld dots;
      dots1 = force? dots;
      checkMissing(dots1);
      return dots1;
    };
    r7 = dyn ____(p, p1);
    check L46() else D3();
  L48():
    nd1 = force? nd;
    checkMissing(nd1);
    r9 = `==`(nd1, 0.0);
    c = `as.logical`(r9);
    if c then L49() else L5();
  D3():
    deopt 12 [r7];
  L5():
    goto L6();
  L6():
    do_call = ldf `do.call`;
    check L53() else D8();
  L46():
    length = ldf length in base;
    r8 = dyn length(r7);
    check L47() else D4();
  L49():
    stop = ldf stop;
    check L50() else D6();
  D4():
    deopt 14 [r8];
  D6():
    deopt 21 [];
  D8():
    deopt 27 [];
  L47():
    goto L4(r8);
  L50():
    r10 = dyn stop("must supply one or more vectors");
    check L51() else D7();
  L53():
    p2 = prom<V +>{
      expand_grid = ld `expand.grid`;
      expand_grid1 = force? expand_grid;
      checkMissing(expand_grid1);
      return expand_grid1;
    };
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r14):
      return r14;
    L3():
      sym3 = ldf `rep.int`;
      base3 = ldf `rep.int` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L4():
      r13 = dyn base2[, `KEEP.OUT.ATTRS`](<lang rep.int(list(`:`(0.0, degree)), nd)>, FALSE);
      goto L0(r13);
    L1(r16):
      c1 = ldf c in base;
      r22 = dyn c1(r16, FALSE);
      goto L0(r22);
    L5():
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L7() else L8();
    L6():
      r15 = dyn base3(<lang list(`:`(0.0, degree))>, <sym nd>);
      goto L1(r15);
    L2(r18):
      nd2 = ld nd;
      nd3 = force? nd2;
      checkMissing(nd3);
      rep_int = ldf `rep.int` in base;
      r21 = dyn rep_int(r18, nd3);
      goto L1(r21);
    L7():
      degree1 = ld degree;
      degree2 = force? degree1;
      checkMissing(degree2);
      r19 = `:`(0.0, degree2);
      list1 = ldf list in base;
      r20 = dyn list1(r19);
      goto L2(r20);
    L8():
      r17 = dyn base4(<lang `:`(0.0, degree)>);
      goto L2(r17);
    };
    r24 = dyn do_call(p2, p3);
    check L54() else D9();
  D7():
    deopt 23 [r10];
  D9():
    deopt 30 [r24];
  L51():
    goto L6();
  L54():
    st z = r24;
    rowSums = ldf rowSums;
    check L55() else D10();
  D10():
    deopt 33 [];
  L55():
    p4 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r26 = dyn rowSums(p4);
    check L56() else D11();
  D11():
    deopt 35 [r26];
  L56():
    st s = r26;
    s = ld s;
    check L57() else D12();
  D12():
    deopt 38 [0.0, s];
  L57():
    s1 = force? s;
    checkMissing(s1);
    r27 = `<`(0.0, s1);
    s2 = ld s;
    check L58() else D13();
  D13():
    deopt 40 [r27, s2];
  L58():
    s3 = force? s2;
    checkMissing(s3);
    degree3 = ld degree;
    check L59() else D14();
  D14():
    deopt 41 [r27, s3, degree3];
  L59():
    degree4 = force? degree3;
    checkMissing(degree4);
    r28 = `<=`(s3, degree4);
    r29 = `&&`(r27, r28);
    st ind = r29;
    z2 = ld z;
    check L60() else D15();
  D15():
    deopt 46 [z2];
  L60():
    z3 = force? z2;
    checkMissing(z3);
    c2 = `is.object`(z3);
    if c2 then L61() else L62(z3);
  L7(dx1):
    st z = dx1;
    s4 = ld s;
    check L65() else D17();
  L61():
    dr = tryDispatchBuiltin.1("[", z3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L63() else L62(dr);
  L62(z5):
    ind = ld ind;
    check L64() else D16();
  D16():
    deopt 48 [z5, ind];
  D17():
    deopt 56 [s4];
  L63():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L64():
    ind1 = force? ind;
    __ = ldf `[` in base;
    r30 = dyn __(z3, ind1, <missing>, FALSE);
    goto L7(r30);
  L65():
    s5 = force? s4;
    checkMissing(s5);
    c3 = `is.object`(s5);
    if c3 then L66() else L67(s5);
  L8(dx3):
    st s = dx3;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L70() else L71();
  L66():
    dr2 = tryDispatchBuiltin.1("[", s5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L68() else L67(dr2);
  L67(s7):
    ind2 = ld ind;
    check L69() else D18();
  D18():
    deopt 58 [s7, ind2];
  L9(r33):
    c5 = `as.logical`(r33);
    if c5 then L73() else L10();
  L68():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L69():
    ind3 = force? ind2;
    __1 = ldf `[` in base;
    r31 = dyn __1(s7, ind3);
    goto L8(r31);
  L70():
    coefs3 = ld coefs;
    check L72() else D19();
  L71():
    r32 = dyn base5(<sym coefs>);
    goto L9(r32);
  D19():
    deopt 63 [coefs3];
  L10():
    as_data_frame = ldf `as.data.frame`;
    check L150() else D58();
  L72():
    coefs4 = force? coefs3;
    checkMissing(coefs4);
    c4 = `==`(coefs4, NULL);
    goto L9(c4);
  L73():
    poly = ldf poly;
    check L74() else D20();
  D20():
    deopt 67 [];
  D58():
    deopt 227 [];
  L74():
    p5 = prom<V +>{
      dots2 = ld dots;
      dots3 = force? dots2;
      checkMissing(dots3);
      c6 = `is.object`(dots3);
      if c6 then L1() else L2(dots3);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", dots3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(dots5):
      __2 = ldf `[[` in base;
      r34 = dyn __2(dots5, 1);
      goto L0(r34);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      degree5 = ld degree;
      degree6 = force? degree5;
      checkMissing(degree6);
      return degree6;
    };
    p7 = prom<V +>{
      raw1 = ld raw;
      raw2 = force? raw1;
      checkMissing(raw2);
      return raw2;
    };
    p8 = prom<V +>{
      raw3 = ld raw;
      raw4 = force? raw3;
      checkMissing(raw4);
      c7 = `as.logical`(raw4);
      if c7 then L1() else L0(c7);
    L0(c9):
      return c9;
    L1():
      nd4 = ld nd;
      nd5 = force? nd4;
      checkMissing(nd5);
      r38 = `>`(nd5, 1.0);
      c10 = `as.logical`(r38);
      c11 = `&&`(c7, c10);
      goto L0(c11);
    };
    r40 = dyn poly[, , raw, simple](p5, p6, p7, p8);
    check L75() else D21();
  L150():
    p23 = prom<V +>{
      dots12 = ld dots;
      dots13 = force? dots12;
      checkMissing(dots13);
      return dots13;
    };
    r127 = dyn as_data_frame(p23);
    check L151() else D59();
  D21():
    deopt 74 [r40];
  D59():
    deopt 229 [r127];
  L75():
    st aPoly = r40;
    nd6 = ld nd;
    check L76() else D22();
  L151():
    st newdata = r127;
    nd10 = ld nd;
    check L152() else D60();
  D22():
    deopt 76 [nd6];
  D60():
    deopt 231 [nd10];
  L76():
    nd7 = force? nd6;
    checkMissing(nd7);
    r41 = `==`(nd7, 1.0);
    c13 = `as.logical`(r41);
    if c13 then L77() else L11();
  L152():
    nd11 = force? nd10;
    checkMissing(nd11);
    ncol = ldf ncol;
    check L153() else D61();
  D61():
    deopt 233 [nd11];
  L11():
    lengths = ldf lengths;
    check L81() else D24();
  L77():
    aPoly = ld aPoly;
    check L78() else D23();
  L153():
    p24 = prom<V +>{
      newdata = ld newdata;
      newdata1 = force? newdata;
      checkMissing(newdata1);
      return newdata1;
    };
    r129 = dyn ncol(p24);
    check L154() else D62();
  D23():
    deopt 80 [aPoly];
  D24():
    deopt 86 [];
  D62():
    deopt 235 [nd11, r129];
  L78():
    aPoly1 = force? aPoly;
    checkMissing(aPoly1);
    popenv;
    return aPoly1;
  L81():
    p9 = prom<V +>{
      dots6 = ld dots;
      dots7 = force? dots6;
      checkMissing(dots7);
      return dots7;
    };
    r45 = dyn lengths(p9);
    check L82() else D25();
  L154():
    r130 = `!=`(nd11, r129);
    c27 = `as.logical`(r130);
    if c27 then L155() else L32();
  D25():
    deopt 88 [r45];
  L32():
    goto L33();
  L33():
    st res = 1.0;
    sym14 = ldf seq_len;
    base14 = ldf seq_len in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L159() else L160();
  L82():
    st n = r45;
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L83() else L84();
  L155():
    stop2 = ldf stop;
    check L156() else D63();
  D63():
    deopt 238 [];
  L13(r47):
    c15 = `as.logical`(r47);
    if c15 then L91() else L15();
  L34(r140):
    s11 = toForSeq(r140);
    l2 = length(s11);
    i29 = 0;
    goto L35(i29);
  L83():
    n = ld n;
    check L85() else D26();
  L84():
    r46 = dyn base6(<lang `!=`(n, `[`(n, 1))>);
    goto L13(r46);
  L156():
    p26 = prom<V +>{
      deparse1 = ldf deparse1;
      p25 = prom<V +>{
        sym13 = ldf substitute;
        base13 = ldf substitute in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L1() else L2();
      L0(r132):
        return r132;
      L1():
        substitute = ldf substitute in base;
        r133 = dyn substitute(<sym ...>);
        goto L0(r133);
      L2():
        r131 = dyn base13(<sym ...>);
        goto L0(r131);
      };
      r135 = dyn deparse1(p25);
      return r135;
    };
    r137 = dyn stop2("wrong number of columns in new data: ", p26);
    check L157() else D64();
  L159():
    nd12 = ld nd;
    check L161() else D65();
  L160():
    r139 = dyn base14(<sym nd>);
    goto L34(r139);
  D26():
    deopt 92 [n];
  D64():
    deopt 241 [r137];
  D65():
    deopt 248 [nd12];
  L15():
    goto L16();
  L16():
    cbind = ldf cbind;
    check L95() else D31();
  L35(i30):
    i31 = `+`.1(i30, 1);
    c28 = `<`.1(l2, i31);
    if c28 then L162() else L38();
  L85():
    n1 = force? n;
    checkMissing(n1);
    n2 = ld n;
    check L86() else D27();
  L91():
    stop1 = ldf stop;
    check L92() else D29();
  L157():
    goto L33();
  L161():
    nd13 = force? nd12;
    checkMissing(nd13);
    r141 = seq_len(nd13);
    goto L34(r141);
  D27():
    deopt 93 [n1, n2];
  D29():
    deopt 102 [];
  D31():
    deopt 108 [];
  L38():
    x1 = `[[`(s11, i31, NULL, TRUE);
    st i = x1;
    res12 = ld res;
    check L163() else D66();
  L86():
    n3 = force? n2;
    checkMissing(n3);
    c14 = `is.object`(n3);
    if c14 then L87() else L88(n1, n3);
  L92():
    r51 = dyn stop1("arguments must have the same length");
    check L93() else D30();
  L95():
    p10 = prom<V +>{
      aPoly2 = ld aPoly;
      aPoly3 = force? aPoly2;
      checkMissing(aPoly3);
      return aPoly3;
    };
    r54 = dyn cbind(1.0, p10);
    check L96() else D32();
  L162():
    apply1 = ldf apply;
    check L174() else D71();
  D30():
    deopt 104 [r51];
  D32():
    deopt 111 [r54];
  D66():
    deopt 251 [i31, res12];
  D71():
    deopt 277 [];
  L14(n9, dx7):
    r49 = `!=`(n9, dx7);
    any = ldf any in base;
    r50 = dyn any(r49);
    check L90() else D28();
  L87():
    dr6 = tryDispatchBuiltin.1("[", n3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L89() else L88(n1, dr6);
  L88(n6, n7):
    __3 = ldf `[` in base;
    r48 = dyn __3(n7, 1);
    goto L14(n6, r48);
  L93():
    goto L16();
  L96():
    c16 = `is.object`(r54);
    if c16 then L97() else L98(r54);
  L163():
    res13 = force? res12;
    checkMissing(res13);
    cbind2 = ldf cbind;
    check L164() else D67();
  L174():
    p31 = prom<V +>{
      z20 = ld z;
      z21 = force? z20;
      checkMissing(z21);
      return z21;
    };
    p32 = prom<V +>{
      r165 = clos inner2501545716;
      return r165;
    };
    r167 = dyn apply1(p31, 1, p32);
    check L175() else D72();
  D28():
    deopt 100 [r50];
  D67():
    deopt 253 [i31, res13];
  D72():
    deopt 281 [r167];
  L17(dx9):
    st res = dx9;
    raw5 = ld raw;
    check L104() else D34();
  L89():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L14(n1, dx6);
  L90():
    goto L13(r50);
  L97():
    dr8 = tryDispatchBuiltin.1("[", r54);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L99() else L98(dr8);
  L98(r56):
    z6 = ld z;
    check L100() else D33();
  L164():
    p30 = prom<V +>{
      poly2 = ldf poly;
      p27 = prom<V +>{
        newdata2 = ld newdata;
        newdata3 = force? newdata2;
        checkMissing(newdata3);
        c29 = `is.object`(newdata3);
        if c29 then L1() else L2(newdata3);
      L0(dx19):
        return dx19;
      L1():
        dr18 = tryDispatchBuiltin.1("[[", newdata3);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2(dr18);
      L2(newdata5):
        i34 = ld i;
        i35 = force? i34;
        __9 = ldf `[[` in base;
        r142 = dyn __9(newdata5, i35);
        goto L0(r142);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx18);
      };
      p28 = prom<V +>{
        degree9 = ld degree;
        degree10 = force? degree9;
        checkMissing(degree10);
        return degree10;
      };
      p29 = prom<V +>{
        coefs9 = ld coefs;
        coefs10 = force? coefs9;
        checkMissing(coefs10);
        c30 = `is.object`(coefs10);
        if c30 then L1() else L2(coefs10);
      L0(dx21):
        return dx21;
      L1():
        dr20 = tryDispatchBuiltin.1("[[", coefs10);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L3() else L2(dr20);
      L2(coefs12):
        i36 = ld i;
        i37 = force? i36;
        __10 = ldf `[[` in base;
        r145 = dyn __10(coefs12, i37);
        goto L0(r145);
      L3():
        dx20 = getTryDispatchBuiltinValue(dr20);
        goto L0(dx20);
      };
      r147 = dyn poly2[, degree, coefs, simple](p27, p28, p29, TRUE);
      return r147;
    };
    r149 = dyn cbind2(1.0, p30);
    check L165() else D68();
  L175():
    l3 = ld res;
    colnames__1 = ldf `colnames<-`;
    check L176() else D73();
  D33():
    deopt 114 [r56, 1, z6];
  D34():
    deopt 126 [raw5];
  D68():
    deopt 256 [i31, res13, r149];
  D73():
    deopt 283 [r167, l3, r167];
  L99():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L17(dx8);
  L100():
    z7 = force? z6;
    checkMissing(z7);
    c17 = `is.object`(z7);
    if c17 then L101() else L102(r56, 1);
  L104():
    raw6 = force? raw5;
    checkMissing(raw6);
    r68 = `!`(raw6);
    c18 = `as.logical`(r68);
    if c18 then L105() else L19();
  L165():
    c31 = `is.object`(r149);
    if c31 then L166() else L167(i31, res13, r149);
  L176():
    r168 = dyn colnames__1(l3, NULL, r167);
    check L177() else D74();
  D74():
    deopt 285 [r167, r168];
  L18(r64, dx11):
    r66 = `+`(r64, dx11);
    __5 = ldf `[` in base;
    r67 = dyn __5(r54, <missing>, r66, FALSE);
    goto L17(r67);
  L19():
    goto L22();
  L22():
    nd8 = ld nd;
    check L114() else D38();
  L36(i41, res17, dx23):
    r163 = `*`(res17, dx23);
    st res = r163;
    goto L35(i41);
  L101():
    dr10 = tryDispatchBuiltin.1("[", z7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L103() else L102(r56, 1);
  L102(r59, r60):
    __4 = ldf `[` in base;
    r65 = dyn __4(z7, <missing>, 1.0);
    goto L18(r60, r65);
  L105():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L106() else L107();
  L166():
    dr22 = tryDispatchBuiltin.1("[", r149);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L168() else L167(i31, res13, dr22);
  L167(i39, res15, r151):
    z16 = ld z;
    check L169() else D69();
  L177():
    st res = r168;
    res22 = ld res;
    check L178() else D75();
  D38():
    deopt 144 [2.0, nd8];
  D69():
    deopt 259 [i39, res15, r151, 1, z16];
  D75():
    deopt 287 [res22];
  L20(r70):
    st coefs = r70;
    goto L22();
  L103():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L18(1, dx10);
  L106():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L108() else L109();
  L107():
    r69 = dyn base7(<lang attr(aPoly, "coefs")>);
    goto L20(r69);
  L114():
    nd9 = force? nd8;
    checkMissing(nd9);
    r76 = `:`(2.0, nd9);
    s8 = toForSeq(r76);
    l = length(s8);
    i = 0;
    goto L23(i);
  L168():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L36(i31, res13, dx22);
  L169():
    z17 = force? z16;
    checkMissing(z17);
    c32 = `is.object`(z17);
    if c32 then L170() else L171(i39, res15, r151, 1, z17);
  L178():
    res23 = force? res22;
    checkMissing(res23);
    popenv;
    return res23;
  L21(r72):
    list2 = ldf list in base;
    r74 = dyn list2(r72);
    check L112() else D37();
  L23(i1):
    i2 = `+`.1(i1, 1);
    c19 = `<`.1(l, i2);
    if c19 then L115() else L31();
  L37(i45, res21, r159, dx25):
    r161 = `+`(r159, dx25);
    __12 = ldf `[` in base;
    r162 = dyn __12(r149, <missing>, r161, FALSE);
    goto L36(i45, res21, r162);
  L108():
    aPoly4 = ld aPoly;
    check L110() else D35();
  L109():
    r71 = dyn base8(<sym aPoly>, "coefs");
    goto L21(r71);
  L170():
    dr24 = tryDispatchBuiltin.1("[", z17);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L172() else L171(i39, res15, r151, 1, dr24);
  L171(i43, res19, r154, r155, z19):
    i46 = ld i;
    check L173() else D70();
  D35():
    deopt 133 [aPoly4];
  D37():
    deopt 139 [r74];
  D70():
    deopt 262 [i43, res19, r154, r155, z19, i46];
  L31():
    x = `[[`(s8, i2, NULL, TRUE);
    st i = x;
    poly1 = ldf poly;
    check L116() else D39();
  L110():
    aPoly5 = force? aPoly4;
    checkMissing(aPoly5);
    attr = ldf attr in base;
    r73 = dyn attr(aPoly5, "coefs");
    check L111() else D36();
  L112():
    goto L20(r74);
  L115():
    apply = ldf apply;
    check L143() else D52();
  L172():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L37(i39, res15, 1, dx24);
  L173():
    i47 = force? i46;
    __11 = ldf `[` in base;
    r160 = dyn __11(z17, <missing>, i47);
    goto L37(i43, res19, r155, r160);
  D36():
    deopt 137 [r73];
  D39():
    deopt 148 [i2];
  D52():
    deopt 206 [];
  L111():
    goto L21(r73);
  L116():
    p11 = prom<V +>{
      dots8 = ld dots;
      dots9 = force? dots8;
      checkMissing(dots9);
      c20 = `is.object`(dots9);
      if c20 then L1() else L2(dots9);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", dots9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(dots11):
      i5 = ld i;
      i6 = force? i5;
      __6 = ldf `[[` in base;
      r77 = dyn __6(dots11, i6);
      goto L0(r77);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p12 = prom<V +>{
      degree7 = ld degree;
      degree8 = force? degree7;
      checkMissing(degree8);
      return degree8;
    };
    p13 = prom<V +>{
      raw7 = ld raw;
      raw8 = force? raw7;
      checkMissing(raw8);
      return raw8;
    };
    p14 = prom<V +>{
      raw9 = ld raw;
      raw10 = force? raw9;
      checkMissing(raw10);
      return raw10;
    };
    r82 = dyn poly1[, , raw, simple](p11, p12, p13, p14);
    check L117() else D40();
  L143():
    p16 = prom<V +>{
      z14 = ld z;
      z15 = force? z14;
      checkMissing(z15);
      return z15;
    };
    p17 = prom<V +>{
      r111 = clos inner2501545716;
      return r111;
    };
    r113 = dyn apply(p16, 1, p17);
    check L144() else D53();
  D40():
    deopt 155 [i2, r82];
  D53():
    deopt 210 [r113];
  L117():
    st aPoly = r82;
    res = ld res;
    check L118() else D41();
  L144():
    l1 = ld res;
    colnames__ = ldf `colnames<-`;
    check L145() else D54();
  D41():
    deopt 157 [i2, res];
  D54():
    deopt 212 [r113, l1, r113];
  L118():
    res1 = force? res;
    checkMissing(res1);
    cbind1 = ldf cbind;
    check L119() else D42();
  L145():
    r114 = dyn colnames__(l1, NULL, r113);
    check L146() else D55();
  D42():
    deopt 159 [i2, res1];
  D55():
    deopt 214 [r113, r114];
  L119():
    p15 = prom<V +>{
      aPoly6 = ld aPoly;
      aPoly7 = force? aPoly6;
      checkMissing(aPoly7);
      return aPoly7;
    };
    r84 = dyn cbind1(1.0, p15);
    check L120() else D43();
  L146():
    st res = r114;
    structure = ldf structure;
    check L147() else D56();
  D43():
    deopt 162 [i2, res1, r84];
  D56():
    deopt 217 [];
  L120():
    c21 = `is.object`(r84);
    if c21 then L121() else L122(i2, res1, r84);
  L147():
    p18 = prom<V +>{
      res10 = ld res;
      res11 = force? res10;
      checkMissing(res11);
      return res11;
    };
    p20 = prom<V +>{
      as_vector = ldf `as.vector`;
      p19 = prom<V +>{
        s9 = ld s;
        s10 = force? s9;
        checkMissing(s10);
        return s10;
      };
      r117 = dyn as_vector(p19);
      return r117;
    };
    p21 = prom<V +>{
      raw13 = ld raw;
      raw14 = force? raw13;
      checkMissing(raw14);
      r119 = `!`(raw14);
      c25 = `as.logical`(r119);
      if c25 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      coefs7 = ld coefs;
      coefs8 = force? coefs7;
      checkMissing(coefs8);
      return coefs8;
    };
    p22 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r122):
      return r122;
    L1():
      c26 = ldf c in base;
      r123 = dyn c26("poly", "matrix");
      goto L0(r123);
    L2():
      r121 = dyn base12("poly", "matrix");
      goto L0(r121);
    };
    r125 = dyn structure[, degree, coefs, class](p18, p20, p21, p22);
    check L148() else D57();
  D57():
    deopt 225 [r125];
  L24(i10, res5, dx15):
    r98 = `*`(res5, dx15);
    st res = r98;
    raw11 = ld raw;
    check L129() else D46();
  L121():
    dr14 = tryDispatchBuiltin.1("[", r84);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L123() else L122(i2, res1, dr14);
  L122(i8, res3, r86):
    z10 = ld z;
    check L124() else D44();
  L148():
    popenv;
    return r125;
  D44():
    deopt 165 [i8, res3, r86, 1, z10];
  D46():
    deopt 179 [i10, raw11];
  L123():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L24(i2, res1, dx14);
  L124():
    z11 = force? z10;
    checkMissing(z11);
    c22 = `is.object`(z11);
    if c22 then L125() else L126(i8, res3, r86, 1, z11);
  L129():
    raw12 = force? raw11;
    checkMissing(raw12);
    r99 = `!`(raw12);
    c23 = `as.logical`(r99);
    if c23 then L130() else L26();
  L25(i14, res9, r94, dx17):
    r96 = `+`(r94, dx17);
    __8 = ldf `[` in base;
    r97 = dyn __8(r84, <missing>, r96, FALSE);
    goto L24(i14, res9, r97);
  L26():
    goto L30(i10);
  L30(i28):
    goto L23(i28);
  L125():
    dr16 = tryDispatchBuiltin.1("[", z11);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L127() else L126(i8, res3, r86, 1, dr16);
  L126(i12, res7, r89, r90, z13):
    i15 = ld i;
    check L128() else D45();
  L130():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L131() else L132();
  D45():
    deopt 168 [i12, res7, r89, r90, z13, i15];
  L27(i21, r101):
    st coefs = r101;
    goto L30(i21);
  L127():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L25(i8, res3, 1, dx16);
  L128():
    i16 = force? i15;
    __7 = ldf `[` in base;
    r95 = dyn __7(z11, <missing>, i16);
    goto L25(i12, res7, r90, r95);
  L131():
    coefs5 = ld coefs;
    check L133() else D47();
  L132():
    r100 = dyn base9(<sym coefs>, <lang list(attr(aPoly, "coefs"))>);
    goto L27(i10, r100);
  D47():
    deopt 184 [i10, coefs5];
  L133():
    coefs6 = force? coefs5;
    checkMissing(coefs6);
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L134() else L135();
  L28(i24, r103):
    c24 = ldf c in base;
    r108 = dyn c24(coefs6, r103);
    check L141() else D51();
  L134():
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L136() else L137();
  L135():
    r102 = dyn base10(<lang attr(aPoly, "coefs")>);
    goto L28(i10, r102);
  D51():
    deopt 198 [i24, r108];
  L29(i27, r105):
    list3 = ldf list in base;
    r107 = dyn list3(r105);
    check L140() else D50();
  L136():
    aPoly8 = ld aPoly;
    check L138() else D48();
  L137():
    r104 = dyn base11(<sym aPoly>, "coefs");
    goto L29(i10, r104);
  L141():
    goto L27(i24, r108);
  D48():
    deopt 190 [i10, aPoly8];
  D50():
    deopt 196 [i27, r107];
  L138():
    aPoly9 = force? aPoly8;
    checkMissing(aPoly9);
    attr1 = ldf attr in base;
    r106 = dyn attr1(aPoly9, "coefs");
    check L139() else D49();
  L140():
    goto L28(i27, r107);
  D49():
    deopt 194 [i10, r106];
  L139():
    goto L29(i10, r106);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st x = x;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn paste[, collapse](p, ".");
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}