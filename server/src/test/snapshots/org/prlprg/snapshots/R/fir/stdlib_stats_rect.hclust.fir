fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg hclust:cls, reg dist:cls, reg USArrests:*, reg USArrests1:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg plot:cls, reg hca:*, reg hca1:V, reg p3:p(V +), reg r10:V, reg rect_hclust:cls, reg hca2:*, reg hca3:V, reg p4:p(V +), reg r12:V, reg rect_hclust1:cls, reg hca4:*, reg hca5:V, reg p5:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg c:cls, reg r16:V, reg p6:p(V +), reg p7:p(V +), reg r19:V, reg x:*, reg x1:V |
    mkenv;
    r = clos inner1164223723;
    st `rect.hclust` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    hclust = ldf hclust;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p2 = prom<V +>{
      dist = ldf dist;
      p1 = prom<V +>{
        USArrests = ld USArrests;
        USArrests1 = force? USArrests;
        checkMissing(USArrests1);
        return USArrests1;
      };
      r6 = dyn dist(p1);
      return r6;
    };
    r8 = dyn hclust(p2);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r8];
  L4():
    goto L0();
  L6():
    st hca = r8;
    plot = ldf plot;
    check L7() else D4();
  D4():
    deopt 14 [];
  L7():
    p3 = prom<V +>{
      hca = ld hca;
      hca1 = force? hca;
      checkMissing(hca1);
      return hca1;
    };
    r10 = dyn plot(p3);
    check L8() else D5();
  D5():
    deopt 16 [r10];
  L8():
    rect_hclust = ldf `rect.hclust`;
    check L9() else D6();
  D6():
    deopt 18 [];
  L9():
    p4 = prom<V +>{
      hca2 = ld hca;
      hca3 = force? hca2;
      checkMissing(hca3);
      return hca3;
    };
    r12 = dyn rect_hclust[, k, border](p4, 3.0, "red");
    check L10() else D7();
  D7():
    deopt 24 [r12];
  L10():
    rect_hclust1 = ldf `rect.hclust`;
    check L11() else D8();
  D8():
    deopt 26 [];
  L11():
    p5 = prom<V +>{
      hca4 = ld hca;
      hca5 = force? hca4;
      checkMissing(hca5);
      return hca5;
    };
    p6 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c = ldf c in base;
      r16 = dyn c(2.0, 7.0);
      goto L0(r16);
    L2():
      r14 = dyn base1(2.0, 7.0);
      goto L0(r14);
    };
    p7 = prom<V +>{
      return <int 3, 4>;
    };
    r19 = dyn rect_hclust1[, h, which, border](p5, 50.0, p6, p7);
    check L12() else D9();
  D9():
    deopt 34 [r19];
  L12():
    st x = r19;
    x = ld x;
    check L13() else D10();
  D10():
    deopt 36 [x];
  L13():
    x1 = force? x;
    checkMissing(x1);
    popenv;
    return x1;
  }
}
fun inner1164223723(tree, k, which, x, h, border, cluster) {
  (reg tree:*, reg k:*, reg which:*, reg x:*, reg h:*, reg border:*, reg cluster:*) -+> V { var tree:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var which:*, reg which_isMissing:L, reg which_orDefault:*, var x:*, reg x_isMissing:L, reg x_orDefault:*, var h:*, reg h_isMissing:L, reg h_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, var cluster:*, reg cluster_isMissing:L, reg cluster_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg h1:*, reg h2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg k1:*, reg k2:V, reg length1:cls, reg r6:V, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg h3:*, reg h4:V, reg c10:V, reg r12:V, reg c11:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg k3:*, reg k4:V, reg c12:V, reg r15:V, reg c13:L, reg stop1:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg which1:cls, reg rev:cls, reg tree1:*, reg tree2:V, reg c14:L, reg tree4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r20:V, reg p:p(V +), reg r22:V, reg h5:*, reg h6:V, reg r23:V, reg p1:p(V +), reg r25:V, reg min:cls, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg k5:*, reg k6:V, reg max:cls, reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg k7:*, reg k8:V, reg c15:V, reg c16:L, reg stop2:cls, reg r33:V, reg k9:*, reg k10:V, reg r34:V, reg c17:L, reg c18:V, reg k11:*, reg k12:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg c22:L, reg k15:V, reg r36:V, reg tree5:*, reg tree6:V, reg c23:L, reg c25:L, reg k17:V, reg tree8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c27:L, reg k19:V, reg dx3:V, reg r37:V, reg length2:cls, reg r38:V, reg r39:V, reg c28:L, reg c29:V, reg c31:L, reg stop3:cls, reg gettextf:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg tree9:*, reg tree10:V, reg c32:L, reg tree12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r42:V, reg length3:cls, reg r43:V, reg p2:p(V +), reg r45:V, reg p3:p(V +), reg r47:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg cluster1:*, reg cluster2:V, reg c33:V, reg c34:L, reg cutree:cls, reg tree13:*, reg tree14:V, reg p4:p(V +), reg k20:*, reg k21:V, reg p5:p(V +), reg r53:V, reg table:cls, reg cluster3:*, reg cluster4:V, reg p6:p(V +), reg r56:V, reg c35:L, reg r58:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg unique:cls, reg cluster5:*, reg cluster6:V, reg c36:L, reg cluster8:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg tree15:*, reg tree16:V, reg c37:L, reg cluster10:V, reg tree18:V, reg dr10:V, reg dc5:L, reg dx10:V, reg cluster12:V, reg dx11:V, reg r59:V, reg __:cls, reg r60:V, reg p7:p(V +), reg r62:V, reg __1:cls, reg r63:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r64:V, reg r65:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg r67:V, reg clustab:*, reg clustab1:V, reg cumsum:cls, reg r68:V, reg c38:cls, reg r69:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg r71:V, reg x1:*, reg x2:V, reg c39:V, reg r72:V, reg c40:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r73:V, reg r74:V, reg which2:*, reg which3:V, reg c41:V, reg r75:V, reg c42:L, reg stop4:cls, reg r76:V, reg x3:*, reg x4:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r78:V, reg r79:V, reg x5:*, reg x6:V, reg r80:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c43:L, reg x7:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r81:V, reg i7:I, reg r82:V, reg which4:cls, reg m:*, reg m1:V, reg x8:*, reg x9:V, reg c44:L, reg m3:V, reg x11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg m5:V, reg dx13:V, reg n:*, reg n1:V, reg __2:cls, reg r83:V, reg r84:V, reg p8:p(V +), reg r86:V, reg max1:cls, reg r87:V, reg l1:*, reg c45:L, reg i9:I, reg r89:V, reg l3:*, reg dr14:V, reg dc7:L, reg dx14:V, reg i11:I, reg dx15:V, reg n2:*, reg n3:V, reg ___:cls, reg r92:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r93:V, reg r94:V, reg which5:*, reg which6:V, reg c46:V, reg c47:L, reg k22:*, reg k23:V, reg r95:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r96:V, reg r97:V, reg which7:*, reg which8:V, reg k24:*, reg k25:V, reg r98:V, reg any:cls, reg r99:V, reg c48:L, reg stop5:cls, reg gettextf1:cls, reg k26:*, reg k27:V, reg p9:p(V +), reg r101:V, reg p10:p(V +), reg r103:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r105:V, reg r106:V, reg border1:*, reg border2:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r107:V, reg r108:V, reg which9:*, reg which10:V, reg length4:cls, reg r109:V, reg rep_len:cls, reg r110:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r111:V, reg r112:V, reg list:cls, reg r113:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r114:V, reg r115:V, reg which11:*, reg which12:V, reg r116:I, reg s1:V, reg l4:I, reg i13:I, reg i14:I, reg i15:I, reg c49:L, reg x12:V, reg rect:cls, reg m6:*, reg m7:V, reg c50:L, reg m9:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg which13:*, reg which14:V, reg c51:L, reg m11:V, reg which16:V, reg dr18:V, reg dc9:L, reg dx18:V, reg m13:V, reg dx19:V, reg n4:*, reg n5:V, reg __3:cls, reg r117:V, reg __4:cls, reg r118:V, reg r119:V, reg p11:p(V +), reg par:cls, reg r121:V, reg c52:L, reg r123:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __5:cls, reg r124:V, reg p12:p(V +), reg m14:*, reg m15:V, reg c53:L, reg m17:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg which17:*, reg which18:V, reg c54:L, reg m19:V, reg which20:V, reg dr24:V, reg dc12:L, reg dx24:V, reg m21:V, reg dx25:V, reg n6:*, reg n7:V, reg __6:cls, reg r126:V, reg r127:V, reg __7:cls, reg r128:V, reg r129:V, reg p13:p(V +), reg mean:cls, reg rev1:cls, reg tree19:*, reg tree20:V, reg c55:L, reg tree22:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r131:V, reg p14:p(V +), reg r133:V, reg c56:L, reg r135:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg k28:*, reg k29:V, reg r136:V, reg k30:*, reg k31:V, reg r137:V, reg __8:cls, reg r138:V, reg p15:p(V +), reg r140:V, reg p16:p(V +), reg border3:*, reg border4:V, reg c57:L, reg border6:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg n8:*, reg n9:V, reg __9:cls, reg r142:V, reg p17:p(V +), reg r144:V, reg which21:cls, reg cluster13:*, reg cluster14:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r145:V, reg cluster17:V, reg r146:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r147:V, reg cluster20:V, reg r148:V, reg clustab2:*, reg clustab3:V, reg names:cls, reg r149:V, reg c58:L, reg cluster22:V, reg r151:V, reg dr32:V, reg dc16:L, reg dx32:V, reg cluster24:V, reg dx33:V, reg which22:*, reg which23:V, reg c59:L, reg cluster26:V, reg r153:V, reg which25:V, reg dr34:V, reg dc17:L, reg dx34:V, reg cluster28:V, reg r155:V, reg dx35:V, reg n10:*, reg n11:V, reg __10:cls, reg r156:V, reg __11:cls, reg r157:V, reg as_integer:cls, reg r158:V, reg r159:V, reg p18:p(V +), reg r161:V, reg l5:*, reg c60:L, reg i19:I, reg r163:V, reg l7:*, reg dr36:V, reg dc18:L, reg dx36:V, reg i21:I, reg dx37:V, reg n12:*, reg n13:V, reg ____:cls, reg r166:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r167:V, reg r168:V, reg retval:*, reg retval1:V, reg invisible:cls, reg r169:V |
    mkenv;
    st tree = tree;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(NULL) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
    which_isMissing = missing.0(which);
    if which_isMissing then L1(NULL) else L1(which);
  L1(which_orDefault):
    st which = which_orDefault;
    x_isMissing = missing.0(x);
    if x_isMissing then L2(NULL) else L2(x);
  L2(x_orDefault):
    st x = x_orDefault;
    h_isMissing = missing.0(h);
    if h_isMissing then L3(NULL) else L3(h);
  L3(h_orDefault):
    st h = h_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L4(2.0) else L4(border);
  L4(border_orDefault):
    st border = border_orDefault;
    cluster_isMissing = missing.0(cluster);
    if cluster_isMissing then L5(NULL) else L5(cluster);
  L5(cluster_orDefault):
    st cluster = cluster_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L55() else L56();
  L6(r1):
    r3 = `>`(r1, 1);
    c = `as.logical`(r3);
    if c then L7(c) else L59();
  L55():
    h1 = ld h;
    check L57() else D0();
  L56():
    r = dyn base(<sym h>);
    goto L6(r);
  D0():
    deopt 2 [h1];
  L7(c1):
    c9 = `as.logical`(c1);
    if c9 then L65() else L9();
  L57():
    h2 = force? h1;
    checkMissing(h2);
    length = ldf length in base;
    r2 = dyn length(h2);
    check L58() else D1();
  L59():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L60() else L61();
  D1():
    deopt 5 [r2];
  L8(c5, r5):
    r7 = `>`(r5, 1);
    c6 = `as.logical`(r7);
    c7 = `||`(c5, c6);
    goto L7(c7);
  L9():
    goto L10();
  L10():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L69() else L70();
  L58():
    goto L6(r2);
  L60():
    k1 = ld k;
    check L62() else D2();
  L61():
    r4 = dyn base1(<sym k>);
    goto L8(c, r4);
  L65():
    stop = ldf stop;
    check L66() else D4();
  D2():
    deopt 10 [c, k1];
  D4():
    deopt 18 [];
  L11(r11):
    r12 = `!`(r11);
    c11 = `as.logical`(r12);
    if c11 then L72() else L12();
  L62():
    k2 = force? k1;
    checkMissing(k2);
    length1 = ldf length in base;
    r6 = dyn length1(k2);
    check L63() else D3();
  L66():
    r8 = dyn stop("'k' and 'h' must be a scalar");
    check L67() else D5();
  L69():
    h3 = ld h;
    check L71() else D6();
  L70():
    r10 = dyn base2(<sym h>);
    goto L11(r10);
  D3():
    deopt 13 [c, r6];
  D5():
    deopt 20 [r8];
  D6():
    deopt 24 [h3];
  L12():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L90() else L91();
  L18():
    k9 = ld k;
    check L97() else D18();
  L63():
    goto L8(c, r6);
  L67():
    goto L10();
  L71():
    h4 = force? h3;
    checkMissing(h4);
    c10 = `==`(h4, NULL);
    goto L11(c10);
  L72():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L73() else L74();
  D18():
    deopt 66 [k9];
  L13(r14):
    r15 = `!`(r14);
    c13 = `as.logical`(r15);
    if c13 then L76() else L14();
  L19(r32):
    c16 = `as.logical`(r32);
    if c16 then L93() else L20();
  L73():
    k3 = ld k;
    check L75() else D7();
  L74():
    r13 = dyn base3(<sym k>);
    goto L13(r13);
  L90():
    k7 = ld k;
    check L92() else D15();
  L91():
    r31 = dyn base6(<sym k>);
    goto L19(r31);
  L97():
    k10 = force? k9;
    checkMissing(k10);
    r34 = `<`(k10, 2.0);
    c17 = `as.logical`(r34);
    if c17 then L21(c17) else L98();
  D7():
    deopt 29 [k3];
  D15():
    deopt 57 [k7];
  L14():
    goto L15();
  L15():
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L80() else L81();
  L20():
    goto L18();
  L21(c18):
    c31 = `as.logical`(c18);
    if c31 then L109() else L23();
  L75():
    k4 = force? k3;
    checkMissing(k4);
    c12 = `==`(k4, NULL);
    goto L13(c12);
  L76():
    stop1 = ldf stop;
    check L77() else D8();
  L92():
    k8 = force? k7;
    checkMissing(k8);
    c15 = `==`(k8, NULL);
    goto L19(c15);
  L93():
    stop2 = ldf stop;
    check L94() else D16();
  L98():
    k11 = ld k;
    check L99() else D19();
  D8():
    deopt 34 [];
  D16():
    deopt 61 [];
  D19():
    deopt 70 [c17, k11];
  L16(r19):
    st k = r19;
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L85() else L86();
  L23():
    goto L24();
  L24():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L113() else L114();
  L77():
    r16 = dyn stop1("specify exactly one of 'k' and 'h'");
    check L78() else D9();
  L80():
    which1 = ldf which;
    check L82() else D10();
  L81():
    r18 = dyn base4(<lang which(`<`(rev(`$`(tree, height)), h))>);
    goto L16(r18);
  L94():
    r33 = dyn stop2("specify exactly one of 'k' and 'h'");
    check L95() else D17();
  L99():
    k12 = force? k11;
    checkMissing(k12);
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L100() else L101();
  L109():
    stop3 = ldf stop;
    check L110() else D22();
  D9():
    deopt 36 [r16];
  D10():
    deopt 42 [];
  D17():
    deopt 63 [r33];
  D22():
    deopt 81 [];
  L17(r28):
    st k = r28;
    goto L18();
  L22(c22, k15, r36):
    r39 = `>`(k15, r36);
    c28 = `as.logical`(r39);
    c29 = `||`(c22, c28);
    goto L21(c29);
  L25(r50):
    c34 = `as.logical`(r50);
    if c34 then L116() else L26();
  L78():
    goto L15();
  L82():
    p1 = prom<V +>{
      rev = ldf rev;
      p = prom<V +>{
        tree1 = ld tree;
        tree2 = force? tree1;
        checkMissing(tree2);
        c14 = `is.object`(tree2);
        if c14 then L1() else L2(tree2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", tree2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(tree4):
        r20 = `$`(tree4, <sym height>);
        goto L0(r20);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r22 = dyn rev(p);
      h5 = ld h;
      h6 = force? h5;
      checkMissing(h6);
      r23 = `<`(r22, h6);
      return r23;
    };
    r25 = dyn which1(p1);
    check L83() else D11();
  L85():
    k5 = ld k;
    check L87() else D13();
  L86():
    r27 = dyn base5(<sym k>, 2.0);
    goto L17(r27);
  L95():
    goto L18();
  L100():
    tree5 = ld tree;
    check L102() else D20();
  L101():
    r35 = dyn base7(<lang `$`(tree, height)>);
    goto L22(c17, k12, r35);
  L110():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        sym8 = ldf length;
        base8 = ldf length in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r41):
        return r41;
      L1():
        tree9 = ld tree;
        tree10 = force? tree9;
        checkMissing(tree10);
        c32 = `is.object`(tree10);
        if c32 then L4() else L5(tree10);
      L2():
        r40 = dyn base8(<lang `$`(tree, height)>);
        goto L0(r40);
      L3(dx5):
        length3 = ldf length in base;
        r43 = dyn length3(dx5);
        goto L0(r43);
      L4():
        dr4 = tryDispatchBuiltin.1("$", tree10);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L6() else L5(dr4);
      L5(tree12):
        r42 = `$`(tree12, <sym height>);
        goto L3(r42);
      L6():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L3(dx4);
      };
      r45 = dyn gettextf("k must be between 2 and %d", p2);
      return r45;
    };
    r47 = dyn stop3[, domain](p3, NA_LGL);
    check L111() else D23();
  L113():
    cluster1 = ld cluster;
    check L115() else D24();
  L114():
    r49 = dyn base9(<sym cluster>);
    goto L25(r49);
  D11():
    deopt 44 [r25];
  D13():
    deopt 50 [k5];
  D20():
    deopt 73 [c17, k12, tree5];
  D23():
    deopt 85 [r47];
  D24():
    deopt 89 [cluster1];
  L26():
    goto L27();
  L27():
    table = ldf table;
    check L120() else D27();
  L83():
    min = ldf min in base;
    r26 = dyn min(r25);
    check L84() else D12();
  L87():
    k6 = force? k5;
    checkMissing(k6);
    max = ldf max in base;
    r29 = dyn max(k6, 2.0);
    check L88() else D14();
  L102():
    tree6 = force? tree5;
    checkMissing(tree6);
    c23 = `is.object`(tree6);
    if c23 then L104() else L105(c17, k12, tree6);
  L111():
    goto L24();
  L115():
    cluster2 = force? cluster1;
    checkMissing(cluster2);
    c33 = `==`(cluster2, NULL);
    goto L25(c33);
  L116():
    cutree = ldf cutree;
    check L117() else D25();
  D12():
    deopt 46 [r26];
  D14():
    deopt 54 [r29];
  D25():
    deopt 93 [];
  D27():
    deopt 102 [];
  L84():
    goto L16(r26);
  L88():
    goto L17(r29);
  L103(c27, k19, dx3):
    length2 = ldf length in base;
    r38 = dyn length2(dx3);
    check L107() else D21();
  L104():
    dr2 = tryDispatchBuiltin.1("$", tree6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L106() else L105(c17, k12, dr2);
  L105(c25, k17, tree8):
    r37 = `$`(tree8, <sym height>);
    goto L103(c25, k17, r37);
  L117():
    p4 = prom<V +>{
      tree13 = ld tree;
      tree14 = force? tree13;
      checkMissing(tree14);
      return tree14;
    };
    p5 = prom<V +>{
      k20 = ld k;
      k21 = force? k20;
      checkMissing(k21);
      return k21;
    };
    r53 = dyn cutree[, k](p4, p5);
    check L118() else D26();
  L120():
    p6 = prom<V +>{
      cluster3 = ld cluster;
      cluster4 = force? cluster3;
      checkMissing(cluster4);
      return cluster4;
    };
    r56 = dyn table(p6);
    check L121() else D28();
  D21():
    deopt 77 [c27, k19, r38];
  D26():
    deopt 97 [r53];
  D28():
    deopt 104 [r56];
  L106():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L103(c17, k12, dx2);
  L107():
    goto L22(c27, k19, r38);
  L118():
    st cluster = r53;
    goto L27();
  L121():
    c35 = `is.object`(r56);
    if c35 then L122() else L123(r56);
  L28(dx7):
    st clustab = dx7;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L127() else L128();
  L122():
    dr6 = tryDispatchBuiltin.1("[", r56);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L124() else L123(dr6);
  L123(r58):
    unique = ldf unique;
    check L125() else D29();
  D29():
    deopt 106 [r58];
  L29(r65):
    st m = r65;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L134() else L135();
  L124():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L28(dx6);
  L125():
    p7 = prom<V +>{
      cluster5 = ld cluster;
      cluster6 = force? cluster5;
      checkMissing(cluster6);
      c36 = `is.object`(cluster6);
      if c36 then L1() else L2(cluster6);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", cluster6);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(cluster8):
      tree15 = ld tree;
      tree16 = force? tree15;
      checkMissing(tree16);
      c37 = `is.object`(tree16);
      if c37 then L5() else L6(cluster8, tree16);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    L4(cluster12, dx11):
      __ = ldf `[` in base;
      r60 = dyn __(cluster12, dx11);
      goto L0(r60);
    L5():
      dr10 = tryDispatchBuiltin.1("$", tree16);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L7() else L6(cluster8, dr10);
    L6(cluster10, tree18):
      r59 = `$`(tree18, <sym order>);
      goto L4(cluster10, r59);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L4(cluster8, dx10);
    };
    r62 = dyn unique(p7);
    check L126() else D30();
  L127():
    sym11 = ldf cumsum;
    base11 = ldf cumsum in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L129() else L130();
  L128():
    r64 = dyn base10(0.0, <lang cumsum(clustab)>);
    goto L29(r64);
  D30():
    deopt 108 [r58, r62];
  L30(r67):
    c38 = ldf c in base;
    r69 = dyn c38(0.0, r67);
    check L133() else D33();
  L31(r71):
    r72 = `!`(r71);
    c40 = `as.logical`(r72);
    if c40 then L137() else L32();
  L126():
    __1 = ldf `[` in base;
    r63 = dyn __1(r58, r62);
    goto L28(r63);
  L129():
    clustab = ld clustab;
    check L131() else D31();
  L130():
    r66 = dyn base11(<sym clustab>);
    goto L30(r66);
  L134():
    x1 = ld x;
    check L136() else D34();
  L135():
    r70 = dyn base12(<sym x>);
    goto L31(r70);
  D31():
    deopt 116 [clustab];
  D33():
    deopt 121 [r69];
  D34():
    deopt 124 [x1];
  L32():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L160() else L161();
  L41():
    sym17 = ldf any;
    base17 = ldf any in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L166() else L167();
  L131():
    clustab1 = force? clustab;
    checkMissing(clustab1);
    cumsum = ldf cumsum in base;
    r68 = dyn cumsum(clustab1);
    check L132() else D32();
  L133():
    goto L29(r69);
  L136():
    x2 = force? x1;
    checkMissing(x2);
    c39 = `==`(x2, NULL);
    goto L31(c39);
  L137():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L138() else L139();
  D32():
    deopt 119 [r68];
  L33(r74):
    r75 = `!`(r74);
    c42 = `as.logical`(r75);
    if c42 then L141() else L34();
  L42(r94):
    c47 = `as.logical`(r94);
    if c47 then L163() else L43();
  L44(r97):
    c48 = `as.logical`(r97);
    if c48 then L171() else L45();
  L132():
    goto L30(r68);
  L138():
    which2 = ld which;
    check L140() else D35();
  L139():
    r73 = dyn base13(<sym which>);
    goto L33(r73);
  L160():
    which5 = ld which;
    check L162() else D44();
  L161():
    r93 = dyn base16(<sym which>);
    goto L42(r93);
  L166():
    which7 = ld which;
    check L168() else D46();
  L167():
    r96 = dyn base17(<lang `>`(which, k)>);
    goto L44(r96);
  D35():
    deopt 129 [which2];
  D44():
    deopt 163 [which5];
  D46():
    deopt 175 [which7];
  L34():
    goto L35();
  L35():
    x3 = ld x;
    check L145() else D38();
  L43():
    goto L41();
  L45():
    goto L46();
  L46():
    sym18 = ldf rep_len;
    base18 = ldf rep_len in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L175() else L176();
  L140():
    which3 = force? which2;
    checkMissing(which3);
    c41 = `==`(which3, NULL);
    goto L33(c41);
  L141():
    stop4 = ldf stop;
    check L142() else D36();
  L162():
    which6 = force? which5;
    checkMissing(which6);
    c46 = `==`(which6, NULL);
    goto L42(c46);
  L163():
    k22 = ld k;
    check L164() else D45();
  L168():
    which8 = force? which7;
    checkMissing(which8);
    k24 = ld k;
    check L169() else D47();
  L171():
    stop5 = ldf stop;
    check L172() else D49();
  D36():
    deopt 134 [];
  D38():
    deopt 139 [x3];
  D45():
    deopt 167 [1, k22];
  D47():
    deopt 176 [which8, k24];
  D49():
    deopt 182 [];
  L47(r106):
    st border = r106;
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L183() else L184();
  L142():
    r76 = dyn stop4("specify exactly one of 'which' and 'x'");
    check L143() else D37();
  L145():
    x4 = force? x3;
    checkMissing(x4);
    st which = x4;
    sym14 = ldf seq_along;
    base14 = ldf seq_along in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L146() else L147();
  L164():
    k23 = force? k22;
    checkMissing(k23);
    r95 = `:`(1, k23);
    st which = r95;
    goto L41();
  L169():
    k25 = force? k24;
    checkMissing(k25);
    r98 = `>`(which8, k25);
    any = ldf any in base;
    r99 = dyn any(r98);
    check L170() else D48();
  L172():
    p10 = prom<V +>{
      gettextf1 = ldf gettextf;
      p9 = prom<V +>{
        k26 = ld k;
        k27 = force? k26;
        checkMissing(k27);
        return k27;
      };
      r101 = dyn gettextf1("all elements of 'which' must be between 1 and %d", p9);
      return r101;
    };
    r103 = dyn stop5[, domain](p10, NA_LGL);
    check L173() else D50();
  L175():
    border1 = ld border;
    check L177() else D51();
  L176():
    r105 = dyn base18(<sym border>, <lang length(which)>);
    goto L47(r105);
  D37():
    deopt 136 [r76];
  D48():
    deopt 180 [r99];
  D50():
    deopt 186 [r103];
  D51():
    deopt 191 [border1];
  L36(r79):
    s = toForSeq(r79);
    l = length(s);
    i = 0;
    goto L37(i);
  L49(r112):
    st retval = r112;
    sym21 = ldf seq_along;
    base21 = ldf seq_along in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L186() else L187();
  L143():
    goto L35();
  L146():
    x5 = ld x;
    check L148() else D39();
  L147():
    r78 = dyn base14(<sym x>);
    goto L36(r78);
  L170():
    goto L44(r99);
  L173():
    goto L46();
  L177():
    border2 = force? border1;
    checkMissing(border2);
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L178() else L179();
  L183():
    list = ldf list in base;
    r113 = dyn list();
    check L185() else D55();
  L184():
    r111 = dyn base20();
    goto L49(r111);
  D39():
    deopt 143 [x5];
  D55():
    deopt 205 [r113];
  L37(i1):
    i2 = `+`.1(i1, 1);
    c43 = `<`.1(l, i2);
    if c43 then L149() else L40();
  L48(r108):
    rep_len = ldf rep_len in base;
    r110 = dyn rep_len(border2, r108);
    check L182() else D54();
  L50(r115):
    s1 = toForSeq(r115);
    l4 = length(s1);
    i13 = 0;
    goto L51(i13);
  L148():
    x6 = force? x5;
    checkMissing(x6);
    r80 = seq_along(x6);
    goto L36(r80);
  L178():
    which9 = ld which;
    check L180() else D52();
  L179():
    r107 = dyn base19(<sym which>);
    goto L48(r107);
  L185():
    goto L49(r113);
  L186():
    which11 = ld which;
    check L188() else D56();
  L187():
    r114 = dyn base21(<sym which>);
    goto L50(r114);
  D52():
    deopt 195 [which9];
  D54():
    deopt 200 [r110];
  D56():
    deopt 208 [which11];
  L40():
    x7 = `[[`(s, i2, NULL, TRUE);
    st n = x7;
    sym15 = ldf max;
    base15 = ldf max in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L150() else L151();
  L51(i14):
    i15 = `+`.1(i14, 1);
    c49 = `<`.1(l4, i15);
    if c49 then L189() else L53();
  L149():
    goto L41();
  L180():
    which10 = force? which9;
    checkMissing(which10);
    length4 = ldf length in base;
    r109 = dyn length4(which10);
    check L181() else D53();
  L182():
    goto L47(r110);
  L188():
    which12 = force? which11;
    checkMissing(which12);
    r116 = seq_along(which12);
    goto L50(r116);
  D53():
    deopt 198 [r109];
  L38(i7, r82):
    l1 = ld which;
    c45 = `is.object`(l1);
    if c45 then L155() else L156(i7, r82, l1);
  L53():
    x12 = `[[`(s1, i15, NULL, TRUE);
    st n = x12;
    rect = ldf rect;
    check L190() else D57();
  L150():
    which4 = ldf which;
    check L152() else D40();
  L151():
    r81 = dyn base15(<lang which(`<`(m, `[`(x, n)))>);
    goto L38(i2, r81);
  L181():
    goto L48(r109);
  L189():
    sym24 = ldf invisible;
    base24 = ldf invisible in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L198() else L199();
  D40():
    deopt 149 [i2];
  D57():
    deopt 212 [i15];
  L39(i11, dx15):
    st which = dx15;
    goto L37(i11);
  L54(r168):
    popenv;
    return r168;
  L152():
    p8 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      c44 = `is.object`(x9);
      if c44 then L1() else L2(m1, x9);
    L0(m5, dx13):
      r84 = `<`(m5, dx13);
      return r84;
    L1():
      dr12 = tryDispatchBuiltin.1("[", x9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(m1, dr12);
    L2(m3, x11):
      n = ld n;
      n1 = force? n;
      __2 = ldf `[` in base;
      r83 = dyn __2(x11, n1);
      goto L0(m3, r83);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(m1, dx12);
    };
    r86 = dyn which4(p8);
    check L153() else D41();
  L155():
    dr14 = tryDispatchBuiltin.0("[<-", l1, r82);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L157() else L156(i7, r82, dr14);
  L156(i9, r89, l3):
    n2 = ld n;
    check L158() else D43();
  L190():
    p11 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      c50 = `is.object`(m7);
      if c50 then L2() else L3(m7);
    L0(dx17):
      r119 = `+`(dx17, 0.66);
      return r119;
    L2():
      dr16 = tryDispatchBuiltin.1("[", m7);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(m9):
      which13 = ld which;
      which14 = force? which13;
      checkMissing(which14);
      c51 = `is.object`(which14);
      if c51 then L5() else L6(m9, which14);
    L1(m13, dx19):
      __4 = ldf `[` in base;
      r118 = dyn __4(m13, dx19);
      goto L0(r118);
    L4():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    L5():
      dr18 = tryDispatchBuiltin.1("[", which14);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(m9, dr18);
    L6(m11, which16):
      n4 = ld n;
      n5 = force? n4;
      __3 = ldf `[` in base;
      r117 = dyn __3(which16, n5);
      goto L1(m11, r117);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L1(m9, dx18);
    };
    p12 = prom<V +>{
      par = ldf par;
      r121 = dyn par("usr");
      c52 = `is.object`(r121);
      if c52 then L1() else L2(r121);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[", r121);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(r123):
      __5 = ldf `[` in base;
      r124 = dyn __5(r123, 3);
      goto L0(r124);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    p13 = prom<V +>{
      m14 = ld m;
      m15 = force? m14;
      checkMissing(m15);
      c53 = `is.object`(m15);
      if c53 then L2() else L3(m15);
    L0(dx23):
      r129 = `+`(dx23, 0.33);
      return r129;
    L2():
      dr22 = tryDispatchBuiltin.1("[", m15);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L4() else L3(dr22);
    L3(m17):
      which17 = ld which;
      which18 = force? which17;
      checkMissing(which18);
      c54 = `is.object`(which18);
      if c54 then L5() else L6(m17, which18);
    L1(m21, dx25):
      r127 = `+`(dx25, 1.0);
      __7 = ldf `[` in base;
      r128 = dyn __7(m21, r127);
      goto L0(r128);
    L4():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    L5():
      dr24 = tryDispatchBuiltin.1("[", which18);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L7() else L6(m17, dr24);
    L6(m19, which20):
      n6 = ld n;
      n7 = force? n6;
      __6 = ldf `[` in base;
      r126 = dyn __6(which20, n7);
      goto L1(m19, r126);
    L7():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L1(m17, dx24);
    };
    p16 = prom<V +>{
      mean = ldf mean;
      p15 = prom<V +>{
        rev1 = ldf rev;
        p14 = prom<V +>{
          tree19 = ld tree;
          tree20 = force? tree19;
          checkMissing(tree20);
          c55 = `is.object`(tree20);
          if c55 then L1() else L2(tree20);
        L0(dx27):
          return dx27;
        L1():
          dr26 = tryDispatchBuiltin.1("$", tree20);
          dc13 = getTryDispatchBuiltinDispatched(dr26);
          if dc13 then L3() else L2(dr26);
        L2(tree22):
          r131 = `$`(tree22, <sym height>);
          goto L0(r131);
        L3():
          dx26 = getTryDispatchBuiltinValue(dr26);
          goto L0(dx26);
        };
        r133 = dyn rev1(p14);
        c56 = `is.object`(r133);
        if c56 then L1() else L2(r133);
      L0(dx29):
        return dx29;
      L1():
        dr28 = tryDispatchBuiltin.1("[", r133);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L3() else L2(dr28);
      L2(r135):
        k28 = ld k;
        k29 = force? k28;
        checkMissing(k29);
        r136 = `-`(k29, 1.0);
        k30 = ld k;
        k31 = force? k30;
        checkMissing(k31);
        r137 = `:`(r136, k31);
        __8 = ldf `[` in base;
        r138 = dyn __8(r135, r137);
        goto L0(r138);
      L3():
        dx28 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx28);
      };
      r140 = dyn mean(p15);
      return r140;
    };
    p17 = prom<V +>{
      border3 = ld border;
      border4 = force? border3;
      checkMissing(border4);
      c57 = `is.object`(border4);
      if c57 then L1() else L2(border4);
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("[", border4);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(border6):
      n8 = ld n;
      n9 = force? n8;
      __9 = ldf `[` in base;
      r142 = dyn __9(border6, n9);
      goto L0(r142);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    r144 = dyn rect[, , , , border](p11, p12, p13, p16, p17);
    check L191() else D58();
  L198():
    retval = ld retval;
    check L200() else D62();
  L199():
    r167 = dyn base24(<sym retval>);
    goto L54(r167);
  D41():
    deopt 151 [i2, r86];
  D43():
    deopt 155 [i9, r89, l3, r82, n2];
  D58():
    deopt 219 [i15, r144];
  D62():
    deopt 234 [retval];
  L153():
    max1 = ldf max in base;
    r87 = dyn max1(r86);
    check L154() else D42();
  L157():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L39(i7, dx14);
  L158():
    n3 = force? n2;
    ___ = ldf `[<-` in base;
    r92 = dyn ___(l3, r82, n3);
    goto L39(i9, r92);
  L191():
    which21 = ldf which;
    check L192() else D59();
  L200():
    retval1 = force? retval;
    checkMissing(retval1);
    invisible = ldf invisible in base;
    r169 = dyn invisible(retval1);
    check L201() else D63();
  D42():
    deopt 153 [i2, r87];
  D59():
    deopt 221 [i15];
  D63():
    deopt 237 [r169];
  L154():
    goto L38(i2, r87);
  L192():
    p18 = prom<V +>{
      cluster13 = ld cluster;
      cluster14 = force? cluster13;
      checkMissing(cluster14);
      sym22 = ldf `as.integer`;
      base22 = ldf `as.integer` in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L4() else L5();
    L0(cluster17, r146):
      r159 = `==`(cluster17, r146);
      return r159;
    L4():
      sym23 = ldf names;
      base23 = ldf names in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L6() else L7();
    L5():
      r145 = dyn base22(<lang `[`(names(clustab), `[`(which, n))>);
      goto L0(cluster14, r145);
    L1(cluster20, r148):
      c58 = `is.object`(r148);
      if c58 then L8() else L9(cluster20, r148);
    L6():
      clustab2 = ld clustab;
      clustab3 = force? clustab2;
      checkMissing(clustab3);
      names = ldf names in base;
      r149 = dyn names(clustab3);
      goto L1(cluster14, r149);
    L7():
      r147 = dyn base23(<sym clustab>);
      goto L1(cluster14, r147);
    L2(cluster24, dx33):
      as_integer = ldf `as.integer` in base;
      r158 = dyn as_integer(dx33);
      goto L0(cluster24, r158);
    L8():
      dr32 = tryDispatchBuiltin.1("[", r148);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L10() else L9(cluster20, dr32);
    L9(cluster22, r151):
      which22 = ld which;
      which23 = force? which22;
      checkMissing(which23);
      c59 = `is.object`(which23);
      if c59 then L11() else L12(cluster22, r151, which23);
    L3(cluster28, r155, dx35):
      __11 = ldf `[` in base;
      r157 = dyn __11(r155, dx35);
      goto L2(cluster28, r157);
    L10():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L2(cluster20, dx32);
    L11():
      dr34 = tryDispatchBuiltin.1("[", which23);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L13() else L12(cluster22, r151, dr34);
    L12(cluster26, r153, which25):
      n10 = ld n;
      n11 = force? n10;
      __10 = ldf `[` in base;
      r156 = dyn __10(which25, n11);
      goto L3(cluster26, r153, r156);
    L13():
      dx34 = getTryDispatchBuiltinValue(dr34);
      goto L3(cluster22, r151, dx34);
    };
    r161 = dyn which21(p18);
    check L193() else D60();
  L201():
    goto L54(r169);
  D60():
    deopt 223 [i15, r161];
  L193():
    l5 = ld retval;
    c60 = `is.object`(l5);
    if c60 then L194() else L195(i15, r161, l5);
  L52(i21, dx37):
    st retval = dx37;
    goto L51(i21);
  L194():
    dr36 = tryDispatchBuiltin.0("[[<-", l5, r161);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L196() else L195(i15, r161, dr36);
  L195(i19, r163, l7):
    n12 = ld n;
    check L197() else D61();
  D61():
    deopt 225 [i19, r163, l7, r161, n12];
  L196():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L52(i15, dx36);
  L197():
    n13 = force? n12;
    ____ = ldf `[[<-` in base;
    r166 = dyn ____(l7, r161, n13);
    goto L52(i19, r166);
  }
}