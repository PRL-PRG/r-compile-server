fun main() {
  () -+> V { reg r:cls, reg r1:V, reg filter:cls, reg x:*, reg x1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg rep:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg filter1:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg rep1:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg filter2:cls, reg x4:*, reg x5:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg rep2:cls, reg r17:V, reg p5:p(V +), reg r19:V, reg filter3:cls, reg presidents:*, reg presidents1:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg rep3:cls, reg r23:V, reg p7:p(V +), reg r25:V |
    mkenv;
    r = clos inner3843503476;
    st filter = r;
    r1 = `:`(1.0, 100.0);
    st x = r1;
    filter = ldf filter;
    check L0() else D0();
  D0():
    deopt 9 [];
  L0():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      rep = ldf rep in base;
      r5 = dyn rep(1.0, 3.0);
      goto L0(r5);
    L2():
      r3 = dyn base(1.0, 3.0);
      goto L0(r3);
    };
    r7 = dyn filter(p, p1);
    check L1() else D1();
  D1():
    deopt 12 [r7];
  L1():
    filter1 = ldf filter;
    check L2() else D2();
  D2():
    deopt 14 [];
  L2():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p3 = prom<V +>{
      sym1 = ldf rep;
      base1 = ldf rep in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      rep1 = ldf rep in base;
      r11 = dyn rep1(1.0, 3.0);
      goto L0(r11);
    L2():
      r9 = dyn base1(1.0, 3.0);
      goto L0(r9);
    };
    r13 = dyn filter1[, , sides](p2, p3, 1.0);
    check L3() else D3();
  D3():
    deopt 19 [r13];
  L3():
    filter2 = ldf filter;
    check L4() else D4();
  D4():
    deopt 21 [];
  L4():
    p4 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p5 = prom<V +>{
      sym2 = ldf rep;
      base2 = ldf rep in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      rep2 = ldf rep in base;
      r17 = dyn rep2(1.0, 3.0);
      goto L0(r17);
    L2():
      r15 = dyn base2(1.0, 3.0);
      goto L0(r15);
    };
    r19 = dyn filter2[, , sides, circular](p4, p5, 1.0, TRUE);
    check L5() else D5();
  D5():
    deopt 28 [r19];
  L5():
    filter3 = ldf filter;
    check L6() else D6();
  D6():
    deopt 30 [];
  L6():
    p6 = prom<V +>{
      presidents = ld presidents;
      presidents1 = force? presidents;
      checkMissing(presidents1);
      return presidents1;
    };
    p7 = prom<V +>{
      sym3 = ldf rep;
      base3 = ldf rep in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      rep3 = ldf rep in base;
      r23 = dyn rep3(1.0, 3.0);
      goto L0(r23);
    L2():
      r21 = dyn base3(1.0, 3.0);
      goto L0(r21);
    };
    r25 = dyn filter3(p6, p7);
    check L7() else D7();
  D7():
    deopt 33 [r25];
  L7():
    popenv;
    return r25;
  }
}
fun inner3843503476(x, filter, method, sides, circular, init) {
  (reg x:*, reg filter:*, reg method:*, reg sides:*, reg circular:*, reg init:*) -+> V { var x:*, var filter:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var sides:*, reg sides_isMissing:L, reg sides_orDefault:*, var circular:*, reg circular_isMissing:L, reg circular_orDefault:*, var init:*, reg init_isMissing:L, reg init_orDefault:*, reg match_arg:cls, reg method1:*, reg method2:V, reg p1:p(V +), reg r5:V, reg as_ts:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r7:V, reg l:*, reg storage_mode__:cls, reg r8:V, reg tsp:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg NROW:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r14:V, reg as_integer:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg n:*, reg n1:V, reg is_na:cls, reg r18:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg r19:V, reg p5:p(V +), reg r21:V, reg NCOL:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg filter1:*, reg filter2:V, reg as_double:cls, reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg filter3:*, reg filter4:V, reg length:cls, reg r32:V, reg as_integer1:cls, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg nfilt:*, reg nfilt1:V, reg is_na1:cls, reg r36:V, reg c2:L, reg stop1:cls, reg gettextf1:cls, reg r37:V, reg p7:p(V +), reg r39:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg filter5:*, reg filter6:V, reg anyNA:cls, reg r43:V, reg c3:L, reg stop2:cls, reg r44:V, reg method3:*, reg method4:V, reg r46:V, reg c4:L, reg nfilt2:*, reg nfilt3:V, reg n2:*, reg n3:V, reg r47:V, reg c5:L, reg stop3:cls, reg r48:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r50:V, reg r51:V, reg sides1:*, reg sides2:V, reg as_integer2:cls, reg r52:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg r54:V, reg sides3:*, reg sides4:V, reg is_na2:cls, reg r55:V, reg c6:L, reg c7:V, reg sides5:*, reg sides6:V, reg r56:V, reg c9:L, reg c12:L, reg c13:V, reg sides7:*, reg sides8:V, reg r57:V, reg c14:L, reg c15:V, reg c18:L, reg c19:V, reg c21:L, reg stop4:cls, reg r58:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r60:V, reg r61:V, reg circular1:*, reg circular2:V, reg as_logical:cls, reg r62:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r63:V, reg r64:V, reg circular3:*, reg circular4:V, reg is_na3:cls, reg r65:V, reg c22:L, reg stop5:cls, reg r66:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r68:V, reg r69:V, reg x9:*, reg x10:V, reg is_matrix:cls, reg r70:V, reg c23:L, reg matrix:cls, reg n4:*, reg n5:V, reg p8:p(V +), reg nser:*, reg nser1:V, reg p9:p(V +), reg r73:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r74:V, reg r75:V, reg nser2:*, reg nser3:V, reg r76:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c24:L, reg x11:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r77:V, reg i7:I, reg r78:V, reg C_cfilter:*, reg C_cfilter1:V, reg x12:*, reg x13:V, reg c25:L, reg i9:I, reg C_cfilter3:V, reg x15:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg C_cfilter5:V, reg dx1:V, reg i12:*, reg i13:V, reg __:cls, reg r79:V, reg filter7:*, reg filter8:V, reg sides9:*, reg sides10:V, reg circular5:*, reg circular6:V, reg vargs:dots, reg r80:V, reg l2:*, reg c26:L, reg i15:I, reg r82:V, reg l4:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i17:I, reg dx3:V, reg i18:*, reg i19:V, reg ___:cls, reg r85:V, reg i20:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r86:V, reg r87:V, reg C_cfilter6:*, reg C_cfilter7:V, reg x16:*, reg x17:V, reg filter9:*, reg filter10:V, reg sides11:*, reg sides12:V, reg circular7:*, reg circular8:V, reg vargs1:dots, reg r88:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r89:V, reg r90:V, reg missing:cls, reg r91:V, reg c27:L, reg matrix1:cls, reg nfilt4:*, reg nfilt5:V, reg p10:p(V +), reg nser4:*, reg nser5:V, reg p11:p(V +), reg r94:V, reg NROW1:cls, reg init1:*, reg init2:V, reg p12:p(V +), reg r97:V, reg ni:*, reg ni1:V, reg nfilt6:*, reg nfilt7:V, reg r98:V, reg c28:L, reg stop6:cls, reg r99:V, reg NCOL1:cls, reg init3:*, reg init4:V, reg p13:p(V +), reg r102:V, reg r103:V, reg c29:L, reg c31:V, reg NCOL2:cls, reg init5:*, reg init6:V, reg p14:p(V +), reg r105:V, reg nser6:*, reg nser7:V, reg r106:V, reg c32:L, reg c33:V, reg c35:L, reg stop7:cls, reg sprintf:cls, reg ngettext:cls, reg nser8:*, reg nser9:V, reg p15:p(V +), reg r108:V, reg p16:p(V +), reg nser10:*, reg nser11:V, reg p17:p(V +), reg r111:V, reg p18:p(V +), reg r113:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r115:V, reg r116:V, reg init7:*, reg init8:V, reg is_matrix1:cls, reg r117:V, reg r118:V, reg c36:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r119:V, reg r120:V, reg nfilt8:*, reg nfilt9:V, reg nser12:*, reg nser13:V, reg c37:cls, reg r121:V, reg l5:*, reg dim__:cls, reg r122:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r123:V, reg r124:V, reg nfilt10:*, reg nfilt11:V, reg r125:I, reg sym20:cls, reg base20:cls, reg guard20:L, reg r126:V, reg r127:V, reg x18:*, reg x19:V, reg is_matrix2:cls, reg r128:V, reg c38:L, reg matrix2:cls, reg n6:*, reg n7:V, reg p19:p(V +), reg nser14:*, reg nser15:V, reg p20:p(V +), reg r131:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r132:V, reg r133:V, reg nser16:*, reg nser17:V, reg r134:I, reg s1:V, reg l6:I, reg i22:I, reg i23:I, reg i24:I, reg c39:L, reg x20:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r135:V, reg i29:I, reg r136:V, reg C_rfilter:*, reg C_rfilter1:V, reg x21:*, reg x22:V, reg c40:L, reg i31:I, reg C_rfilter3:V, reg x24:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i33:I, reg C_rfilter5:V, reg dx5:V, reg i34:*, reg i35:V, reg __1:cls, reg r137:V, reg filter11:*, reg filter12:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r138:V, reg i38:I, reg C_rfilter8:V, reg dx8:V, reg filter15:V, reg r139:V, reg rev:cls, reg init9:*, reg init10:V, reg c41:L, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg i39:*, reg i40:V, reg __2:cls, reg r140:V, reg p21:p(V +), reg r142:V, reg double:cls, reg n8:*, reg n9:V, reg p22:p(V +), reg r144:V, reg c42:cls, reg r145:V, reg vargs2:dots, reg r146:V, reg c43:L, reg i42:I, reg r148:V, reg dr8:V, reg dc4:L, reg dx11:V, reg i44:I, reg dx12:V, reg ind:*, reg ind1:V, reg r149:V, reg __3:cls, reg r150:V, reg l7:*, reg c44:L, reg i46:I, reg dx14:V, reg l9:*, reg dr10:V, reg dc5:L, reg dx16:V, reg i48:I, reg dx18:V, reg i49:*, reg i50:V, reg ___1:cls, reg r151:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r152:V, reg r153:V, reg C_rfilter9:*, reg C_rfilter10:V, reg x25:*, reg x26:V, reg filter16:*, reg filter17:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r154:V, reg C_rfilter13:V, reg x29:V, reg filter20:V, reg r155:V, reg rev1:cls, reg init13:*, reg init14:V, reg c45:L, reg dr12:V, reg dc6:L, reg dx19:V, reg dx20:V, reg __4:cls, reg r156:V, reg p23:p(V +), reg r158:V, reg double1:cls, reg n10:*, reg n11:V, reg p24:p(V +), reg r160:V, reg c46:cls, reg r161:V, reg vargs3:dots, reg r162:V, reg c47:L, reg r164:V, reg dr14:V, reg dc7:L, reg dx21:V, reg dx22:V, reg ind2:*, reg ind3:V, reg r165:V, reg __5:cls, reg r166:V, reg xtsp:*, reg xtsp1:V, reg l10:*, reg tsp__:cls, reg r167:V, reg nser18:*, reg nser19:V, reg r168:V, reg c48:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r169:V, reg r170:V, reg c49:cls, reg r171:V, reg r172:V, reg l11:*, reg class__:cls, reg r173:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    st filter = filter;
    method_isMissing = missing.0(method);
    if method_isMissing then L0() else L1(method);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("convolution", "recursive");
      goto L0(r2);
    L2():
      r = dyn base("convolution", "recursive");
      goto L0(r);
    };
    goto L1(p);
  L1(method_orDefault):
    st method = method_orDefault;
    sides_isMissing = missing.0(sides);
    if sides_isMissing then L2(2) else L2(sides);
  L2(sides_orDefault):
    st sides = sides_orDefault;
    circular_isMissing = missing.0(circular);
    if circular_isMissing then L3(FALSE) else L3(circular);
  L3(circular_orDefault):
    st circular = circular_orDefault;
    init_isMissing = missing.0(init);
    if init_isMissing then L4(NULL) else L4(init);
  L4(init_orDefault):
    st init = init_orDefault;
    match_arg = ldf `match.arg`;
    check L70() else D0();
  D0():
    deopt 1 [];
  L70():
    p1 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r5 = dyn match_arg(p1);
    check L71() else D1();
  D1():
    deopt 3 [r5];
  L71():
    st method = r5;
    as_ts = ldf `as.ts`;
    check L72() else D2();
  D2():
    deopt 6 [];
  L72():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r7 = dyn as_ts(p2);
    check L73() else D3();
  D3():
    deopt 8 [r7];
  L73():
    st x = r7;
    l = ld x;
    storage_mode__ = ldf `storage.mode<-`;
    check L74() else D4();
  D4():
    deopt 13 ["double", l, "double"];
  L74():
    r8 = dyn storage_mode__(l, NULL, "double");
    check L75() else D5();
  D5():
    deopt 15 ["double", r8];
  L75():
    st x = r8;
    tsp = ldf tsp;
    check L76() else D6();
  D6():
    deopt 18 [];
  L76():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r10 = dyn tsp(p3);
    check L77() else D7();
  D7():
    deopt 20 [r10];
  L77():
    st xtsp = r10;
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L78() else L79();
  L5(r12):
    st n = r12;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L83() else L84();
  L78():
    NROW = ldf NROW;
    check L80() else D8();
  L79():
    r11 = dyn base1(<lang NROW(x)>);
    goto L5(r11);
  D8():
    deopt 25 [];
  L6(r17):
    c1 = `as.logical`(r17);
    if c1 then L87() else L7();
  L80():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r14 = dyn NROW(p4);
    check L81() else D9();
  L83():
    n = ld n;
    check L85() else D11();
  L84():
    r16 = dyn base2(<sym n>);
    goto L6(r16);
  D9():
    deopt 27 [r14];
  D11():
    deopt 33 [n];
  L7():
    goto L8();
  L8():
    NCOL = ldf NCOL;
    check L91() else D15();
  L81():
    as_integer = ldf `as.integer` in base;
    r15 = dyn as_integer(r14);
    check L82() else D10();
  L85():
    n1 = force? n;
    checkMissing(n1);
    is_na = ldf `is.na` in base;
    r18 = dyn is_na(n1);
    check L86() else D12();
  L87():
    stop = ldf stop;
    check L88() else D13();
  D10():
    deopt 29 [r15];
  D12():
    deopt 36 [r18];
  D13():
    deopt 38 [];
  D15():
    deopt 46 [];
  L82():
    goto L5(r15);
  L86():
    goto L6(r18);
  L88():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      r19 = dyn gettextf("invalid value of %s", "NROW(x)");
      return r19;
    };
    r21 = dyn stop[, domain](p5, NA_LGL);
    check L89() else D14();
  L91():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r24 = dyn NCOL(p6);
    check L92() else D16();
  D14():
    deopt 42 [r21];
  D16():
    deopt 48 [r24];
  L89():
    goto L8();
  L92():
    st nser = r24;
    sym3 = ldf `as.double`;
    base3 = ldf `as.double` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L93() else L94();
  L9(r26):
    st filter = r26;
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L97() else L98();
  L93():
    filter1 = ld filter;
    check L95() else D17();
  L94():
    r25 = dyn base3(<sym filter>);
    goto L9(r25);
  D17():
    deopt 52 [filter1];
  L10(r29):
    st nfilt = r29;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L104() else L105();
  L95():
    filter2 = force? filter1;
    checkMissing(filter2);
    as_double = ldf `as.double` in base;
    r27 = dyn as_double(filter2);
    check L96() else D18();
  L97():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L99() else L100();
  L98():
    r28 = dyn base4(<lang length(filter)>);
    goto L10(r28);
  D18():
    deopt 55 [r27];
  L11(r31):
    as_integer1 = ldf `as.integer` in base;
    r33 = dyn as_integer1(r31);
    check L103() else D21();
  L12(r35):
    c2 = `as.logical`(r35);
    if c2 then L108() else L13();
  L96():
    goto L9(r27);
  L99():
    filter3 = ld filter;
    check L101() else D19();
  L100():
    r30 = dyn base5(<sym filter>);
    goto L11(r30);
  L104():
    nfilt = ld nfilt;
    check L106() else D22();
  L105():
    r34 = dyn base6(<sym nfilt>);
    goto L12(r34);
  D19():
    deopt 61 [filter3];
  D21():
    deopt 66 [r33];
  D22():
    deopt 70 [nfilt];
  L13():
    goto L14();
  L14():
    sym7 = ldf anyNA;
    base7 = ldf anyNA in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L112() else L113();
  L101():
    filter4 = force? filter3;
    checkMissing(filter4);
    length = ldf length in base;
    r32 = dyn length(filter4);
    check L102() else D20();
  L103():
    goto L10(r33);
  L106():
    nfilt1 = force? nfilt;
    checkMissing(nfilt1);
    is_na1 = ldf `is.na` in base;
    r36 = dyn is_na1(nfilt1);
    check L107() else D23();
  L108():
    stop1 = ldf stop;
    check L109() else D24();
  D20():
    deopt 64 [r32];
  D23():
    deopt 73 [r36];
  D24():
    deopt 75 [];
  L15(r42):
    c3 = `as.logical`(r42);
    if c3 then L116() else L16();
  L102():
    goto L11(r32);
  L107():
    goto L12(r36);
  L109():
    p7 = prom<V +>{
      gettextf1 = ldf gettextf;
      r37 = dyn gettextf1("invalid value of %s", "length(filter)");
      return r37;
    };
    r39 = dyn stop1[, domain](p7, NA_LGL);
    check L110() else D25();
  L112():
    filter5 = ld filter;
    check L114() else D26();
  L113():
    r41 = dyn base7(<sym filter>);
    goto L15(r41);
  D25():
    deopt 79 [r39];
  D26():
    deopt 84 [filter5];
  L16():
    goto L17();
  L17():
    method3 = ld method;
    check L120() else D30();
  L110():
    goto L14();
  L114():
    filter6 = force? filter5;
    checkMissing(filter6);
    anyNA = ldf anyNA in base;
    r43 = dyn anyNA(filter6);
    check L115() else D27();
  L116():
    stop2 = ldf stop;
    check L117() else D28();
  D27():
    deopt 87 [r43];
  D28():
    deopt 89 [];
  D30():
    deopt 94 [method3];
  L115():
    goto L15(r43);
  L117():
    r44 = dyn stop2("missing values in 'filter'");
    check L118() else D29();
  L120():
    method4 = force? method3;
    checkMissing(method4);
    r46 = `==`(method4, "convolution");
    c4 = `as.logical`(r46);
    if c4 then L121() else L18();
  D29():
    deopt 91 [r44];
  L18():
    sym16 = ldf missing;
    base16 = ldf missing in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L193() else L194();
  L41():
    xtsp = ld xtsp;
    check L286() else D114();
  L118():
    goto L17();
  L121():
    nfilt2 = ld nfilt;
    check L122() else D31();
  D31():
    deopt 98 [nfilt2];
  D114():
    deopt 353 [xtsp];
  L42(r90):
    c27 = `as.logical`(r90);
    if c27 then L195() else L43();
  L122():
    nfilt3 = force? nfilt2;
    checkMissing(nfilt3);
    n2 = ld n;
    check L123() else D32();
  L193():
    missing = ldf missing in base;
    r91 = dyn missing(<sym init>);
    goto L42(r91);
  L194():
    r89 = dyn base16(<sym init>);
    goto L42(r89);
  L286():
    xtsp1 = force? xtsp;
    checkMissing(xtsp1);
    l10 = ld y;
    tsp__ = ldf `tsp<-`;
    check L287() else D115();
  D32():
    deopt 99 [nfilt3, n2];
  D115():
    deopt 356 [xtsp1, l10, xtsp1];
  L43():
    NROW1 = ldf NROW;
    check L199() else D68();
  L44():
    sym19 = ldf seq_len;
    base19 = ldf seq_len in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L231() else L232();
  L123():
    n3 = force? n2;
    checkMissing(n3);
    r47 = `>`(nfilt3, n3);
    c5 = `as.logical`(r47);
    if c5 then L124() else L19();
  L195():
    matrix1 = ldf matrix;
    check L196() else D66();
  L287():
    r167 = dyn tsp__(l10, NULL, xtsp1);
    check L288() else D116();
  D66():
    deopt 209 [];
  D68():
    deopt 216 [];
  D116():
    deopt 358 [xtsp1, r167];
  L19():
    goto L20();
  L20():
    sym8 = ldf `as.integer`;
    base8 = ldf `as.integer` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L128() else L129();
  L53(r124):
    st ind = r124;
    sym20 = ldf `is.matrix`;
    base20 = ldf `is.matrix` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L234() else L235();
  L124():
    stop3 = ldf stop;
    check L125() else D33();
  L196():
    p10 = prom<V +>{
      nfilt4 = ld nfilt;
      nfilt5 = force? nfilt4;
      checkMissing(nfilt5);
      return nfilt5;
    };
    p11 = prom<V +>{
      nser4 = ld nser;
      nser5 = force? nser4;
      checkMissing(nser5);
      return nser5;
    };
    r94 = dyn matrix1(0.0, p10, p11);
    check L197() else D67();
  L199():
    p12 = prom<V +>{
      init1 = ld init;
      init2 = force? init1;
      checkMissing(init2);
      return init2;
    };
    r97 = dyn NROW1(p12);
    check L200() else D69();
  L231():
    nfilt10 = ld nfilt;
    check L233() else D88();
  L232():
    r123 = dyn base19(<sym nfilt>);
    goto L53(r123);
  L288():
    st y = r167;
    nser18 = ld nser;
    check L289() else D117();
  D33():
    deopt 103 [];
  D67():
    deopt 213 [r94];
  D69():
    deopt 218 [r97];
  D88():
    deopt 274 [nfilt10];
  D117():
    deopt 360 [nser18];
  L21(r51):
    st sides = r51;
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L132() else L133();
  L54(r127):
    c38 = `as.logical`(r127);
    if c38 then L238() else L55();
  L125():
    r48 = dyn stop3("'filter' is longer than time series");
    check L126() else D34();
  L128():
    sides1 = ld sides;
    check L130() else D35();
  L129():
    r50 = dyn base8(<sym sides>);
    goto L21(r50);
  L197():
    st init = r94;
    goto L44();
  L200():
    st ni = r97;
    ni = ld ni;
    check L201() else D70();
  L233():
    nfilt11 = force? nfilt10;
    checkMissing(nfilt11);
    r125 = seq_len(nfilt11);
    goto L53(r125);
  L234():
    x18 = ld x;
    check L236() else D89();
  L235():
    r126 = dyn base20(<sym x>);
    goto L54(r126);
  L289():
    nser19 = force? nser18;
    checkMissing(nser19);
    r168 = `>`(nser19, 1);
    c48 = `as.logical`(r168);
    if c48 then L290() else L67();
  D34():
    deopt 105 [r48];
  D35():
    deopt 110 [sides1];
  D70():
    deopt 220 [ni];
  D89():
    deopt 280 [x18];
  L22(r54):
    c6 = `as.logical`(r54);
    if c6 then L23(c6) else L136();
  L55():
    sym24 = ldf `.Call`;
    base24 = ldf `.Call` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L270() else L271();
  L67():
    goto L69("ts");
  L69(r172):
    l11 = ld y;
    class__ = ldf `class<-`;
    check L295() else D119();
  L126():
    goto L20();
  L130():
    sides2 = force? sides1;
    checkMissing(sides2);
    as_integer2 = ldf `as.integer` in base;
    r52 = dyn as_integer2(sides2);
    check L131() else D36();
  L132():
    sides3 = ld sides;
    check L134() else D37();
  L133():
    r53 = dyn base9(<sym sides>);
    goto L22(r53);
  L201():
    ni1 = force? ni;
    checkMissing(ni1);
    nfilt6 = ld nfilt;
    check L202() else D71();
  L236():
    x19 = force? x18;
    checkMissing(x19);
    is_matrix2 = ldf `is.matrix` in base;
    r128 = dyn is_matrix2(x19);
    check L237() else D90();
  L238():
    matrix2 = ldf matrix;
    check L239() else D91();
  L290():
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L291() else L292();
  D36():
    deopt 113 [r52];
  D37():
    deopt 117 [sides3];
  D71():
    deopt 221 [ni1, nfilt6];
  D90():
    deopt 283 [r128];
  D91():
    deopt 285 [];
  D119():
    deopt 373 [r172, l11, r172];
  L23(c7):
    c21 = `as.logical`(c7);
    if c21 then L142() else L25();
  L64(r153):
    c47 = `is.object`(r153);
    if c47 then L282() else L283(r153);
  L68(r170):
    goto L69(r170);
  L131():
    goto L21(r52);
  L134():
    sides4 = force? sides3;
    checkMissing(sides4);
    is_na2 = ldf `is.na` in base;
    r55 = dyn is_na2(sides4);
    check L135() else D38();
  L136():
    sides5 = ld sides;
    check L137() else D39();
  L202():
    nfilt7 = force? nfilt6;
    checkMissing(nfilt7);
    r98 = `!=`(ni1, nfilt7);
    c28 = `as.logical`(r98);
    if c28 then L203() else L45();
  L237():
    goto L54(r128);
  L239():
    p19 = prom<V +>{
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      return n7;
    };
    p20 = prom<V +>{
      nser14 = ld nser;
      nser15 = force? nser14;
      checkMissing(nser15);
      return nser15;
    };
    r131 = dyn matrix2(NA_LGL, p19, p20);
    check L240() else D92();
  L270():
    C_rfilter9 = ld C_rfilter;
    check L272() else D105();
  L271():
    r152 = dyn base24(<sym C_rfilter>, <sym x>, <sym filter>, <lang c(rev(`[`(init, , 1)), double(n))>);
    goto L64(r152);
  L291():
    c49 = ldf c in base;
    r171 = dyn c49("mts", "ts");
    check L293() else D118();
  L292():
    r169 = dyn base26("mts", "ts");
    goto L68(r169);
  L295():
    r173 = dyn class__(l11, NULL, r172);
    check L296() else D120();
  D38():
    deopt 120 [r55];
  D39():
    deopt 121 [c6, sides5];
  D92():
    deopt 289 [r131];
  D105():
    deopt 332 [C_rfilter9];
  D118():
    deopt 369 [r171];
  D120():
    deopt 375 [r172, r173];
  L25():
    goto L26();
  L26():
    sym10 = ldf `as.logical`;
    base10 = ldf `as.logical` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L146() else L147();
  L45():
    goto L46();
  L46():
    NCOL1 = ldf NCOL;
    check L207() else D74();
  L66(dx22):
    st y = dx22;
    goto L41();
  L135():
    goto L22(r55);
  L137():
    sides6 = force? sides5;
    checkMissing(sides6);
    r56 = `!=`(sides6, 1);
    c9 = `as.logical`(r56);
    if c9 then L138() else L24(c6, c9);
  L142():
    stop4 = ldf stop;
    check L143() else D41();
  L203():
    stop6 = ldf stop;
    check L204() else D72();
  L240():
    st y = r131;
    sym21 = ldf seq_len;
    base21 = ldf seq_len in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L241() else L242();
  L272():
    C_rfilter10 = force? C_rfilter9;
    checkMissing(C_rfilter10);
    x25 = ld x;
    check L273() else D106();
  L282():
    dr14 = tryDispatchBuiltin.1("[", r153);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L284() else L283(dr14);
  L283(r164):
    ind2 = ld ind;
    check L285() else D113();
  L293():
    goto L68(r171);
  L296():
    st y = r173;
    y = ld y;
    check L297() else D121();
  D41():
    deopt 132 [];
  D72():
    deopt 225 [];
  D74():
    deopt 231 [];
  D106():
    deopt 333 [C_rfilter10, x25];
  D113():
    deopt 348 [r164, ind2];
  D121():
    deopt 377 [y];
  L24(c12, c13):
    c18 = `as.logical`(c13);
    c19 = `||`(c12, c18);
    goto L23(c19);
  L27(r61):
    st circular = r61;
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L150() else L151();
  L56(r133):
    s1 = toForSeq(r133);
    l6 = length(s1);
    i22 = 0;
    goto L57(i22);
  L138():
    sides7 = ld sides;
    check L139() else D40();
  L143():
    r58 = dyn stop4("argument 'sides' must be 1 or 2");
    check L144() else D42();
  L146():
    circular1 = ld circular;
    check L148() else D43();
  L147():
    r60 = dyn base10(<sym circular>);
    goto L27(r60);
  L204():
    r99 = dyn stop6("length of 'init' must equal length of 'filter'");
    check L205() else D73();
  L207():
    p13 = prom<V +>{
      init3 = ld init;
      init4 = force? init3;
      checkMissing(init4);
      return init4;
    };
    r102 = dyn NCOL1(p13);
    check L208() else D75();
  L241():
    nser16 = ld nser;
    check L243() else D93();
  L242():
    r132 = dyn base21(<sym nser>);
    goto L56(r132);
  L273():
    x26 = force? x25;
    checkMissing(x26);
    filter16 = ld filter;
    check L274() else D107();
  L284():
    dx21 = getTryDispatchBuiltinValue(dr14);
    goto L66(dx21);
  L285():
    ind3 = force? ind2;
    checkMissing(ind3);
    r165 = `-`(<missing>, ind3);
    __5 = ldf `[` in base;
    r166 = dyn __5(r164, r165);
    goto L66(r166);
  L297():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D40():
    deopt 125 [c6, c9, sides7];
  D42():
    deopt 134 [r58];
  D43():
    deopt 139 [circular1];
  D73():
    deopt 227 [r99];
  D75():
    deopt 233 [r102];
  D93():
    deopt 292 [nser16];
  D107():
    deopt 334 [C_rfilter10, x26, filter16];
  L28(r64):
    c22 = `as.logical`(r64);
    if c22 then L154() else L29();
  L57(i23):
    i24 = `+`.1(i23, 1);
    c39 = `<`.1(l6, i24);
    if c39 then L244() else L63();
  L139():
    sides8 = force? sides7;
    checkMissing(sides8);
    r57 = `!=`(sides8, 2);
    c14 = `as.logical`(r57);
    c15 = `&&`(c9, c14);
    goto L24(c6, c15);
  L144():
    goto L26();
  L148():
    circular2 = force? circular1;
    checkMissing(circular2);
    as_logical = ldf `as.logical` in base;
    r62 = dyn as_logical(circular2);
    check L149() else D44();
  L150():
    circular3 = ld circular;
    check L152() else D45();
  L151():
    r63 = dyn base11(<sym circular>);
    goto L28(r63);
  L205():
    goto L46();
  L208():
    r103 = `!=`(r102, 1);
    c29 = `as.logical`(r103);
    if c29 then L209() else L47(c29);
  L243():
    nser17 = force? nser16;
    checkMissing(nser17);
    r134 = seq_len(nser17);
    goto L56(r134);
  L274():
    filter17 = force? filter16;
    checkMissing(filter17);
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L275() else L276();
  D44():
    deopt 142 [r62];
  D45():
    deopt 146 [circular3];
  L29():
    goto L30();
  L30():
    sym12 = ldf `is.matrix`;
    base12 = ldf `is.matrix` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L158() else L159();
  L47(c31):
    c35 = `as.logical`(c31);
    if c35 then L214() else L48();
  L63():
    x20 = `[[`(s1, i24, NULL, TRUE);
    st i = x20;
    sym22 = ldf `.Call`;
    base22 = ldf `.Call` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L245() else L246();
  L65(C_rfilter13, x29, filter20, r155):
    vargs3 = dots[x29, filter20, r155];
    r162 = `.Call`(C_rfilter13, vargs3, <missing>);
    goto L64(r162);
  L149():
    goto L27(r62);
  L152():
    circular4 = force? circular3;
    checkMissing(circular4);
    is_na3 = ldf `is.na` in base;
    r65 = dyn is_na3(circular4);
    check L153() else D46();
  L154():
    stop5 = ldf stop;
    check L155() else D47();
  L209():
    NCOL2 = ldf NCOL;
    check L210() else D76();
  L244():
    goto L41();
  L275():
    rev1 = ldf rev;
    check L277() else D108();
  L276():
    r154 = dyn base25(<lang rev(`[`(init, , 1))>, <lang double(n)>);
    goto L65(C_rfilter10, x26, filter17, r154);
  D46():
    deopt 149 [r65];
  D47():
    deopt 151 [];
  D76():
    deopt 237 [c29];
  D108():
    deopt 338 [C_rfilter10, x26, filter17];
  L31(r69):
    c23 = `as.logical`(r69);
    if c23 then L162() else L32();
  L48():
    goto L49();
  L49():
    sym17 = ldf `is.matrix`;
    base17 = ldf `is.matrix` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L218() else L219();
  L58(i29, r136):
    c43 = `is.object`(r136);
    if c43 then L261() else L262(i29, r136);
  L153():
    goto L28(r65);
  L155():
    r66 = dyn stop5("'circular' must be logical and not NA");
    check L156() else D48();
  L158():
    x9 = ld x;
    check L160() else D49();
  L159():
    r68 = dyn base12(<sym x>);
    goto L31(r68);
  L210():
    p14 = prom<V +>{
      init5 = ld init;
      init6 = force? init5;
      checkMissing(init6);
      return init6;
    };
    r105 = dyn NCOL2(p14);
    check L211() else D77();
  L214():
    stop7 = ldf stop;
    check L215() else D79();
  L245():
    C_rfilter = ld C_rfilter;
    check L247() else D94();
  L246():
    r135 = dyn base22(<sym C_rfilter>, <lang `[`(x, , i)>, <sym filter>, <lang c(rev(`[`(init, , i)), double(n))>);
    goto L58(i24, r135);
  L277():
    p23 = prom<V +>{
      init13 = ld init;
      init14 = force? init13;
      checkMissing(init14);
      c45 = `is.object`(init14);
      if c45 then L1() else L2();
    L0(dx20):
      return dx20;
    L1():
      dr12 = tryDispatchBuiltin.1("[", init14);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r156 = dyn __4(init14, <missing>, 1);
      goto L0(r156);
    L3():
      dx19 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx19);
    };
    r158 = dyn rev1(p23);
    check L278() else D109();
  D48():
    deopt 153 [r66];
  D49():
    deopt 158 [x9];
  D77():
    deopt 239 [c29, r105];
  D79():
    deopt 244 [];
  D94():
    deopt 296 [i24, C_rfilter];
  D109():
    deopt 340 [C_rfilter10, x26, filter17, r158];
  L32():
    sym15 = ldf `.Call`;
    base15 = ldf `.Call` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L185() else L186();
  L39(i20):
    goto L41();
  L50(r116):
    r118 = `!`(r116);
    c36 = `as.logical`(r118);
    if c36 then L222() else L51();
  L61(i44, dx12):
    l7 = ld y;
    c44 = `is.object`(l7);
    if c44 then L265() else L266(i44, dx12, l7);
  L156():
    goto L30();
  L160():
    x10 = force? x9;
    checkMissing(x10);
    is_matrix = ldf `is.matrix` in base;
    r70 = dyn is_matrix(x10);
    check L161() else D50();
  L162():
    matrix = ldf matrix;
    check L163() else D51();
  L211():
    nser6 = ld nser;
    check L212() else D78();
  L215():
    p18 = prom<V +>{
      sprintf = ldf sprintf;
      p16 = prom<V +>{
        ngettext = ldf ngettext;
        p15 = prom<V +>{
          nser8 = ld nser;
          nser9 = force? nser8;
          checkMissing(nser9);
          return nser9;
        };
        r108 = dyn ngettext[, , , domain](p15, "'init' must have %d column", "'init' must have 1 or %d columns", "R-stats");
        return r108;
      };
      p17 = prom<V +>{
        nser10 = ld nser;
        nser11 = force? nser10;
        checkMissing(nser11);
        return nser11;
      };
      r111 = dyn sprintf(p16, p17);
      return r111;
    };
    r113 = dyn stop7[, domain](p18, NA_LGL);
    check L216() else D80();
  L218():
    init7 = ld init;
    check L220() else D81();
  L219():
    r115 = dyn base17(<sym init>);
    goto L50(r115);
  L247():
    C_rfilter1 = force? C_rfilter;
    checkMissing(C_rfilter1);
    x21 = ld x;
    check L248() else D95();
  L261():
    dr8 = tryDispatchBuiltin.1("[", r136);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L263() else L262(i29, dr8);
  L262(i42, r148):
    ind = ld ind;
    check L264() else D103();
  L278():
    double1 = ldf double;
    check L279() else D110();
  D50():
    deopt 161 [r70];
  D51():
    deopt 163 [];
  D78():
    deopt 239 [c29, r105, nser6];
  D80():
    deopt 248 [r113];
  D81():
    deopt 253 [init7];
  D95():
    deopt 297 [i24, C_rfilter1, x21];
  D103():
    deopt 317 [i42, r148, ind];
  D110():
    deopt 342 [C_rfilter10, x26, filter17];
  L40(r87):
    st y = r87;
    goto L39(r87);
  L51():
    goto L44();
  L62(i48, dx18):
    st y = dx18;
    goto L57(i48);
  L161():
    goto L31(r70);
  L163():
    p8 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    p9 = prom<V +>{
      nser = ld nser;
      nser1 = force? nser;
      checkMissing(nser1);
      return nser1;
    };
    r73 = dyn matrix(NA_LGL, p8, p9);
    check L164() else D52();
  L185():
    C_cfilter6 = ld C_cfilter;
    check L187() else D61();
  L186():
    r86 = dyn base15(<sym C_cfilter>, <sym x>, <sym filter>, <sym sides>, <sym circular>);
    goto L40(r86);
  L212():
    nser7 = force? nser6;
    checkMissing(nser7);
    r106 = `!=`(r105, nser7);
    c32 = `as.logical`(r106);
    c33 = `&&`(c29, c32);
    goto L47(c33);
  L216():
    goto L49();
  L220():
    init8 = force? init7;
    checkMissing(init8);
    is_matrix1 = ldf `is.matrix` in base;
    r117 = dyn is_matrix1(init8);
    check L221() else D82();
  L222():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L223() else L224();
  L248():
    x22 = force? x21;
    checkMissing(x22);
    c40 = `is.object`(x22);
    if c40 then L249() else L250(i24, C_rfilter1, x22);
  L263():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L61(i29, dx11);
  L264():
    ind1 = force? ind;
    checkMissing(ind1);
    r149 = `-`(<missing>, ind1);
    __3 = ldf `[` in base;
    r150 = dyn __3(r148, r149);
    goto L61(i42, r150);
  L265():
    dr10 = tryDispatchBuiltin.0("[<-", l7, dx12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L267() else L266(i44, dx12, dr10);
  L266(i46, dx14, l9):
    i49 = ld i;
    check L268() else D104();
  L279():
    p24 = prom<V +>{
      n10 = ld n;
      n11 = force? n10;
      checkMissing(n11);
      return n11;
    };
    r160 = dyn double1(p24);
    check L280() else D111();
  D52():
    deopt 167 [r73];
  D61():
    deopt 197 [C_cfilter6];
  D82():
    deopt 256 [r117];
  D104():
    deopt 323 [i46, dx14, l9, dx12, i49];
  D111():
    deopt 344 [C_rfilter10, x26, filter17, r160];
  L52(r120):
    l5 = ld init;
    dim__ = ldf `dim<-`;
    check L228() else D86();
  L59(i33, C_rfilter5, dx5):
    filter11 = ld filter;
    check L253() else D97();
  L164():
    st y = r73;
    sym13 = ldf seq_len;
    base13 = ldf seq_len in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L165() else L166();
  L187():
    C_cfilter7 = force? C_cfilter6;
    checkMissing(C_cfilter7);
    x16 = ld x;
    check L188() else D62();
  L221():
    goto L50(r117);
  L223():
    nfilt8 = ld nfilt;
    check L225() else D83();
  L224():
    r119 = dyn base18(<sym nfilt>, <sym nser>);
    goto L52(r119);
  L249():
    dr4 = tryDispatchBuiltin.1("[", x22);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L251() else L250(i24, C_rfilter1, dr4);
  L250(i31, C_rfilter3, x24):
    i34 = ld i;
    check L252() else D96();
  L267():
    dx16 = getTryDispatchBuiltinValue(dr10);
    goto L62(i44, dx16);
  L268():
    i50 = force? i49;
    ___1 = ldf `[<-` in base;
    r151 = dyn ___1(l7, <missing>, i50, dx12);
    goto L62(i46, r151);
  L280():
    c46 = ldf c in base;
    r161 = dyn c46(r158, r160);
    check L281() else D112();
  D62():
    deopt 198 [C_cfilter7, x16];
  D83():
    deopt 260 [nfilt8];
  D86():
    deopt 267 [r120, l5, r120];
  D96():
    deopt 300 [i31, C_rfilter3, x24, i34];
  D97():
    deopt 303 [i33, C_rfilter5, dx5, filter11];
  D112():
    deopt 346 [C_rfilter10, x26, filter17, r161];
  L33(r75):
    s = toForSeq(r75);
    l1 = length(s);
    i = 0;
    goto L34(i);
  L165():
    nser2 = ld nser;
    check L167() else D53();
  L166():
    r74 = dyn base13(<sym nser>);
    goto L33(r74);
  L188():
    x17 = force? x16;
    checkMissing(x17);
    filter9 = ld filter;
    check L189() else D63();
  L225():
    nfilt9 = force? nfilt8;
    checkMissing(nfilt9);
    nser12 = ld nser;
    check L226() else D84();
  L228():
    r122 = dyn dim__(l5, NULL, r120);
    check L229() else D87();
  L251():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L59(i24, C_rfilter1, dx4);
  L252():
    i35 = force? i34;
    __1 = ldf `[` in base;
    r137 = dyn __1(x22, <missing>, i35);
    goto L59(i31, C_rfilter3, r137);
  L253():
    filter12 = force? filter11;
    checkMissing(filter12);
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L254() else L255();
  L281():
    goto L65(C_rfilter10, x26, filter17, r161);
  D53():
    deopt 170 [nser2];
  D63():
    deopt 199 [C_cfilter7, x17, filter9];
  D84():
    deopt 262 [nser12];
  D87():
    deopt 269 [r120, r122];
  L34(i1):
    i2 = `+`.1(i1, 1);
    c24 = `<`.1(l1, i2);
    if c24 then L168() else L38();
  L60(i38, C_rfilter8, dx8, filter15, r139):
    vargs2 = dots[dx8, filter15, r139];
    r146 = `.Call`(C_rfilter8, vargs2, <missing>);
    goto L58(i38, r146);
  L167():
    nser3 = force? nser2;
    checkMissing(nser3);
    r76 = seq_len(nser3);
    goto L33(r76);
  L189():
    filter10 = force? filter9;
    checkMissing(filter10);
    sides11 = ld sides;
    check L190() else D64();
  L226():
    nser13 = force? nser12;
    checkMissing(nser13);
    c37 = ldf c in base;
    r121 = dyn c37(nfilt9, nser13);
    check L227() else D85();
  L229():
    st init = r122;
    goto L44();
  L254():
    rev = ldf rev;
    check L256() else D98();
  L255():
    r138 = dyn base23(<lang rev(`[`(init, , i))>, <lang double(n)>);
    goto L60(i33, C_rfilter5, dx5, filter12, r138);
  D64():
    deopt 200 [C_cfilter7, x17, filter10, sides11];
  D85():
    deopt 265 [r121];
  D98():
    deopt 307 [i33, C_rfilter5, dx5, filter12];
  L38():
    x11 = `[[`(s, i2, NULL, TRUE);
    st i = x11;
    sym14 = ldf `.Call`;
    base14 = ldf `.Call` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L169() else L170();
  L168():
    goto L39(i2);
  L190():
    sides12 = force? sides11;
    checkMissing(sides12);
    circular7 = ld circular;
    check L191() else D65();
  L227():
    goto L52(r121);
  L256():
    p21 = prom<V +>{
      init9 = ld init;
      init10 = force? init9;
      checkMissing(init10);
      c41 = `is.object`(init10);
      if c41 then L1() else L2();
    L0(dx10):
      return dx10;
    L1():
      dr6 = tryDispatchBuiltin.1("[", init10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      i39 = ld i;
      i40 = force? i39;
      __2 = ldf `[` in base;
      r140 = dyn __2(init10, <missing>, i40);
      goto L0(r140);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx9);
    };
    r142 = dyn rev(p21);
    check L257() else D99();
  D65():
    deopt 201 [C_cfilter7, x17, filter10, sides12, circular7];
  D99():
    deopt 309 [i33, C_rfilter5, dx5, filter12, r142];
  L35(i7, r78):
    l2 = ld y;
    c26 = `is.object`(l2);
    if c26 then L180() else L181(i7, r78, l2);
  L169():
    C_cfilter = ld C_cfilter;
    check L171() else D54();
  L170():
    r77 = dyn base14(<sym C_cfilter>, <lang `[`(x, , i)>, <sym filter>, <sym sides>, <sym circular>);
    goto L35(i2, r77);
  L191():
    circular8 = force? circular7;
    checkMissing(circular8);
    vargs1 = dots[x17, filter10, sides12, circular8];
    r88 = `.Call`(C_cfilter7, vargs1, <missing>);
    goto L40(r88);
  L257():
    double = ldf double;
    check L258() else D100();
  D54():
    deopt 174 [i2, C_cfilter];
  D100():
    deopt 311 [i33, C_rfilter5, dx5, filter12];
  L37(i17, dx3):
    st y = dx3;
    goto L34(i17);
  L171():
    C_cfilter1 = force? C_cfilter;
    checkMissing(C_cfilter1);
    x12 = ld x;
    check L172() else D55();
  L180():
    dr2 = tryDispatchBuiltin.0("[<-", l2, r78);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L182() else L181(i7, r78, dr2);
  L181(i15, r82, l4):
    i18 = ld i;
    check L183() else D60();
  L258():
    p22 = prom<V +>{
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      return n9;
    };
    r144 = dyn double(p22);
    check L259() else D101();
  D55():
    deopt 175 [i2, C_cfilter1, x12];
  D60():
    deopt 188 [i15, r82, l4, r78, i18];
  D101():
    deopt 313 [i33, C_rfilter5, dx5, filter12, r144];
  L172():
    x13 = force? x12;
    checkMissing(x13);
    c25 = `is.object`(x13);
    if c25 then L173() else L174(i2, C_cfilter1, x13);
  L182():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L37(i7, dx2);
  L183():
    i19 = force? i18;
    ___ = ldf `[<-` in base;
    r85 = dyn ___(l2, <missing>, i19, r78);
    goto L37(i15, r85);
  L259():
    c42 = ldf c in base;
    r145 = dyn c42(r142, r144);
    check L260() else D102();
  D102():
    deopt 315 [i33, C_rfilter5, dx5, filter12, r145];
  L36(i11, C_cfilter5, dx1):
    filter7 = ld filter;
    check L177() else D57();
  L173():
    dr = tryDispatchBuiltin.1("[", x13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L175() else L174(i2, C_cfilter1, dr);
  L174(i9, C_cfilter3, x15):
    i12 = ld i;
    check L176() else D56();
  L260():
    goto L60(i33, C_rfilter5, dx5, filter12, r145);
  D56():
    deopt 178 [i9, C_cfilter3, x15, i12];
  D57():
    deopt 181 [i11, C_cfilter5, dx1, filter7];
  L175():
    dx = getTryDispatchBuiltinValue(dr);
    goto L36(i2, C_cfilter1, dx);
  L176():
    i13 = force? i12;
    __ = ldf `[` in base;
    r79 = dyn __(x13, <missing>, i13);
    goto L36(i9, C_cfilter3, r79);
  L177():
    filter8 = force? filter7;
    checkMissing(filter8);
    sides9 = ld sides;
    check L178() else D58();
  D58():
    deopt 182 [i11, C_cfilter5, dx1, filter8, sides9];
  L178():
    sides10 = force? sides9;
    checkMissing(sides10);
    circular5 = ld circular;
    check L179() else D59();
  D59():
    deopt 183 [i11, C_cfilter5, dx1, filter8, sides10, circular5];
  L179():
    circular6 = force? circular5;
    checkMissing(circular6);
    vargs = dots[dx1, filter8, sides10, circular6];
    r80 = `.Call`(C_cfilter5, vargs, <missing>);
    goto L35(i11, r80);
  }
}