fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-498831807`;
    st `qr.coef` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-498831807`(qr, y) {
  (reg qr:*, reg y:*) -+> V { var qr:*, var y:*, reg is_qr:cls, reg qr1:*, reg qr2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg nrow:cls, reg qr3:*, reg qr4:V, reg c1:L, reg qr6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg p1:p(V +), reg r9:V, reg as_integer:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg n:*, reg n1:V, reg is_na:cls, reg r13:V, reg c2:L, reg stop1:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg ncol:cls, reg qr7:*, reg qr8:V, reg c3:L, reg qr10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r18:V, reg p2:p(V +), reg r20:V, reg as_integer1:cls, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg p3:*, reg p4:V, reg is_na1:cls, reg r24:V, reg c4:L, reg stop2:cls, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg qr11:*, reg qr12:V, reg c5:L, reg qr14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r29:V, reg as_integer2:cls, reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg k:*, reg k1:V, reg is_na2:cls, reg r33:V, reg c6:L, reg stop3:cls, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg y1:*, reg y2:V, reg is_matrix:cls, reg r38:V, reg im:*, reg im1:V, reg r39:V, reg c7:L, reg as_matrix:cls, reg y3:*, reg y4:V, reg p5:p(V +), reg r41:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg ncol1:cls, reg y5:*, reg y6:V, reg p6:p(V +), reg r46:V, reg as_integer3:cls, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg ny:*, reg ny1:V, reg is_na3:cls, reg r50:V, reg c8:L, reg stop4:cls, reg r51:V, reg nrow1:cls, reg y7:*, reg y8:V, reg p7:p(V +), reg r54:V, reg n2:*, reg n3:V, reg r55:V, reg c9:L, reg stop5:cls, reg r56:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg qr15:*, reg qr16:V, reg c10:L, reg qr18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r60:V, reg c11:L, reg matrix:cls, reg isC:*, reg isC1:V, reg c12:L, reg p8:p(V +), reg p9:*, reg p10:V, reg p11:p(V +), reg ny2:*, reg ny3:V, reg p12:p(V +), reg r64:V, reg p13:*, reg p14:V, reg n4:*, reg n5:V, reg r65:V, reg c13:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg r67:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r68:V, reg r69:V, reg n6:*, reg n7:V, reg r70:I, reg sym12:cls, reg base12:cls, reg guard12:L, reg r71:V, reg r72:V, reg rep:cls, reg r73:V, reg c14:cls, reg r74:V, reg r75:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r76:V, reg p15:*, reg p16:V, reg r77:I, reg sym14:cls, reg base14:cls, reg guard14:L, reg r78:V, reg r79:V, reg colnames:cls, reg qr19:*, reg qr20:V, reg c15:L, reg qr22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r80:V, reg p17:p(V +), reg r82:V, reg c16:V, reg r83:V, reg c17:L, reg p18:*, reg p19:V, reg r85:V, reg c18:L, reg isC2:*, reg isC3:V, reg c19:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r87:V, reg r88:V, reg qr23:*, reg qr24:V, reg y9:*, reg y10:V, reg qr_coef_cmplx:cls, reg r89:V, reg c20:L, reg r91:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ix:*, reg ix1:V, reg __:cls, reg r92:V, reg l:*, reg c21:L, reg dx13:V, reg l2:*, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg dx17:V, reg qr25:*, reg qr26:V, reg c22:L, reg dx20:V, reg l4:*, reg dx21:V, reg qr28:V, reg dr14:V, reg dc7:L, reg dx24:V, reg dx25:V, reg dx26:V, reg dx27:V, reg r93:V, reg ___:cls, reg r94:V, reg isTRUE:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r95:V, reg r96:V, reg qr29:*, reg qr30:V, reg attr:cls, reg r97:V, reg p20:p(V +), reg r99:V, reg c23:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r100:V, reg r101:V, reg qr31:*, reg qr32:V, reg y11:*, reg y12:V, reg qr_coef_real:cls, reg r102:V, reg c24:L, reg r104:V, reg dr16:V, reg dc8:L, reg dx28:V, reg dx29:V, reg ix2:*, reg ix3:V, reg __1:cls, reg r105:V, reg l7:*, reg c25:L, reg dx31:V, reg l9:*, reg dr18:V, reg dc9:L, reg dx33:V, reg dx34:V, reg dx35:V, reg qr33:*, reg qr34:V, reg c26:L, reg dx38:V, reg l11:*, reg dx39:V, reg qr36:V, reg dr20:V, reg dc10:L, reg dx42:V, reg dx43:V, reg dx44:V, reg dx45:V, reg r106:V, reg ___1:cls, reg r107:V, reg k2:*, reg k3:V, reg r108:V, reg c27:L, reg l14:*, reg storage_mode__:cls, reg r109:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r110:V, reg r111:V, reg _F_dqrcf:*, reg _F_dqrcf1:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r112:V, reg r113:V, reg qr37:*, reg qr38:V, reg c28:L, reg qr40:V, reg dr22:V, reg dc11:L, reg dx46:V, reg dx47:V, reg r114:V, reg as_double:cls, reg r115:V, reg n8:*, reg n9:V, reg k4:*, reg k5:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r116:V, reg r117:V, reg qr41:*, reg qr42:V, reg c29:L, reg qr44:V, reg dr24:V, reg dc12:L, reg dx48:V, reg dx49:V, reg r118:V, reg as_double1:cls, reg r119:V, reg y13:*, reg y14:V, reg ny4:*, reg ny5:V, reg matrix1:cls, reg k6:*, reg k7:V, reg p21:p(V +), reg ny6:*, reg ny7:V, reg p22:p(V +), reg r122:V, reg integer:cls, reg r123:V, reg _Fortran:cls, reg r124:V, reg c30:L, reg r126:V, reg dr26:V, reg dc13:L, reg dx50:V, reg dx51:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r129:V, reg r130:V, reg r131:V, reg c31:cls, reg r132:V, reg __2:cls, reg r133:V, reg z:*, reg z1:V, reg c32:L, reg z3:V, reg dr28:V, reg dc14:L, reg dx52:V, reg dx53:V, reg r134:V, reg c33:L, reg stop6:cls, reg r135:V, reg k8:*, reg k9:V, reg p23:*, reg p24:V, reg r137:V, reg pivotted:*, reg pivotted1:V, reg c34:L, reg z4:*, reg z5:V, reg c35:L, reg z7:V, reg dr30:V, reg dc15:L, reg dx54:V, reg dx55:V, reg r138:V, reg l15:*, reg c36:L, reg dx57:V, reg l17:*, reg dr32:V, reg dc16:L, reg dx59:V, reg dx60:V, reg dx61:V, reg qr45:*, reg qr46:V, reg c37:L, reg dx64:V, reg l19:*, reg dx65:V, reg qr48:V, reg dr34:V, reg dc17:L, reg dx68:V, reg dx69:V, reg l21:*, reg dx70:V, reg dx71:V, reg r139:V, reg c38:L, reg dx75:V, reg l23:*, reg dx76:V, reg dx77:V, reg dr36:V, reg dc18:L, reg dx80:V, reg dx81:V, reg dx82:V, reg dx83:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r140:V, reg dx90:V, reg l28:*, reg dx91:V, reg dx92:V, reg r141:V, reg k10:*, reg k11:V, reg r142:I, reg __3:cls, reg r143:V, reg ___2:cls, reg r144:V, reg dx93:V, reg z8:*, reg z9:V, reg c39:L, reg z11:V, reg dr38:V, reg dc19:L, reg dx94:V, reg dx95:V, reg r145:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r146:V, reg r147:V, reg nam:*, reg nam1:V, reg c40:V, reg r148:V, reg c41:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r149:V, reg r150:V, reg pivotted2:*, reg pivotted3:V, reg is_na4:cls, reg r151:V, reg c42:L, reg is_unsorted:cls, reg qr49:*, reg qr50:V, reg c43:L, reg qr52:V, reg dr40:V, reg dc20:L, reg dx96:V, reg dx97:V, reg r152:V, reg p25:p(V +), reg r154:V, reg pivotted4:*, reg pivotted5:V, reg c44:L, reg nam2:*, reg nam3:V, reg l29:*, reg rownames:cls, reg r156:V, reg c45:L, reg nam5:V, reg l31:*, reg r158:V, reg dr42:V, reg dc21:L, reg dx98:V, reg nam7:V, reg l33:*, reg dx99:V, reg qr53:*, reg qr54:V, reg c46:L, reg nam10:V, reg l35:*, reg r160:V, reg nam11:V, reg qr56:V, reg dr44:V, reg dc22:L, reg dx100:V, reg nam14:V, reg l37:*, reg r162:V, reg nam15:V, reg dx101:V, reg r163:V, reg ___3:cls, reg r164:V, reg rownames__:cls, reg r165:V, reg nam16:V, reg nam17:*, reg nam18:V, reg l38:*, reg rownames__1:cls, reg r166:V, reg im2:*, reg im3:V, reg c47:L, reg c49:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r167:V, reg c52:L, reg r168:V, reg colnames1:cls, reg y15:*, reg y16:V, reg p26:p(V +), reg r170:V, reg c53:V, reg r171:V, reg c54:L, reg c55:V, reg c57:L, reg nam20:*, reg nam21:V, reg l39:*, reg colnames__:cls, reg r172:V, reg im4:*, reg im5:V, reg c58:L, reg coef:*, reg coef1:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r173:V, reg r174:V, reg coef2:*, reg coef3:V, reg drop:cls, reg r175:V |
    mkenv;
    st qr = qr;
    st y = y;
    is_qr = ldf `is.qr`;
    check L70() else D0();
  D0():
    deopt 1 [];
  L70():
    p = prom<V +>{
      qr1 = ld qr;
      qr2 = force? qr1;
      checkMissing(qr2);
      return qr2;
    };
    r1 = dyn is_qr(p);
    check L71() else D1();
  D1():
    deopt 3 [r1];
  L71():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L72() else L0();
  L0():
    goto L1();
  L1():
    sym = ldf `as.integer`;
    base = ldf `as.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L76() else L77();
  L72():
    stop = ldf stop;
    check L73() else D2();
  D2():
    deopt 6 [];
  L2(r6):
    st n = r6;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L81() else L82();
  L73():
    r3 = dyn stop("first argument must be a QR decomposition");
    check L74() else D3();
  L76():
    nrow = ldf nrow;
    check L78() else D4();
  L77():
    r5 = dyn base(<lang nrow(`$`(qr, qr))>);
    goto L2(r5);
  D3():
    deopt 8 [r3];
  D4():
    deopt 14 [];
  L3(r12):
    c2 = `as.logical`(r12);
    if c2 then L85() else L4();
  L74():
    goto L1();
  L78():
    p1 = prom<V +>{
      qr3 = ld qr;
      qr4 = force? qr3;
      checkMissing(qr4);
      c1 = `is.object`(qr4);
      if c1 then L1() else L2(qr4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", qr4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(qr6):
      r7 = `$`(qr6, <sym qr>);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r9 = dyn nrow(p1);
    check L79() else D5();
  L81():
    n = ld n;
    check L83() else D7();
  L82():
    r11 = dyn base1(<sym n>);
    goto L3(r11);
  D5():
    deopt 16 [r9];
  D7():
    deopt 22 [n];
  L4():
    goto L5();
  L5():
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L89() else L90();
  L79():
    as_integer = ldf `as.integer` in base;
    r10 = dyn as_integer(r9);
    check L80() else D6();
  L83():
    n1 = force? n;
    checkMissing(n1);
    is_na = ldf `is.na` in base;
    r13 = dyn is_na(n1);
    check L84() else D8();
  L85():
    stop1 = ldf stop;
    check L86() else D9();
  D6():
    deopt 18 [r10];
  D8():
    deopt 25 [r13];
  D9():
    deopt 27 [];
  L6(r17):
    st p = r17;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L94() else L95();
  L80():
    goto L2(r10);
  L84():
    goto L3(r13);
  L86():
    r14 = dyn stop1("invalid nrow(qr$qr)");
    check L87() else D10();
  L89():
    ncol = ldf ncol;
    check L91() else D11();
  L90():
    r16 = dyn base2(<lang ncol(`$`(qr, qr))>);
    goto L6(r16);
  D10():
    deopt 29 [r14];
  D11():
    deopt 35 [];
  L7(r23):
    c4 = `as.logical`(r23);
    if c4 then L98() else L8();
  L87():
    goto L5();
  L91():
    p2 = prom<V +>{
      qr7 = ld qr;
      qr8 = force? qr7;
      checkMissing(qr8);
      c3 = `is.object`(qr8);
      if c3 then L1() else L2(qr8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", qr8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(qr10):
      r18 = `$`(qr10, <sym qr>);
      goto L0(r18);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r20 = dyn ncol(p2);
    check L92() else D12();
  L94():
    p3 = ld p;
    check L96() else D14();
  L95():
    r22 = dyn base3(<sym p>);
    goto L7(r22);
  D12():
    deopt 37 [r20];
  D14():
    deopt 43 [p3];
  L8():
    goto L9();
  L9():
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L102() else L103();
  L92():
    as_integer1 = ldf `as.integer` in base;
    r21 = dyn as_integer1(r20);
    check L93() else D13();
  L96():
    p4 = force? p3;
    checkMissing(p4);
    is_na1 = ldf `is.na` in base;
    r24 = dyn is_na1(p4);
    check L97() else D15();
  L98():
    stop2 = ldf stop;
    check L99() else D16();
  D13():
    deopt 39 [r21];
  D15():
    deopt 46 [r24];
  D16():
    deopt 48 [];
  L10(r28):
    st k = r28;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L110() else L111();
  L93():
    goto L6(r21);
  L97():
    goto L7(r24);
  L99():
    r25 = dyn stop2("invalid ncol(qr$qr)");
    check L100() else D17();
  L102():
    qr11 = ld qr;
    check L104() else D18();
  L103():
    r27 = dyn base4(<lang `$`(qr, rank)>);
    goto L10(r27);
  D17():
    deopt 50 [r25];
  D18():
    deopt 55 [qr11];
  L11(r32):
    c6 = `as.logical`(r32);
    if c6 then L114() else L12();
  L100():
    goto L9();
  L104():
    qr12 = force? qr11;
    checkMissing(qr12);
    c5 = `is.object`(qr12);
    if c5 then L106() else L107(qr12);
  L110():
    k = ld k;
    check L112() else D20();
  L111():
    r31 = dyn base5(<sym k>);
    goto L11(r31);
  D20():
    deopt 63 [k];
  L12():
    goto L13();
  L13():
    sym6 = ldf `is.matrix`;
    base6 = ldf `is.matrix` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L118() else L119();
  L105(dx5):
    as_integer2 = ldf `as.integer` in base;
    r30 = dyn as_integer2(dx5);
    check L109() else D19();
  L106():
    dr4 = tryDispatchBuiltin.1("$", qr12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L108() else L107(dr4);
  L107(qr14):
    r29 = `$`(qr14, <sym rank>);
    goto L105(r29);
  L112():
    k1 = force? k;
    checkMissing(k1);
    is_na2 = ldf `is.na` in base;
    r33 = dyn is_na2(k1);
    check L113() else D21();
  L114():
    stop3 = ldf stop;
    check L115() else D22();
  D19():
    deopt 59 [r30];
  D21():
    deopt 66 [r33];
  D22():
    deopt 68 [];
  L14(r37):
    st im = r37;
    im = ld im;
    check L122() else D26();
  L108():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L105(dx4);
  L109():
    goto L10(r30);
  L113():
    goto L11(r33);
  L115():
    r34 = dyn stop3("invalid ncol(qr$rank)");
    check L116() else D23();
  L118():
    y1 = ld y;
    check L120() else D24();
  L119():
    r36 = dyn base6(<sym y>);
    goto L14(r36);
  D23():
    deopt 70 [r34];
  D24():
    deopt 75 [y1];
  D26():
    deopt 80 [im];
  L116():
    goto L13();
  L120():
    y2 = force? y1;
    checkMissing(y2);
    is_matrix = ldf `is.matrix` in base;
    r38 = dyn is_matrix(y2);
    check L121() else D25();
  L122():
    im1 = force? im;
    checkMissing(im1);
    r39 = `!`(im1);
    c7 = `as.logical`(r39);
    if c7 then L123() else L15();
  D25():
    deopt 78 [r38];
  L15():
    goto L16();
  L16():
    sym7 = ldf `as.integer`;
    base7 = ldf `as.integer` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L127() else L128();
  L121():
    goto L14(r38);
  L123():
    as_matrix = ldf `as.matrix`;
    check L124() else D27();
  D27():
    deopt 84 [];
  L17(r44):
    st ny = r44;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L132() else L133();
  L124():
    p5 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r41 = dyn as_matrix(p5);
    check L125() else D28();
  L127():
    ncol1 = ldf ncol;
    check L129() else D29();
  L128():
    r43 = dyn base7(<lang ncol(y)>);
    goto L17(r43);
  D28():
    deopt 86 [r41];
  D29():
    deopt 93 [];
  L18(r49):
    c8 = `as.logical`(r49);
    if c8 then L136() else L19();
  L125():
    st y = r41;
    goto L16();
  L129():
    p6 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r46 = dyn ncol1(p6);
    check L130() else D30();
  L132():
    ny = ld ny;
    check L134() else D32();
  L133():
    r48 = dyn base8(<sym ny>);
    goto L18(r48);
  D30():
    deopt 95 [r46];
  D32():
    deopt 101 [ny];
  L19():
    goto L20();
  L20():
    nrow1 = ldf nrow;
    check L140() else D36();
  L130():
    as_integer3 = ldf `as.integer` in base;
    r47 = dyn as_integer3(r46);
    check L131() else D31();
  L134():
    ny1 = force? ny;
    checkMissing(ny1);
    is_na3 = ldf `is.na` in base;
    r50 = dyn is_na3(ny1);
    check L135() else D33();
  L136():
    stop4 = ldf stop;
    check L137() else D34();
  D31():
    deopt 97 [r47];
  D33():
    deopt 104 [r50];
  D34():
    deopt 106 [];
  D36():
    deopt 112 [];
  L131():
    goto L17(r47);
  L135():
    goto L18(r50);
  L137():
    r51 = dyn stop4("invalid ncol(y)");
    check L138() else D35();
  L140():
    p7 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    r54 = dyn nrow1(p7);
    check L141() else D37();
  D35():
    deopt 108 [r51];
  D37():
    deopt 114 [r54];
  L138():
    goto L20();
  L141():
    n2 = ld n;
    check L142() else D38();
  D38():
    deopt 114 [r54, n2];
  L142():
    n3 = force? n2;
    checkMissing(n3);
    r55 = `!=`(r54, n3);
    c9 = `as.logical`(r55);
    if c9 then L143() else L21();
  L21():
    goto L22();
  L22():
    sym9 = ldf `is.complex`;
    base9 = ldf `is.complex` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L147() else L148();
  L143():
    stop5 = ldf stop;
    check L144() else D39();
  D39():
    deopt 118 [];
  L23(r59):
    st isC = r59;
    matrix = ldf matrix;
    check L154() else D42();
  L144():
    r56 = dyn stop5("'qr' and 'y' must have the same number of rows");
    check L145() else D40();
  L147():
    qr15 = ld qr;
    check L149() else D41();
  L148():
    r58 = dyn base9(<lang `$`(qr, qr)>);
    goto L23(r58);
  D40():
    deopt 120 [r56];
  D41():
    deopt 124 [qr15];
  D42():
    deopt 130 [];
  L145():
    goto L22();
  L149():
    qr16 = force? qr15;
    checkMissing(qr16);
    c10 = `is.object`(qr16);
    if c10 then L151() else L152(qr16);
  L154():
    p8 = prom<V +>{
      isC = ld isC;
      isC1 = force? isC;
      checkMissing(isC1);
      c12 = `as.logical`(isC1);
      if c12 then L1() else L0();
    L0():
      return NA_REAL;
    L1():
      return NA_CPLX;
    };
    p11 = prom<V +>{
      p9 = ld p;
      p10 = force? p9;
      checkMissing(p10);
      return p10;
    };
    p12 = prom<V +>{
      ny2 = ld ny;
      ny3 = force? ny2;
      checkMissing(ny3);
      return ny3;
    };
    r64 = dyn matrix(p8, p11, p12);
    check L155() else D43();
  D43():
    deopt 134 [r64];
  L150(dx7):
    c11 = `is.complex`(dx7);
    goto L23(c11);
  L151():
    dr6 = tryDispatchBuiltin.1("$", qr16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L153() else L152(dr6);
  L152(qr18):
    r60 = `$`(qr18, <sym qr>);
    goto L150(r60);
  L155():
    st coef = r64;
    p13 = ld p;
    check L156() else D44();
  D44():
    deopt 136 [p13];
  L153():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L150(dx6);
  L156():
    p14 = force? p13;
    checkMissing(p14);
    n4 = ld n;
    check L157() else D45();
  D45():
    deopt 137 [p14, n4];
  L157():
    n5 = force? n4;
    checkMissing(n5);
    r65 = `>`(p14, n5);
    c13 = `as.logical`(r65);
    if c13 then L158() else L24();
  L24():
    sym13 = ldf seq_len;
    base13 = ldf seq_len in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L168() else L169();
  L28(r75):
    st ix = r75;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L171() else L172();
  L158():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L159() else L160();
  L25(r67):
    goto L28(r67);
  L29(r79):
    r83 = `!`(r79);
    c17 = `as.logical`(r83);
    if c17 then L175() else L30();
  L159():
    sym11 = ldf seq_len;
    base11 = ldf seq_len in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L161() else L162();
  L160():
    r66 = dyn base10(<lang seq_len(n)>, <lang rep(NA_LGL, `-`(p, n))>);
    goto L25(r66);
  L168():
    p15 = ld p;
    check L170() else D48();
  L169():
    r76 = dyn base13(<sym p>);
    goto L28(r76);
  L171():
    colnames = ldf colnames;
    check L173() else D49();
  L172():
    r78 = dyn base14(<lang `<-`(nam, colnames(`$`(qr, qr)))>);
    goto L29(r78);
  D48():
    deopt 152 [p15];
  D49():
    deopt 158 [];
  L26(r69):
    sym12 = ldf rep;
    base12 = ldf rep in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L164() else L165();
  L30():
    goto L31();
  L31():
    p18 = ld p;
    check L177() else D51();
  L161():
    n6 = ld n;
    check L163() else D46();
  L162():
    r68 = dyn base11(<sym n>);
    goto L26(r68);
  L170():
    p16 = force? p15;
    checkMissing(p16);
    r77 = seq_len(p16);
    goto L28(r77);
  L173():
    p17 = prom<V +>{
      qr19 = ld qr;
      qr20 = force? qr19;
      checkMissing(qr20);
      c15 = `is.object`(qr20);
      if c15 then L1() else L2(qr20);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", qr20);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(qr22):
      r80 = `$`(qr22, <sym qr>);
      goto L0(r80);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r82 = dyn colnames(p17);
    check L174() else D50();
  L175():
    st pivotted = NA_LGL;
    goto L31();
  D46():
    deopt 143 [n6];
  D50():
    deopt 160 [r82];
  D51():
    deopt 169 [p18];
  L27(r72):
    c14 = ldf c in base;
    r74 = dyn c14(r69, r72);
    check L166() else D47();
  L163():
    n7 = force? n6;
    checkMissing(n7);
    r70 = seq_len(n7);
    goto L26(r70);
  L164():
    rep = ldf rep in base;
    r73 = dyn rep(NA_LGL, <lang `-`(p, n)>);
    goto L27(r73);
  L165():
    r71 = dyn base12(NA_LGL, <lang `-`(p, n)>);
    goto L27(r71);
  L174():
    st nam = r82;
    c16 = `==`(r82, NULL);
    goto L29(c16);
  L177():
    p19 = force? p18;
    checkMissing(p19);
    r85 = `==`(p19, 0);
    c18 = `as.logical`(r85);
    if c18 then L178() else L32();
  D47():
    deopt 150 [r74];
  L32():
    isC2 = ld isC;
    check L180() else D52();
  L33():
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L298() else L299();
  L166():
    goto L25(r74);
  L178():
    st pivotted = FALSE;
    goto L33();
  D52():
    deopt 176 [isC2];
  L55(r147):
    r148 = `!`(r147);
    c41 = `as.logical`(r148);
    if c41 then L301() else L56();
  L180():
    isC3 = force? isC2;
    checkMissing(isC3);
    c19 = `as.logical`(isC3);
    if c19 then L181() else L34();
  L298():
    nam = ld nam;
    check L300() else D93();
  L299():
    r146 = dyn base23(<sym nam>);
    goto L55(r146);
  D93():
    deopt 326 [nam];
  L34():
    isTRUE = ldf isTRUE;
    check L200() else D58();
  L56():
    goto L63();
  L63():
    im2 = ld im;
    check L330() else D108();
  L181():
    sym15 = ldf `.Internal`;
    base15 = ldf `.Internal` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L182() else L183();
  L300():
    nam1 = force? nam;
    checkMissing(nam1);
    c40 = `==`(nam1, NULL);
    goto L55(c40);
  L301():
    sym24 = ldf `is.na`;
    base24 = ldf `is.na` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L302() else L303();
  D58():
    deopt 200 [];
  D108():
    deopt 369 [im2];
  L35(r88):
    c20 = `is.object`(r88);
    if c20 then L187() else L188(r88);
  L57(r150):
    c42 = `as.logical`(r150);
    if c42 then L306() else L58();
  L182():
    qr23 = ld qr;
    check L184() else D53();
  L183():
    r87 = dyn base15(<lang qr_coef_cmplx(qr, y)>);
    goto L35(r87);
  L200():
    p20 = prom<V +>{
      sym16 = ldf attr;
      base16 = ldf attr in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r96):
      return r96;
    L1():
      qr29 = ld qr;
      qr30 = force? qr29;
      checkMissing(qr30);
      attr = ldf attr in base;
      r97 = dyn attr(qr30, "useLAPACK");
      goto L0(r97);
    L2():
      r95 = dyn base16(<sym qr>, "useLAPACK");
      goto L0(r95);
    };
    r99 = dyn isTRUE(p20);
    check L201() else D59();
  L302():
    pivotted2 = ld pivotted;
    check L304() else D94();
  L303():
    r149 = dyn base24(<sym pivotted>);
    goto L57(r149);
  L330():
    im3 = force? im2;
    checkMissing(im3);
    c47 = `as.logical`(im3);
    if c47 then L331() else L64(c47);
  D53():
    deopt 180 [qr23];
  D59():
    deopt 202 [r99];
  D94():
    deopt 332 [pivotted2];
  L36(dx11):
    l = ld coef;
    c21 = `is.object`(l);
    if c21 then L191() else L192(dx11, l);
  L58():
    goto L59();
  L59():
    pivotted4 = ld pivotted;
    check L310() else D98();
  L64(c49):
    c57 = `as.logical`(c49);
    if c57 then L337() else L66();
  L184():
    qr24 = force? qr23;
    checkMissing(qr24);
    y9 = ld y;
    check L185() else D54();
  L187():
    dr10 = tryDispatchBuiltin.1("[", r88);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L189() else L188(dr10);
  L188(r91):
    ix = ld ix;
    check L190() else D56();
  L201():
    c23 = `as.logical`(r99);
    if c23 then L202() else L38();
  L304():
    pivotted3 = force? pivotted2;
    checkMissing(pivotted3);
    is_na4 = ldf `is.na` in base;
    r151 = dyn is_na4(pivotted3);
    check L305() else D95();
  L306():
    is_unsorted = ldf `is.unsorted`;
    check L307() else D96();
  L331():
    sym25 = ldf `is.null`;
    base25 = ldf `is.null` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L332() else L333();
  D54():
    deopt 182 [y9];
  D56():
    deopt 186 [r91, ix];
  D95():
    deopt 335 [r151];
  D96():
    deopt 337 [];
  D98():
    deopt 343 [pivotted4];
  L37(dx16, dx17):
    st coef = dx17;
    goto L33();
  L38():
    k2 = ld k;
    check L221() else D65();
  L65(c52, r168):
    r171 = `!`(r168);
    c54 = `as.logical`(r171);
    c55 = `&&`(c52, c54);
    goto L64(c55);
  L66():
    goto L67();
  L67():
    im4 = ld im;
    check L342() else D114();
  L185():
    y10 = force? y9;
    checkMissing(y10);
    qr_coef_cmplx = ldf qr_coef_cmplx in base;
    r89 = dyn qr_coef_cmplx(qr24, y10);
    check L186() else D55();
  L189():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L36(dx10);
  L190():
    ix1 = force? ix;
    __ = ldf `[` in base;
    r92 = dyn __(r88, ix1, <missing>);
    goto L36(r92);
  L191():
    dr12 = tryDispatchBuiltin.0("[<-", l, dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L193() else L192(dx11, dr12);
  L192(dx13, l2):
    qr25 = ld qr;
    check L194() else D57();
  L202():
    sym17 = ldf `.Internal`;
    base17 = ldf `.Internal` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L203() else L204();
  L305():
    goto L57(r151);
  L307():
    p25 = prom<V +>{
      qr49 = ld qr;
      qr50 = force? qr49;
      checkMissing(qr50);
      c43 = `is.object`(qr50);
      if c43 then L1() else L2(qr50);
    L0(dx97):
      return dx97;
    L1():
      dr40 = tryDispatchBuiltin.1("$", qr50);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(qr52):
      r152 = `$`(qr52, <sym pivot>);
      goto L0(r152);
    L3():
      dx96 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx96);
    };
    r154 = dyn is_unsorted(p25);
    check L308() else D97();
  L310():
    pivotted5 = force? pivotted4;
    checkMissing(pivotted5);
    c44 = `as.logical`(pivotted5);
    if c44 then L311() else L60();
  L332():
    colnames1 = ldf colnames;
    check L334() else D109();
  L333():
    r167 = dyn base25(<lang `<-`(nam, colnames(y))>);
    goto L65(c47, r167);
  L337():
    nam20 = ld nam;
    check L338() else D111();
  D55():
    deopt 185 [r89];
  D57():
    deopt 192 [dx13, l2, dx11, qr25];
  D65():
    deopt 224 [k2];
  D97():
    deopt 339 [r154];
  D109():
    deopt 373 [c47];
  D111():
    deopt 380 [nam20];
  D114():
    deopt 389 [im4];
  L39(r101):
    c24 = `is.object`(r101);
    if c24 then L208() else L209(r101);
  L60():
    nam17 = ld nam;
    check L326() else D105();
  L62(nam16):
    goto L63();
  L186():
    goto L35(r89);
  L193():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L37(dx11, dx15);
  L194():
    qr26 = force? qr25;
    checkMissing(qr26);
    c22 = `is.object`(qr26);
    if c22 then L196() else L197(dx13, l2, dx11, qr26);
  L203():
    qr31 = ld qr;
    check L205() else D60();
  L204():
    r100 = dyn base17(<lang qr_coef_real(qr, y)>);
    goto L39(r100);
  L221():
    k3 = force? k2;
    checkMissing(k3);
    r108 = `>`(k3, 0);
    c27 = `as.logical`(r108);
    if c27 then L222() else L42();
  L308():
    st pivotted = r154;
    goto L59();
  L311():
    nam2 = ld nam;
    check L312() else D99();
  L334():
    p26 = prom<V +>{
      y15 = ld y;
      y16 = force? y15;
      checkMissing(y16);
      return y16;
    };
    r170 = dyn colnames1(p26);
    check L335() else D110();
  L338():
    nam21 = force? nam20;
    checkMissing(nam21);
    l39 = ld coef;
    colnames__ = ldf `colnames<-`;
    check L339() else D112();
  L342():
    im5 = force? im4;
    checkMissing(im5);
    c58 = `as.logical`(im5);
    if c58 then L343() else L68();
  D60():
    deopt 205 [qr31];
  D99():
    deopt 345 [nam2];
  D105():
    deopt 360 [nam17];
  D110():
    deopt 375 [c47, r170];
  D112():
    deopt 383 [nam21, l39, nam21];
  L40(dx29):
    l7 = ld coef;
    c25 = `is.object`(l7);
    if c25 then L212() else L213(dx29, l7);
  L42():
    goto L33();
  L68():
    sym26 = ldf drop;
    base26 = ldf drop in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L346() else L347();
  L195(dx25, dx26, dx27):
    ___ = ldf `[<-` in base;
    r94 = dyn ___(l, dx27, <missing>, dx26);
    goto L37(dx25, r94);
  L196():
    dr14 = tryDispatchBuiltin.1("$", qr26);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L198() else L197(dx13, l2, dx11, dr14);
  L197(dx20, l4, dx21, qr28):
    r93 = `$`(qr28, <sym pivot>);
    goto L195(dx20, dx21, r93);
  L205():
    qr32 = force? qr31;
    checkMissing(qr32);
    y11 = ld y;
    check L206() else D61();
  L208():
    dr16 = tryDispatchBuiltin.1("[", r101);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L210() else L209(dr16);
  L209(r104):
    ix2 = ld ix;
    check L211() else D63();
  L222():
    l14 = ld y;
    storage_mode__ = ldf `storage.mode<-`;
    check L223() else D66();
  L312():
    nam3 = force? nam2;
    checkMissing(nam3);
    l29 = ld coef;
    rownames = ldf rownames;
    check L313() else D100();
  L326():
    nam18 = force? nam17;
    checkMissing(nam18);
    l38 = ld coef;
    rownames__1 = ldf `rownames<-`;
    check L327() else D106();
  L335():
    st nam = r170;
    c53 = `==`(r170, NULL);
    goto L65(c47, c53);
  L339():
    r172 = dyn colnames__(l39, NULL, nam21);
    check L340() else D113();
  L343():
    coef = ld coef;
    check L344() else D115();
  D61():
    deopt 207 [y11];
  D63():
    deopt 211 [r104, ix2];
  D66():
    deopt 231 ["double", l14, "double"];
  D100():
    deopt 348 [nam3, l29, nam3];
  D106():
    deopt 363 [nam18, l38, nam18];
  D113():
    deopt 385 [nam21, r172];
  D115():
    deopt 391 [coef];
  L41(dx34, dx35):
    st coef = dx35;
    goto L33();
  L69(r174):
    popenv;
    return r174;
  L198():
    dx24 = getTryDispatchBuiltinValue(dr14);
    goto L195(dx13, dx11, dx24);
  L206():
    y12 = force? y11;
    checkMissing(y12);
    qr_coef_real = ldf qr_coef_real in base;
    r102 = dyn qr_coef_real(qr32, y12);
    check L207() else D62();
  L210():
    dx28 = getTryDispatchBuiltinValue(dr16);
    goto L40(dx28);
  L211():
    ix3 = force? ix2;
    __1 = ldf `[` in base;
    r105 = dyn __1(r101, ix3, <missing>);
    goto L40(r105);
  L212():
    dr18 = tryDispatchBuiltin.0("[<-", l7, dx29);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L214() else L213(dx29, dr18);
  L213(dx31, l9):
    qr33 = ld qr;
    check L215() else D64();
  L223():
    r109 = dyn storage_mode__(l14, NULL, "double");
    check L224() else D67();
  L313():
    r156 = dyn rownames(nam3, NULL);
    check L314() else D101();
  L327():
    r166 = dyn rownames__1(l38, NULL, nam18);
    check L328() else D107();
  L340():
    st coef = r172;
    goto L67();
  L344():
    coef1 = force? coef;
    checkMissing(coef1);
    popenv;
    return coef1;
  L346():
    coef2 = ld coef;
    check L348() else D116();
  L347():
    r173 = dyn base26(<sym coef>);
    goto L69(r173);
  D62():
    deopt 210 [r102];
  D64():
    deopt 217 [dx31, l9, dx29, qr33];
  D67():
    deopt 233 ["double", r109];
  D101():
    deopt 350 [nam3, l29, nam3, r156];
  D107():
    deopt 365 [nam18, r166];
  D116():
    deopt 395 [coef2];
  L207():
    goto L39(r102);
  L214():
    dx33 = getTryDispatchBuiltinValue(dr18);
    goto L41(dx29, dx33);
  L215():
    qr34 = force? qr33;
    checkMissing(qr34);
    c26 = `is.object`(qr34);
    if c26 then L217() else L218(dx31, l9, dx29, qr34);
  L224():
    st y = r109;
    sym18 = ldf `.Fortran`;
    base18 = ldf `.Fortran` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L225() else L226();
  L314():
    c45 = `is.object`(r156);
    if c45 then L315() else L316(nam3, l29, r156);
  L328():
    st coef = r166;
    goto L62(nam18);
  L348():
    coef3 = force? coef2;
    checkMissing(coef3);
    drop = ldf drop in base;
    r175 = dyn drop(coef3);
    check L349() else D117();
  D117():
    deopt 398 [r175];
  L43(r111):
    c30 = `is.object`(r111);
    if c30 then L253() else L254(r111);
  L61(nam7, l33, dx99):
    rownames__ = ldf `rownames<-`;
    check L323() else D103();
  L216(dx43, dx44, dx45):
    ___1 = ldf `[<-` in base;
    r107 = dyn ___1(l7, dx45, <missing>, dx44);
    goto L41(dx43, r107);
  L217():
    dr20 = tryDispatchBuiltin.1("$", qr34);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L219() else L218(dx31, l9, dx29, dr20);
  L218(dx38, l11, dx39, qr36):
    r106 = `$`(qr36, <sym pivot>);
    goto L216(dx38, dx39, r106);
  L225():
    _F_dqrcf = ld `.F_dqrcf`;
    check L227() else D68();
  L226():
    r110 = dyn base18[, , , , , , , coef, info, NAOK](<sym .F_dqrcf>, <lang as.double(`$`(qr, qr))>, <sym n>, <sym k>, <lang as.double(`$`(qr, qraux))>, <sym y>, <sym ny>, <lang matrix(0.0, nrow=k, ncol=ny)>, <lang integer(1)>, TRUE);
    goto L43(r110);
  L315():
    dr42 = tryDispatchBuiltin.0("[<-", r156, nam3);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L317() else L316(nam3, l29, dr42);
  L316(nam5, l31, r158):
    qr53 = ld qr;
    check L318() else D102();
  L349():
    goto L69(r175);
  D68():
    deopt 237 [_F_dqrcf];
  D102():
    deopt 352 [nam5, l31, r158, nam3, qr53];
  D103():
    deopt 356 [nam7, l33, dx99];
  L46(dx51):
    st z = dx51;
    z = ld z;
    check L259() else D83();
  L219():
    dx42 = getTryDispatchBuiltinValue(dr20);
    goto L216(dx31, dx29, dx42);
  L227():
    _F_dqrcf1 = force? _F_dqrcf;
    checkMissing(_F_dqrcf1);
    sym19 = ldf `as.double`;
    base19 = ldf `as.double` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L228() else L229();
  L253():
    dr26 = tryDispatchBuiltin.1("[", r111);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L255() else L254(dr26);
  L254(r126):
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L256() else L257();
  L317():
    dx98 = getTryDispatchBuiltinValue(dr42);
    goto L61(nam3, l29, dx98);
  L318():
    qr54 = force? qr53;
    checkMissing(qr54);
    c46 = `is.object`(qr54);
    if c46 then L320() else L321(nam5, l31, r158, nam3, qr54);
  L323():
    r165 = dyn rownames__(l33, NULL, dx99);
    check L324() else D104();
  D83():
    deopt 287 [z];
  D104():
    deopt 358 [nam7, r165];
  L44(r113):
    n8 = ld n;
    check L236() else D71();
  L47(r130, r131):
    __2 = ldf `[` in base;
    r133 = dyn __2(r130, r131);
    goto L46(r133);
  L228():
    qr37 = ld qr;
    check L230() else D69();
  L229():
    r112 = dyn base19(<lang `$`(qr, qr)>);
    goto L44(r112);
  L255():
    dx50 = getTryDispatchBuiltinValue(dr26);
    goto L46(dx50);
  L256():
    c31 = ldf c in base;
    r132 = dyn c31("coef", "info");
    check L258() else D82();
  L257():
    r129 = dyn base21("coef", "info");
    goto L47(r126, r129);
  L259():
    z1 = force? z;
    checkMissing(z1);
    c32 = `is.object`(z1);
    if c32 then L261() else L262(z1);
  L319(nam14, l37, r162, nam15, dx101):
    ___3 = ldf `[<-` in base;
    r164 = dyn ___3(r162, nam15, dx101);
    goto L61(nam14, l37, r164);
  L320():
    dr44 = tryDispatchBuiltin.1("$", qr54);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L322() else L321(nam5, l31, r158, nam3, dr44);
  L321(nam10, l35, r160, nam11, qr56):
    r163 = `$`(qr56, <sym pivot>);
    goto L319(nam10, l35, r160, nam11, r163);
  L324():
    st coef = r165;
    goto L62(nam7);
  D69():
    deopt 241 [qr37];
  D71():
    deopt 246 [n8];
  D82():
    deopt 284 [r126, r132];
  L230():
    qr38 = force? qr37;
    checkMissing(qr38);
    c28 = `is.object`(qr38);
    if c28 then L232() else L233(qr38);
  L236():
    n9 = force? n8;
    checkMissing(n9);
    k4 = ld k;
    check L237() else D72();
  L258():
    goto L47(r126, r132);
  L260(dx53):
    c33 = `as.logical`(dx53);
    if c33 then L264() else L48();
  L261():
    dr28 = tryDispatchBuiltin.1("$", z1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L263() else L262(dr28);
  L262(z3):
    r134 = `$`(z3, <sym info>);
    goto L260(r134);
  L322():
    dx100 = getTryDispatchBuiltinValue(dr44);
    goto L319(nam5, l31, r158, nam3, dx100);
  D72():
    deopt 248 [k4];
  L48():
    goto L49();
  L49():
    k8 = ld k;
    check L268() else D86();
  L231(dx47):
    as_double = ldf `as.double` in base;
    r115 = dyn as_double(dx47);
    check L235() else D70();
  L232():
    dr22 = tryDispatchBuiltin.1("$", qr38);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L234() else L233(dr22);
  L233(qr40):
    r114 = `$`(qr40, <sym qr>);
    goto L231(r114);
  L237():
    k5 = force? k4;
    checkMissing(k5);
    sym20 = ldf `as.double`;
    base20 = ldf `as.double` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L238() else L239();
  L263():
    dx52 = getTryDispatchBuiltinValue(dr28);
    goto L260(dx52);
  L264():
    stop6 = ldf stop;
    check L265() else D84();
  D70():
    deopt 245 [r115];
  D84():
    deopt 291 [];
  D86():
    deopt 296 [k8];
  L45(r117):
    y13 = ld y;
    check L246() else D75();
  L234():
    dx46 = getTryDispatchBuiltinValue(dr22);
    goto L231(dx46);
  L235():
    goto L44(r115);
  L238():
    qr41 = ld qr;
    check L240() else D73();
  L239():
    r116 = dyn base20(<lang `$`(qr, qraux)>);
    goto L45(r116);
  L265():
    r135 = dyn stop6("exact singularity in 'qr.coef'");
    check L266() else D85();
  L268():
    k9 = force? k8;
    checkMissing(k9);
    p23 = ld p;
    check L269() else D87();
  D73():
    deopt 252 [qr41];
  D75():
    deopt 257 [y13];
  D85():
    deopt 293 [r135];
  D87():
    deopt 297 [k9, p23];
  L240():
    qr42 = force? qr41;
    checkMissing(qr42);
    c29 = `is.object`(qr42);
    if c29 then L242() else L243(qr42);
  L246():
    y14 = force? y13;
    checkMissing(y14);
    ny4 = ld ny;
    check L247() else D76();
  L266():
    goto L49();
  L269():
    p24 = force? p23;
    checkMissing(p24);
    r137 = `<`(k9, p24);
    st pivotted = r137;
    pivotted = ld pivotted;
    check L270() else D88();
  D76():
    deopt 259 [ny4];
  D88():
    deopt 301 [pivotted];
  L241(dx49):
    as_double1 = ldf `as.double` in base;
    r119 = dyn as_double1(dx49);
    check L245() else D74();
  L242():
    dr24 = tryDispatchBuiltin.1("$", qr42);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L244() else L243(dr24);
  L243(qr44):
    r118 = `$`(qr44, <sym qraux>);
    goto L241(r118);
  L247():
    ny5 = force? ny4;
    checkMissing(ny5);
    matrix1 = ldf matrix;
    check L248() else D77();
  L270():
    pivotted1 = force? pivotted;
    checkMissing(pivotted1);
    c34 = `as.logical`(pivotted1);
    if c34 then L271() else L50();
  D74():
    deopt 256 [r119];
  D77():
    deopt 262 [];
  L50():
    z8 = ld z;
    check L292() else D92();
  L54(dx93):
    goto L33();
  L244():
    dx48 = getTryDispatchBuiltinValue(dr24);
    goto L241(dx48);
  L245():
    goto L45(r119);
  L248():
    p21 = prom<V +>{
      k6 = ld k;
      k7 = force? k6;
      checkMissing(k7);
      return k7;
    };
    p22 = prom<V +>{
      ny6 = ld ny;
      ny7 = force? ny6;
      checkMissing(ny7);
      return ny7;
    };
    r122 = dyn matrix1[, nrow, ncol](0.0, p21, p22);
    check L249() else D78();
  L271():
    z4 = ld z;
    check L272() else D89();
  D78():
    deopt 268 [r122];
  D89():
    deopt 303 [z4];
  D92():
    deopt 319 [z8];
  L249():
    integer = ldf integer;
    check L250() else D79();
  L272():
    z5 = force? z4;
    checkMissing(z5);
    c35 = `is.object`(z5);
    if c35 then L274() else L275(z5);
  L292():
    z9 = force? z8;
    checkMissing(z9);
    c39 = `is.object`(z9);
    if c39 then L294() else L295(z9);
  D79():
    deopt 271 [];
  L250():
    r123 = dyn integer(1);
    check L251() else D80();
  L273(dx55):
    l15 = ld coef;
    c36 = `is.object`(l15);
    if c36 then L277() else L278(dx55, l15);
  L274():
    dr30 = tryDispatchBuiltin.1("$", z5);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L276() else L275(dr30);
  L275(z7):
    r138 = `$`(z7, <sym coef>);
    goto L273(r138);
  L293(dx95):
    st coef = dx95;
    goto L54(dx95);
  L294():
    dr38 = tryDispatchBuiltin.1("$", z9);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L296() else L295(dr38);
  L295(z11):
    r145 = `$`(z11, <sym coef>);
    goto L293(r145);
  D80():
    deopt 273 [r123];
  L51(dx60, dx61):
    st coef = dx61;
    goto L54(dx60);
  L251():
    _Fortran = ldf `.Fortran` in base;
    r124 = dyn _Fortran(_F_dqrcf1, r113, n9, k5, r117, y14, ny5, r122, r123, TRUE);
    check L252() else D81();
  L276():
    dx54 = getTryDispatchBuiltinValue(dr30);
    goto L273(dx54);
  L277():
    dr32 = tryDispatchBuiltin.0("[<-", l15, dx55);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L279() else L278(dx55, dr32);
  L278(dx57, l17):
    qr45 = ld qr;
    check L280() else D90();
  L296():
    dx94 = getTryDispatchBuiltinValue(dr38);
    goto L293(dx94);
  D81():
    deopt 278 [r124];
  D90():
    deopt 307 [dx57, l17, dx55, qr45];
  L252():
    goto L43(r124);
  L279():
    dx59 = getTryDispatchBuiltinValue(dr32);
    goto L51(dx55, dx59);
  L280():
    qr46 = force? qr45;
    checkMissing(qr46);
    c37 = `is.object`(qr46);
    if c37 then L282() else L283(dx57, l17, dx55, qr46);
  L281(dx69, l21, dx70, dx71):
    c38 = `is.object`(dx71);
    if c38 then L285() else L286(dx69, l21, dx70, dx71);
  L282():
    dr34 = tryDispatchBuiltin.1("$", qr46);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L284() else L283(dx57, l17, dx55, dr34);
  L283(dx64, l19, dx65, qr48):
    r139 = `$`(qr48, <sym pivot>);
    goto L281(dx64, l19, dx65, r139);
  L52(dx81, dx82, dx83):
    ___2 = ldf `[<-` in base;
    r144 = dyn ___2(l15, dx83, <missing>, dx82);
    goto L51(dx81, r144);
  L284():
    dx68 = getTryDispatchBuiltinValue(dr34);
    goto L281(dx57, l17, dx55, dx68);
  L285():
    dr36 = tryDispatchBuiltin.1("[", dx71);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L287() else L286(dx69, l21, dx70, dr36);
  L286(dx75, l23, dx76, dx77):
    sym22 = ldf seq_len;
    base22 = ldf seq_len in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L288() else L289();
  L53(dx90, l28, dx91, dx92, r141):
    __3 = ldf `[` in base;
    r143 = dyn __3(dx92, r141);
    goto L52(dx90, dx91, r143);
  L287():
    dx80 = getTryDispatchBuiltinValue(dr36);
    goto L52(dx69, dx70, dx80);
  L288():
    k10 = ld k;
    check L290() else D91();
  L289():
    r140 = dyn base22(<sym k>);
    goto L53(dx75, l23, dx76, dx77, r140);
  D91():
    deopt 311 [dx75, l23, dx76, dx77, k10];
  L290():
    k11 = force? k10;
    checkMissing(k11);
    r142 = seq_len(k11);
    goto L53(dx75, l23, dx76, dx77, r142);
  }
}