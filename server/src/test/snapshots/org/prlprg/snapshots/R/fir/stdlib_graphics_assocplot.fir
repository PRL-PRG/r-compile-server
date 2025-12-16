fun main() {
  () -+> V { reg r:cls, reg marginSums:cls, reg HairEyeColor:*, reg HairEyeColor1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg x:*, reg x1:V, reg assocplot:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg r8:V |
    mkenv;
    r = clos `inner-329566576`;
    st assocplot = r;
    marginSums = ldf marginSums;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      HairEyeColor = ld HairEyeColor;
      HairEyeColor1 = force? HairEyeColor;
      checkMissing(HairEyeColor1);
      return HairEyeColor1;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c(1.0, 2.0);
      goto L0(r4);
    L2():
      r2 = dyn base(1.0, 2.0);
      goto L0(r2);
    };
    r6 = dyn marginSums(p, p1);
    check L1() else D1();
  D1():
    deopt 7 [r6];
  L1():
    st x = r6;
    x = ld x;
    check L2() else D2();
  D2():
    deopt 9 [x];
  L2():
    x1 = force? x;
    checkMissing(x1);
    assocplot = ldf assocplot;
    check L3() else D3();
  D3():
    deopt 12 [];
  L3():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r8 = dyn assocplot[, main](p2, "Relation between hair and eye color");
    check L4() else D4();
  D4():
    deopt 16 [r8];
  L4():
    popenv;
    return r8;
  }
}
fun `inner-329566576`(x, col, space, main, xlab, ylab) {
  (reg x:*, reg col:*, reg space:*, reg main:*, reg xlab:*, reg ylab:*) -+> V { var x:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var space:*, reg space_isMissing:L, reg space_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg dim:cls, reg r8:V, reg length:cls, reg r9:V, reg r10:V, reg c1:L, reg stop:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x3:*, reg x4:V, reg r15:V, reg any:cls, reg r16:V, reg c2:L, reg c3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg c7:L, reg r18:V, reg x5:*, reg x6:V, reg anyNA:cls, reg r19:V, reg c8:L, reg c9:V, reg c11:L, reg stop1:cls, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg x7:*, reg x8:V, reg sum:cls, reg r24:V, reg r25:V, reg c12:L, reg stop2:cls, reg r26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg col1:*, reg col2:V, reg length1:cls, reg r30:V, reg r31:V, reg c13:L, reg stop3:cls, reg r32:V, reg x9:*, reg x10:V, reg c14:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg rev:cls, reg NCOL:cls, reg x13:*, reg x14:V, reg p1:p(V +), reg r35:V, reg r36:V, reg p2:p(V +), reg r38:V, reg __:cls, reg r39:V, reg outer:cls, reg rowSums:cls, reg f:*, reg f1:V, reg p3:p(V +), reg r41:V, reg p4:p(V +), reg colSums:cls, reg f2:*, reg f3:V, reg p5:p(V +), reg r44:V, reg p6:p(V +), reg r46:V, reg n:*, reg n1:V, reg r47:V, reg f4:*, reg f5:V, reg e:*, reg e1:V, reg r48:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg r53:V, reg e2:*, reg e3:V, reg r54:V, reg r55:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg r57:V, reg e4:*, reg e5:V, reg r58:V, reg apply:cls, reg e6:*, reg e7:V, reg p7:p(V +), reg max:*, reg max1:V, reg p8:p(V +), reg r61:V, reg apply1:cls, reg d:*, reg d1:V, reg p9:p(V +), reg max2:*, reg max3:V, reg p10:p(V +), reg r64:V, reg apply2:cls, reg d2:*, reg d3:V, reg p11:p(V +), reg min:*, reg min1:V, reg p12:p(V +), reg r67:V, reg r68:V, reg mean:cls, reg x_w:*, reg x_w1:V, reg p13:p(V +), reg r70:V, reg space1:*, reg space2:V, reg r71:V, reg mean1:cls, reg y_h:*, reg y_h1:V, reg p14:p(V +), reg r73:V, reg space3:*, reg space4:V, reg r74:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r75:V, reg r76:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r77:V, reg r78:V, reg x_w2:*, reg x_w3:V, reg sum1:cls, reg r79:V, reg NROW:cls, reg f6:*, reg f7:V, reg p15:p(V +), reg r81:V, reg x_delta:*, reg x_delta1:V, reg r82:V, reg r83:V, reg c15:cls, reg r84:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r85:V, reg r86:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r87:V, reg r88:V, reg y_h2:*, reg y_h3:V, reg sum2:cls, reg r89:V, reg NCOL1:cls, reg f8:*, reg f9:V, reg p16:p(V +), reg r91:V, reg y_delta:*, reg y_delta1:V, reg r92:V, reg r93:V, reg c16:cls, reg r94:V, reg dev_hold:cls, reg r95:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r96:V, reg on_exit:cls, reg r98:V, reg plot_new:cls, reg r99:V, reg plot_window:cls, reg xlim:*, reg xlim1:V, reg p17:p(V +), reg ylim:*, reg ylim1:V, reg p18:p(V +), reg r102:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r103:V, reg r104:V, reg x_w4:*, reg x_w5:V, reg x_delta2:*, reg x_delta3:V, reg r105:V, reg cumsum:cls, reg r106:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r107:V, reg r108:V, reg x_r:*, reg x_r1:V, reg c17:L, reg x_r3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg NROW1:cls, reg f10:*, reg f11:V, reg p19:p(V +), reg r110:V, reg r111:V, reg __1:cls, reg r112:V, reg c18:cls, reg r113:V, reg x_r4:*, reg x_r5:V, reg r114:V, reg r115:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r116:V, reg r117:V, reg y_h4:*, reg y_h5:V, reg y_delta2:*, reg y_delta3:V, reg r118:V, reg cumsum1:cls, reg r119:V, reg y_u:*, reg y_u1:V, reg apply3:cls, reg pmax:cls, reg d4:*, reg d5:V, reg p20:p(V +), reg r121:V, reg p21:p(V +), reg max4:*, reg max5:V, reg p22:p(V +), reg r124:V, reg r125:V, reg y_delta4:*, reg y_delta5:V, reg r126:V, reg r127:V, reg expand_grid:cls, reg x_m:*, reg x_m1:V, reg p23:p(V +), reg y_m:*, reg y_m1:V, reg p24:p(V +), reg r130:V, reg rect:cls, reg z:*, reg z1:V, reg c19:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r131:V, reg e8:*, reg e9:V, reg r132:V, reg r133:V, reg p25:p(V +), reg z4:*, reg z5:V, reg c20:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r135:V, reg p26:p(V +), reg z8:*, reg z9:V, reg c21:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r137:V, reg e10:*, reg e11:V, reg r138:V, reg r139:V, reg p27:p(V +), reg z12:*, reg z13:V, reg c22:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r141:V, reg d6:*, reg d7:V, reg r142:V, reg p28:p(V +), reg col3:*, reg col4:V, reg c23:L, reg col6:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg d8:*, reg d9:V, reg r144:V, reg r145:V, reg __6:cls, reg r146:V, reg p29:p(V +), reg r148:V, reg axis:cls, reg x_m2:*, reg x_m3:V, reg p30:p(V +), reg rownames:cls, reg f12:*, reg f13:V, reg p31:p(V +), reg r151:V, reg p32:p(V +), reg r153:V, reg axis1:cls, reg y_m2:*, reg y_m3:V, reg p33:p(V +), reg colnames:cls, reg f14:*, reg f15:V, reg p34:p(V +), reg r156:V, reg p35:p(V +), reg r158:V, reg abline:cls, reg y_m4:*, reg y_m5:V, reg p36:p(V +), reg r160:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r161:V, reg r162:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r163:V, reg r164:V, reg f16:*, reg f17:V, reg dimnames:cls, reg r165:V, reg names:cls, reg r166:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r167:V, reg r168:V, reg ndn:*, reg ndn1:V, reg length2:cls, reg r169:V, reg r170:V, reg c24:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r171:V, reg r172:V, reg xlab1:*, reg xlab2:V, reg c25:V, reg c26:L, reg ndn2:*, reg ndn3:V, reg c27:L, reg ndn5:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __7:cls, reg r173:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r174:V, reg r175:V, reg ylab1:*, reg ylab2:V, reg c28:V, reg c29:L, reg ndn6:*, reg ndn7:V, reg c30:L, reg ndn9:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg __8:cls, reg r176:V, reg dx19:V, reg title:cls, reg main1:*, reg main2:V, reg p37:p(V +), reg xlab3:*, reg xlab4:V, reg p38:p(V +), reg ylab3:*, reg ylab4:V, reg p39:p(V +), reg r180:V |
    mkenv;
    st x = x;
    col_isMissing = missing.0(col);
    if col_isMissing then L0() else L1(col);
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
      r2 = dyn c("black", "red");
      goto L0(r2);
    L2():
      r = dyn base("black", "red");
      goto L0(r);
    };
    goto L1(p);
  L1(col_orDefault):
    st col = col_orDefault;
    space_isMissing = missing.0(space);
    if space_isMissing then L2(0.3) else L2(space);
  L2(space_orDefault):
    st space = space_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L3(NULL) else L3(main);
  L3(main_orDefault):
    st main = main_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L4(NULL) else L4(xlab);
  L4(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L5(NULL) else L5(ylab);
  L5(ylab_orDefault):
    st ylab = ylab_orDefault;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  L6(r5):
    r10 = `!=`(r5, 2);
    c1 = `as.logical`(r10);
    if c1 then L53() else L8();
  L46():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L47():
    r4 = dyn base1(<lang dim(x)>);
    goto L6(r4);
  L7(r7):
    length = ldf length in base;
    r9 = dyn length(r7);
    check L52() else D2();
  L8():
    goto L9();
  L9():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L48():
    x1 = ld x;
    check L50() else D0();
  L49():
    r6 = dyn base2(<sym x>);
    goto L7(r6);
  L53():
    stop = ldf stop;
    check L54() else D3();
  D0():
    deopt 4 [x1];
  D2():
    deopt 9 [r9];
  D3():
    deopt 13 [];
  L10(r14):
    c2 = `as.logical`(r14);
    if c2 then L11(c2) else L61();
  L50():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r8 = dyn dim(x2);
    check L51() else D1();
  L52():
    goto L6(r9);
  L54():
    r11 = dyn stop("'x' must be a 2-d contingency table");
    check L55() else D4();
  L57():
    x3 = ld x;
    check L59() else D5();
  L58():
    r13 = dyn base3(<lang `<`(x, 0.0)>);
    goto L10(r13);
  D1():
    deopt 7 [r8];
  D4():
    deopt 15 [r11];
  D5():
    deopt 20 [x3];
  L11(c3):
    c11 = `as.logical`(c3);
    if c11 then L67() else L13();
  L51():
    goto L7(r8);
  L55():
    goto L9();
  L59():
    x4 = force? x3;
    checkMissing(x4);
    r15 = `<`(x4, 0.0);
    any = ldf any in base;
    r16 = dyn any(r15);
    check L60() else D6();
  L61():
    sym4 = ldf anyNA;
    base4 = ldf anyNA in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  D6():
    deopt 25 [r16];
  L12(c7, r18):
    c8 = `as.logical`(r18);
    c9 = `||`(c7, c8);
    goto L11(c9);
  L13():
    goto L14();
  L14():
    sym5 = ldf sum;
    base5 = ldf sum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  L60():
    goto L10(r16);
  L62():
    x5 = ld x;
    check L64() else D7();
  L63():
    r17 = dyn base4(<sym x>);
    goto L12(c2, r17);
  L67():
    stop1 = ldf stop;
    check L68() else D9();
  D7():
    deopt 28 [c2, x5];
  D9():
    deopt 34 [];
  L15(r23):
    st n = r23;
    r25 = `==`(r23, 0);
    c12 = `as.logical`(r25);
    if c12 then L75() else L16();
  L64():
    x6 = force? x5;
    checkMissing(x6);
    anyNA = ldf anyNA in base;
    r19 = dyn anyNA(x6);
    check L65() else D8();
  L68():
    r20 = dyn stop1("all entries of 'x' must be nonnegative and finite");
    check L69() else D10();
  L71():
    x7 = ld x;
    check L73() else D11();
  L72():
    r22 = dyn base5(<sym x>);
    goto L15(r22);
  D8():
    deopt 31 [c2, r19];
  D10():
    deopt 36 [r20];
  D11():
    deopt 41 [x7];
  L16():
    goto L17();
  L17():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L79() else L80();
  L65():
    goto L12(c2, r19);
  L69():
    goto L14();
  L73():
    x8 = force? x7;
    checkMissing(x8);
    sum = ldf sum in base;
    r24 = dyn sum(x8);
    check L74() else D12();
  L75():
    stop2 = ldf stop;
    check L76() else D13();
  D12():
    deopt 44 [r24];
  D13():
    deopt 49 [];
  L18(r29):
    r31 = `!=`(r29, 2);
    c13 = `as.logical`(r31);
    if c13 then L83() else L19();
  L74():
    goto L15(r24);
  L76():
    r26 = dyn stop2("at least one entry of 'x' must be positive");
    check L77() else D14();
  L79():
    col1 = ld col;
    check L81() else D15();
  L80():
    r28 = dyn base6(<sym col>);
    goto L18(r28);
  D14():
    deopt 51 [r26];
  D15():
    deopt 56 [col1];
  L19():
    goto L20();
  L20():
    x9 = ld x;
    check L87() else D19();
  L77():
    goto L17();
  L81():
    col2 = force? col1;
    checkMissing(col2);
    length1 = ldf length in base;
    r30 = dyn length1(col2);
    check L82() else D16();
  L83():
    stop3 = ldf stop;
    check L84() else D17();
  D16():
    deopt 59 [r30];
  D17():
    deopt 63 [];
  D19():
    deopt 68 [x9];
  L82():
    goto L18(r30);
  L84():
    r32 = dyn stop3("incorrect 'col': must be length 2");
    check L85() else D18();
  L87():
    x10 = force? x9;
    checkMissing(x10);
    c14 = `is.object`(x10);
    if c14 then L88() else L89(x10);
  D18():
    deopt 65 [r32];
  L21(dx1):
    st f = dx1;
    outer = ldf outer;
    check L93() else D22();
  L85():
    goto L20();
  L88():
    dr = tryDispatchBuiltin.1("[", x10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L90() else L89(dr);
  L89(x12):
    rev = ldf rev;
    check L91() else D20();
  D20():
    deopt 72 [x12];
  D22():
    deopt 79 [];
  L90():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L91():
    p2 = prom<V +>{
      NCOL = ldf NCOL;
      p1 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        return x14;
      };
      r35 = dyn NCOL(p1);
      r36 = `:`(1, r35);
      return r36;
    };
    r38 = dyn rev(p2);
    check L92() else D21();
  L93():
    p4 = prom<V +>{
      rowSums = ldf rowSums;
      p3 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r41 = dyn rowSums(p3);
      return r41;
    };
    p6 = prom<V +>{
      colSums = ldf colSums;
      p5 = prom<V +>{
        f2 = ld f;
        f3 = force? f2;
        checkMissing(f3);
        return f3;
      };
      r44 = dyn colSums(p5);
      return r44;
    };
    r46 = dyn outer(p4, p6);
    check L94() else D23();
  D21():
    deopt 74 [x12, r38];
  D23():
    deopt 82 [r46];
  L92():
    __ = ldf `[` in base;
    r39 = dyn __(x10, <missing>, r38);
    goto L21(r39);
  L94():
    n = ld n;
    check L95() else D24();
  D24():
    deopt 82 [r46, n];
  L95():
    n1 = force? n;
    checkMissing(n1);
    r47 = `/`(r46, n1);
    st e = r47;
    f4 = ld f;
    check L96() else D25();
  D25():
    deopt 86 [f4];
  L96():
    f5 = force? f4;
    checkMissing(f5);
    e = ld e;
    check L97() else D26();
  D26():
    deopt 87 [f5, e];
  L97():
    e1 = force? e;
    checkMissing(e1);
    r48 = `-`(f5, e1);
    sym7 = ldf sqrt;
    base7 = ldf sqrt in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L98() else L99();
  L22(r52, r53):
    r55 = `/`(r52, r53);
    st d = r55;
    sym8 = ldf sqrt;
    base8 = ldf sqrt in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L101() else L102();
  L98():
    e2 = ld e;
    check L100() else D27();
  L99():
    r51 = dyn base7(<sym e>);
    goto L22(r48, r51);
  D27():
    deopt 90 [r48, e2];
  L23(r57):
    st e = r57;
    apply = ldf apply;
    check L104() else D29();
  L100():
    e3 = force? e2;
    checkMissing(e3);
    r54 = sqrt(e3);
    goto L22(r48, r54);
  L101():
    e4 = ld e;
    check L103() else D28();
  L102():
    r56 = dyn base8(<sym e>);
    goto L23(r56);
  D28():
    deopt 96 [e4];
  D29():
    deopt 101 [];
  L103():
    e5 = force? e4;
    checkMissing(e5);
    r58 = sqrt(e5);
    goto L23(r58);
  L104():
    p7 = prom<V +>{
      e6 = ld e;
      e7 = force? e6;
      checkMissing(e7);
      return e7;
    };
    p8 = prom<V +>{
      max = ld max;
      max1 = force? max;
      checkMissing(max1);
      return max1;
    };
    r61 = dyn apply(p7, 1, p8);
    check L105() else D30();
  D30():
    deopt 105 [r61];
  L105():
    st `x.w` = r61;
    apply1 = ldf apply;
    check L106() else D31();
  D31():
    deopt 108 [];
  L106():
    p9 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    p10 = prom<V +>{
      max2 = ld max;
      max3 = force? max2;
      checkMissing(max3);
      return max3;
    };
    r64 = dyn apply1(p9, 2, p10);
    check L107() else D32();
  D32():
    deopt 112 [r64];
  L107():
    apply2 = ldf apply;
    check L108() else D33();
  D33():
    deopt 113 [r64];
  L108():
    p11 = prom<V +>{
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      return d3;
    };
    p12 = prom<V +>{
      min = ld min;
      min1 = force? min;
      checkMissing(min1);
      return min1;
    };
    r67 = dyn apply2(p11, 2, p12);
    check L109() else D34();
  D34():
    deopt 117 [r64, r67];
  L109():
    r68 = `-`(r64, r67);
    st `y.h` = r68;
    mean = ldf mean;
    check L110() else D35();
  D35():
    deopt 121 [];
  L110():
    p13 = prom<V +>{
      x_w = ld `x.w`;
      x_w1 = force? x_w;
      checkMissing(x_w1);
      return x_w1;
    };
    r70 = dyn mean(p13);
    check L111() else D36();
  D36():
    deopt 123 [r70];
  L111():
    space1 = ld space;
    check L112() else D37();
  D37():
    deopt 123 [r70, space1];
  L112():
    space2 = force? space1;
    checkMissing(space2);
    r71 = `*`(r70, space2);
    st `x.delta` = r71;
    mean1 = ldf mean;
    check L113() else D38();
  D38():
    deopt 128 [];
  L113():
    p14 = prom<V +>{
      y_h = ld `y.h`;
      y_h1 = force? y_h;
      checkMissing(y_h1);
      return y_h1;
    };
    r73 = dyn mean1(p14);
    check L114() else D39();
  D39():
    deopt 130 [r73];
  L114():
    space3 = ld space;
    check L115() else D40();
  D40():
    deopt 130 [r73, space3];
  L115():
    space4 = force? space3;
    checkMissing(space4);
    r74 = `*`(r73, space4);
    st `y.delta` = r74;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L116() else L117();
  L24(r76):
    st xlim = r76;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L126() else L127();
  L116():
    sym10 = ldf sum;
    base10 = ldf sum in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L118() else L119();
  L117():
    r75 = dyn base9(0.0, <lang `+`(sum(x.w), `*`(NROW(f), x.delta))>);
    goto L24(r75);
  L25(r78):
    NROW = ldf NROW;
    check L122() else D43();
  L26(r86):
    st ylim = r86;
    dev_hold = ldf `dev.hold`;
    check L136() else D53();
  L118():
    x_w2 = ld `x.w`;
    check L120() else D41();
  L119():
    r77 = dyn base10(<sym x.w>);
    goto L25(r77);
  L126():
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L128() else L129();
  L127():
    r85 = dyn base11(0.0, <lang `+`(sum(y.h), `*`(NCOL(f), y.delta))>);
    goto L26(r85);
  D41():
    deopt 139 [x_w2];
  D43():
    deopt 143 [r78];
  D53():
    deopt 171 [];
  L27(r88):
    NCOL1 = ldf NCOL;
    check L132() else D49();
  L120():
    x_w3 = force? x_w2;
    checkMissing(x_w3);
    sum1 = ldf sum in base;
    r79 = dyn sum1(x_w3);
    check L121() else D42();
  L122():
    p15 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      return f7;
    };
    r81 = dyn NROW(p15);
    check L123() else D44();
  L128():
    y_h2 = ld `y.h`;
    check L130() else D47();
  L129():
    r87 = dyn base12(<sym y.h>);
    goto L27(r87);
  L136():
    r95 = dyn dev_hold();
    check L137() else D54();
  D42():
    deopt 142 [r79];
  D44():
    deopt 145 [r78, r81];
  D47():
    deopt 157 [y_h2];
  D49():
    deopt 161 [r88];
  D54():
    deopt 172 [r95];
  L121():
    goto L25(r79);
  L123():
    x_delta = ld `x.delta`;
    check L124() else D45();
  L130():
    y_h3 = force? y_h2;
    checkMissing(y_h3);
    sum2 = ldf sum in base;
    r89 = dyn sum2(y_h3);
    check L131() else D48();
  L132():
    p16 = prom<V +>{
      f8 = ld f;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    r91 = dyn NCOL1(p16);
    check L133() else D50();
  L137():
    sym13 = ldf `on.exit`;
    base13 = ldf `on.exit` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L138() else L139();
  D45():
    deopt 145 [r78, r81, x_delta];
  D48():
    deopt 160 [r89];
  D50():
    deopt 163 [r88, r91];
  L28():
    plot_new = ldf `plot.new`;
    check L140() else D55();
  L124():
    x_delta1 = force? x_delta;
    checkMissing(x_delta1);
    r82 = `*`(r81, x_delta1);
    r83 = `+`(r78, r82);
    c15 = ldf c in base;
    r84 = dyn c15(0.0, r83);
    check L125() else D46();
  L131():
    goto L27(r89);
  L133():
    y_delta = ld `y.delta`;
    check L134() else D51();
  L138():
    on_exit = ldf `on.exit` in base;
    r98 = dyn on_exit(<lang dev.flush()>);
    goto L28();
  L139():
    r96 = dyn base13(<lang dev.flush()>);
    goto L28();
  D46():
    deopt 150 [r84];
  D51():
    deopt 163 [r88, r91, y_delta];
  D55():
    deopt 177 [];
  L125():
    goto L24(r84);
  L134():
    y_delta1 = force? y_delta;
    checkMissing(y_delta1);
    r92 = `*`(r91, y_delta1);
    r93 = `+`(r88, r92);
    c16 = ldf c in base;
    r94 = dyn c16(0.0, r93);
    check L135() else D52();
  L140():
    r99 = dyn plot_new();
    check L141() else D56();
  D52():
    deopt 168 [r94];
  D56():
    deopt 178 [r99];
  L135():
    goto L26(r94);
  L141():
    plot_window = ldf `plot.window`;
    check L142() else D57();
  D57():
    deopt 180 [];
  L142():
    p17 = prom<V +>{
      xlim = ld xlim;
      xlim1 = force? xlim;
      checkMissing(xlim1);
      return xlim1;
    };
    p18 = prom<V +>{
      ylim = ld ylim;
      ylim1 = force? ylim;
      checkMissing(ylim1);
      return ylim1;
    };
    r102 = dyn plot_window[, , log](p17, p18, "");
    check L143() else D58();
  D58():
    deopt 185 [r102];
  L143():
    sym14 = ldf cumsum;
    base14 = ldf cumsum in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L144() else L145();
  L29(r104):
    st `x.r` = r104;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L149() else L150();
  L144():
    x_w4 = ld `x.w`;
    check L146() else D59();
  L145():
    r103 = dyn base14(<lang `+`(x.w, x.delta)>);
    goto L29(r103);
  D59():
    deopt 188 [x_w4];
  L30(r108):
    x_r4 = ld `x.r`;
    check L158() else D66();
  L146():
    x_w5 = force? x_w4;
    checkMissing(x_w5);
    x_delta2 = ld `x.delta`;
    check L147() else D60();
  L149():
    x_r = ld `x.r`;
    check L151() else D62();
  L150():
    r107 = dyn base15(0.0, <lang `[`(x.r, `-`(NROW(f)))>);
    goto L30(r107);
  D60():
    deopt 189 [x_w5, x_delta2];
  D62():
    deopt 198 [x_r];
  D66():
    deopt 207 [r108, x_r4];
  L147():
    x_delta3 = force? x_delta2;
    checkMissing(x_delta3);
    r105 = `+`(x_w5, x_delta3);
    cumsum = ldf cumsum in base;
    r106 = dyn cumsum(r105);
    check L148() else D61();
  L151():
    x_r1 = force? x_r;
    checkMissing(x_r1);
    c17 = `is.object`(x_r1);
    if c17 then L152() else L153(x_r1);
  L158():
    x_r5 = force? x_r4;
    checkMissing(x_r5);
    r114 = `+`(r108, x_r5);
    r115 = `/`(r114, 2.0);
    st `x.m` = r115;
    sym16 = ldf cumsum;
    base16 = ldf cumsum in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L159() else L160();
  D61():
    deopt 193 [r106];
  L31(dx3):
    c18 = ldf c in base;
    r113 = dyn c18(0.0, dx3);
    check L157() else D65();
  L32(r117):
    st `y.u` = r117;
    y_u = ld `y.u`;
    check L164() else D70();
  L148():
    goto L29(r106);
  L152():
    dr2 = tryDispatchBuiltin.1("[", x_r1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L154() else L153(dr2);
  L153(x_r3):
    NROW1 = ldf NROW;
    check L155() else D63();
  L159():
    y_h4 = ld `y.h`;
    check L161() else D67();
  L160():
    r116 = dyn base16(<lang `+`(y.h, y.delta)>);
    goto L32(r116);
  D63():
    deopt 201 [x_r3];
  D65():
    deopt 207 [r113];
  D67():
    deopt 215 [y_h4];
  D70():
    deopt 222 [y_u];
  L154():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L31(dx2);
  L155():
    p19 = prom<V +>{
      f10 = ld f;
      f11 = force? f10;
      checkMissing(f11);
      return f11;
    };
    r110 = dyn NROW1(p19);
    check L156() else D64();
  L157():
    goto L30(r113);
  L161():
    y_h5 = force? y_h4;
    checkMissing(y_h5);
    y_delta2 = ld `y.delta`;
    check L162() else D68();
  L164():
    y_u1 = force? y_u;
    checkMissing(y_u1);
    apply3 = ldf apply;
    check L165() else D71();
  D64():
    deopt 203 [x_r3, r110];
  D68():
    deopt 216 [y_h5, y_delta2];
  D71():
    deopt 224 [y_u1];
  L156():
    r111 = `-`(<missing>, r110);
    __1 = ldf `[` in base;
    r112 = dyn __1(x_r3, r111);
    goto L31(r112);
  L162():
    y_delta3 = force? y_delta2;
    checkMissing(y_delta3);
    r118 = `+`(y_h5, y_delta3);
    cumsum1 = ldf cumsum in base;
    r119 = dyn cumsum1(r118);
    check L163() else D69();
  L165():
    p21 = prom<V +>{
      pmax = ldf pmax;
      p20 = prom<V +>{
        d4 = ld d;
        d5 = force? d4;
        checkMissing(d5);
        return d5;
      };
      r121 = dyn pmax(p20, 0.0);
      return r121;
    };
    p22 = prom<V +>{
      max4 = ld max;
      max5 = force? max4;
      checkMissing(max5);
      return max5;
    };
    r124 = dyn apply3(p21, 2, p22);
    check L166() else D72();
  D69():
    deopt 220 [r119];
  D72():
    deopt 228 [y_u1, r124];
  L163():
    goto L32(r119);
  L166():
    r125 = `-`(y_u1, r124);
    y_delta4 = ld `y.delta`;
    check L167() else D73();
  D73():
    deopt 229 [r125, y_delta4];
  L167():
    y_delta5 = force? y_delta4;
    checkMissing(y_delta5);
    r126 = `/`(y_delta5, 2.0);
    r127 = `-`(r125, r126);
    st `y.m` = r127;
    expand_grid = ldf `expand.grid`;
    check L168() else D74();
  D74():
    deopt 236 [];
  L168():
    p23 = prom<V +>{
      x_m = ld `x.m`;
      x_m1 = force? x_m;
      checkMissing(x_m1);
      return x_m1;
    };
    p24 = prom<V +>{
      y_m = ld `y.m`;
      y_m1 = force? y_m;
      checkMissing(y_m1);
      return y_m1;
    };
    r130 = dyn expand_grid(p23, p24);
    check L169() else D75();
  D75():
    deopt 239 [r130];
  L169():
    st z = r130;
    rect = ldf rect;
    check L170() else D76();
  D76():
    deopt 242 [];
  L170():
    p25 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c19 = `is.object`(z1);
      if c19 then L1() else L2();
    L0(dx5):
      e8 = ld e;
      e9 = force? e8;
      checkMissing(e9);
      r132 = `/`(e9, 2.0);
      r133 = `-`(dx5, r132);
      return r133;
    L1():
      dr4 = tryDispatchBuiltin.1("[", z1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r131 = dyn __2(z1, <missing>, 1.0);
      goto L0(r131);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p26 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      c20 = `is.object`(z5);
      if c20 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", z5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r135 = dyn __3(z5, <missing>, 2.0);
      goto L0(r135);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p27 = prom<V +>{
      z8 = ld z;
      z9 = force? z8;
      checkMissing(z9);
      c21 = `is.object`(z9);
      if c21 then L1() else L2();
    L0(dx9):
      e10 = ld e;
      e11 = force? e10;
      checkMissing(e11);
      r138 = `/`(e11, 2.0);
      r139 = `+`(dx9, r138);
      return r139;
    L1():
      dr8 = tryDispatchBuiltin.1("[", z9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r137 = dyn __4(z9, <missing>, 1.0);
      goto L0(r137);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p28 = prom<V +>{
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      c22 = `is.object`(z13);
      if c22 then L1() else L2();
    L0(dx11):
      d6 = ld d;
      d7 = force? d6;
      checkMissing(d7);
      r142 = `+`(dx11, d7);
      return r142;
    L1():
      dr10 = tryDispatchBuiltin.1("[", z13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r141 = dyn __5(z13, <missing>, 2.0);
      goto L0(r141);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p29 = prom<V +>{
      col3 = ld col;
      col4 = force? col3;
      checkMissing(col4);
      c23 = `is.object`(col4);
      if c23 then L1() else L2(col4);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", col4);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(col6):
      d8 = ld d;
      d9 = force? d8;
      checkMissing(d9);
      r144 = `<`(d9, 0.0);
      r145 = `+`(1.0, r144);
      __6 = ldf `[` in base;
      r146 = dyn __6(col6, r145);
      goto L0(r146);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r148 = dyn rect[, , , , col](p25, p26, p27, p28, p29);
    check L171() else D77();
  D77():
    deopt 249 [r148];
  L171():
    axis = ldf axis;
    check L172() else D78();
  D78():
    deopt 251 [];
  L172():
    p30 = prom<V +>{
      x_m2 = ld `x.m`;
      x_m3 = force? x_m2;
      checkMissing(x_m3);
      return x_m3;
    };
    p32 = prom<V +>{
      rownames = ldf rownames;
      p31 = prom<V +>{
        f12 = ld f;
        f13 = force? f12;
        checkMissing(f13);
        return f13;
      };
      r151 = dyn rownames(p31);
      return r151;
    };
    r153 = dyn axis[, at, labels, tick](1.0, p30, p32, FALSE);
    check L173() else D79();
  D79():
    deopt 259 [r153];
  L173():
    axis1 = ldf axis;
    check L174() else D80();
  D80():
    deopt 261 [];
  L174():
    p33 = prom<V +>{
      y_m2 = ld `y.m`;
      y_m3 = force? y_m2;
      checkMissing(y_m3);
      return y_m3;
    };
    p35 = prom<V +>{
      colnames = ldf colnames;
      p34 = prom<V +>{
        f14 = ld f;
        f15 = force? f14;
        checkMissing(f15);
        return f15;
      };
      r156 = dyn colnames(p34);
      return r156;
    };
    r158 = dyn axis1[, at, labels, tick](2.0, p33, p35, FALSE);
    check L175() else D81();
  D81():
    deopt 269 [r158];
  L175():
    abline = ldf abline;
    check L176() else D82();
  D82():
    deopt 271 [];
  L176():
    p36 = prom<V +>{
      y_m4 = ld `y.m`;
      y_m5 = force? y_m4;
      checkMissing(y_m5);
      return y_m5;
    };
    r160 = dyn abline[h, lty](p36, 2.0);
    check L177() else D83();
  D83():
    deopt 276 [r160];
  L177():
    sym17 = ldf names;
    base17 = ldf names in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L178() else L179();
  L33(r162):
    st ndn = r162;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L185() else L186();
  L178():
    sym18 = ldf dimnames;
    base18 = ldf dimnames in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L180() else L181();
  L179():
    r161 = dyn base17(<lang dimnames(f)>);
    goto L33(r161);
  L34(r164):
    names = ldf names in base;
    r166 = dyn names(r164);
    check L184() else D86();
  L35(r168):
    r170 = `==`(r168, 2);
    c24 = `as.logical`(r170);
    if c24 then L189() else L36();
  L180():
    f16 = ld f;
    check L182() else D84();
  L181():
    r163 = dyn base18(<sym f>);
    goto L34(r163);
  L185():
    ndn = ld ndn;
    check L187() else D87();
  L186():
    r167 = dyn base19(<sym ndn>);
    goto L35(r167);
  D84():
    deopt 281 [f16];
  D86():
    deopt 286 [r166];
  D87():
    deopt 290 [ndn];
  L36():
    goto L45();
  L45():
    title = ldf title;
    check L209() else D93();
  L182():
    f17 = force? f16;
    checkMissing(f17);
    dimnames = ldf dimnames in base;
    r165 = dyn dimnames(f17);
    check L183() else D85();
  L184():
    goto L33(r166);
  L187():
    ndn1 = force? ndn;
    checkMissing(ndn1);
    length2 = ldf length in base;
    r169 = dyn length2(ndn1);
    check L188() else D88();
  L189():
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L190() else L191();
  D85():
    deopt 284 [r165];
  D88():
    deopt 293 [r169];
  D93():
    deopt 323 [];
  L37(r172):
    c26 = `as.logical`(r172);
    if c26 then L193() else L38();
  L183():
    goto L34(r165);
  L188():
    goto L35(r169);
  L190():
    xlab1 = ld xlab;
    check L192() else D89();
  L191():
    r171 = dyn base20(<sym xlab>);
    goto L37(r171);
  L209():
    p37 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p38 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p39 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    r180 = dyn title[main, xlab, ylab](p37, p38, p39);
    check L210() else D94();
  D89():
    deopt 297 [xlab1];
  D94():
    deopt 330 [r180];
  L38():
    goto L40();
  L40():
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L199() else L200();
  L192():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c25 = `==`(xlab2, NULL);
    goto L37(c25);
  L193():
    ndn2 = ld ndn;
    check L194() else D90();
  L210():
    popenv;
    return r180;
  D90():
    deopt 300 [ndn2];
  L41(r175):
    c29 = `as.logical`(r175);
    if c29 then L202() else L42();
  L194():
    ndn3 = force? ndn2;
    checkMissing(ndn3);
    c27 = `is.object`(ndn3);
    if c27 then L195() else L196(ndn3);
  L199():
    ylab1 = ld ylab;
    check L201() else D91();
  L200():
    r174 = dyn base21(<sym ylab>);
    goto L41(r174);
  D91():
    deopt 309 [ylab1];
  L39(dx15):
    st xlab = dx15;
    goto L40();
  L42():
    goto L44(NULL);
  L44(dx19):
    goto L45();
  L195():
    dr14 = tryDispatchBuiltin.1("[", ndn3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L197() else L196(dr14);
  L196(ndn5):
    __7 = ldf `[` in base;
    r173 = dyn __7(ndn5, 1);
    goto L39(r173);
  L201():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c28 = `==`(ylab2, NULL);
    goto L41(c28);
  L202():
    ndn6 = ld ndn;
    check L203() else D92();
  D92():
    deopt 312 [ndn6];
  L197():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L39(dx14);
  L203():
    ndn7 = force? ndn6;
    checkMissing(ndn7);
    c30 = `is.object`(ndn7);
    if c30 then L204() else L205(ndn7);
  L43(dx18):
    st ylab = dx18;
    goto L44(dx18);
  L204():
    dr16 = tryDispatchBuiltin.1("[", ndn7);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L206() else L205(dr16);
  L205(ndn9):
    __8 = ldf `[` in base;
    r176 = dyn __8(ndn9, 2);
    goto L43(r176);
  L206():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L43(dx17);
  }
}