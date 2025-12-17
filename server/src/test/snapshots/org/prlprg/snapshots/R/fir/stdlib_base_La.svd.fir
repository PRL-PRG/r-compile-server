fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1888930683;
    st `La.svd` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner1888930683(x, nu, nv) {
  (reg x:*, reg nu:*, reg nv:*) -+> V { var x:*, var nu:*, reg nu_isMissing:L, reg nu_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n:*, reg n1:V, reg p:*, reg p1:V, reg min:cls, reg r2:V, reg p2:p(V +), var nv:*, reg nv_isMissing:L, reg nv_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg n2:*, reg n3:V, reg p3:*, reg p4:V, reg min1:cls, reg r6:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x1:*, reg x2:V, reg c:L, reg r10:V, reg c1:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c6:L, reg r12:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r13:V, reg r14:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg c15:L, reg r16:V, reg x5:*, reg x6:V, reg c16:L, reg r17:V, reg c17:L, reg c18:V, reg c20:L, reg stop:cls, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg x7:*, reg x8:V, reg is_finite:cls, reg r24:V, reg r25:V, reg any:cls, reg r26:V, reg c21:L, reg stop1:cls, reg r27:V, reg as_matrix:cls, reg x9:*, reg x10:V, reg p6:p(V +), reg r30:V, reg nrow:cls, reg x11:*, reg x12:V, reg p7:p(V +), reg r32:V, reg ncol:cls, reg x13:*, reg x14:V, reg p8:p(V +), reg r34:V, reg n4:*, reg n5:V, reg r35:V, reg c22:L, reg c23:V, reg p9:*, reg p10:V, reg r36:V, reg c25:L, reg c26:V, reg c28:L, reg stop2:cls, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg x15:*, reg x16:V, reg c29:L, reg c30:L, reg r41:V, reg nu1:*, reg nu2:V, reg c31:L, reg c32:V, reg nv1:*, reg nv2:V, reg c34:L, reg c35:V, reg c37:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg r43:V, reg n6:*, reg n7:V, reg p11:*, reg p12:V, reg min2:cls, reg r44:V, reg nu3:*, reg nu4:V, reg np:*, reg np1:V, reg r45:V, reg c38:L, reg c40:V, reg nv3:*, reg nv4:V, reg np2:*, reg np3:V, reg r46:V, reg c41:L, reg c42:V, reg c44:L, reg matrix:cls, reg zero:*, reg zero1:V, reg p13:p(V +), reg n8:*, reg n9:V, reg p14:p(V +), reg np4:*, reg np5:V, reg p15:p(V +), reg r50:V, reg matrix1:cls, reg zero2:*, reg zero3:V, reg p16:p(V +), reg np6:*, reg np7:V, reg p17:p(V +), reg p18:*, reg p19:V, reg p20:p(V +), reg r54:V, reg np8:*, reg np9:V, reg np10:V, reg matrix2:cls, reg zero4:*, reg zero5:V, reg p21:p(V +), reg n10:*, reg n11:V, reg p22:p(V +), reg n12:*, reg n13:V, reg p23:p(V +), reg r58:V, reg matrix3:cls, reg zero6:*, reg zero7:V, reg p24:p(V +), reg p25:*, reg p26:V, reg p27:p(V +), reg p28:*, reg p29:V, reg p30:p(V +), reg r62:V, reg n14:*, reg n15:V, reg p31:*, reg p32:V, reg matrix4:cls, reg zero8:*, reg zero9:V, reg p33:p(V +), reg r64:V, reg matrix5:cls, reg zero10:*, reg zero11:V, reg p34:p(V +), reg r66:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r67:V, reg r68:V, reg x17:*, reg x18:V, reg c45:L, reg c46:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r69:V, reg r70:V, reg jobu:*, reg jobu1:V, reg x19:*, reg x20:V, reg double:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r71:V, reg r72:V, reg n16:*, reg n17:V, reg p35:*, reg p36:V, reg min3:cls, reg r73:V, reg p37:p(V +), reg r75:V, reg u:*, reg u1:V, reg vt:*, reg vt1:V, reg La_svd_cmplx:cls, reg r76:V, reg r77:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r78:V, reg jobu2:*, reg jobu3:V, reg x21:*, reg x22:V, reg double1:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r79:V, reg r80:V, reg n18:*, reg n19:V, reg p38:*, reg p39:V, reg min4:cls, reg r81:V, reg p40:p(V +), reg r83:V, reg u2:*, reg u3:V, reg vt2:*, reg vt3:V, reg La_svd:cls, reg r84:V, reg res:*, reg res1:V, reg c47:L, reg res3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r85:V, reg res6:V, reg r86:V, reg nu5:*, reg nu6:V, reg c48:L, reg res9:V, reg r87:V, reg nv5:*, reg nv6:V, reg c49:L, reg res12:V, reg r88:V, reg c50:cls, reg r89:V, reg __:cls, reg r90:V, reg nu7:*, reg nu8:V, reg c51:L, reg c53:V, reg nu9:*, reg nu10:V, reg nu11:*, reg nu12:V, reg r91:V, reg c54:L, reg c55:V, reg c57:L, reg res13:*, reg res14:V, reg c58:L, reg res16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r92:V, reg c59:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r93:V, reg r94:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r95:V, reg dx13:V, reg r96:V, reg n20:*, reg n21:V, reg nu13:*, reg nu14:V, reg min5:cls, reg r97:V, reg r98:I, reg __1:cls, reg r99:V, reg l:*, reg c60:L, reg dx15:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx17:V, reg dx18:V, reg dx19:V, reg r100:V, reg nv7:*, reg nv8:V, reg c61:L, reg c63:V, reg nv9:*, reg nv10:V, reg nv11:*, reg nv12:V, reg r101:V, reg c64:L, reg c65:V, reg c67:L, reg res17:*, reg res18:V, reg c68:L, reg res20:V, reg dr8:V, reg dc4:L, reg dx21:V, reg dx22:V, reg r102:V, reg c69:L, reg dx24:V, reg dr10:V, reg dc5:L, reg dx25:V, reg dx26:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r103:V, reg r104:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r105:V, reg dx32:V, reg r106:V, reg p41:*, reg p42:V, reg nv13:*, reg nv14:V, reg min6:cls, reg r107:V, reg r108:I, reg __2:cls, reg r109:V, reg l3:*, reg c70:L, reg dx34:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx36:V, reg dx37:V, reg dx38:V, reg r110:V, reg res21:*, reg res22:V |
    mkenv;
    st x = x;
    nu_isMissing = missing.0(nu);
    if nu_isMissing then L0() else L1(nu);
  L0():
    p2 = prom<V +>{
      sym = ldf min;
      base = ldf min in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      p = ld p;
      p1 = force? p;
      checkMissing(p1);
      min = ldf min in base;
      r2 = dyn min(n1, p1);
      goto L0(r2);
    L2():
      r = dyn base(<sym n>, <sym p>);
      goto L0(r);
    };
    goto L1(p2);
  L1(nu_orDefault):
    st nu = nu_orDefault;
    nv_isMissing = missing.0(nv);
    if nv_isMissing then L2() else L3(nv);
  L2():
    p5 = prom<V +>{
      sym1 = ldf min;
      base1 = ldf min in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      p3 = ld p;
      p4 = force? p3;
      checkMissing(p4);
      min1 = ldf min in base;
      r6 = dyn min1(n3, p4);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym n>, <sym p>);
      goto L0(r4);
    };
    goto L3(p5);
  L3(nv_orDefault):
    st nv = nv_orDefault;
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L4(r9):
    r10 = `!`(r9);
    c1 = `as.logical`(r10);
    if c1 then L53() else L5(c1);
  L50():
    x1 = ld x;
    check L52() else D0();
  L51():
    r8 = dyn base2(<sym x>);
    goto L4(r8);
  D0():
    deopt 1 [x1];
  L5(c3):
    c10 = `as.logical`(c3);
    if c10 then L59() else L7(c10);
  L52():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.logical`(x2);
    goto L4(c);
  L53():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L6(c6, r12):
    r14 = `!`(r12);
    c7 = `as.logical`(r14);
    c8 = `&&`(c6, c7);
    goto L5(c8);
  L7(c12):
    c20 = `as.logical`(c12);
    if c20 then L64() else L9();
  L54():
    x3 = ld x;
    check L56() else D1();
  L55():
    r11 = dyn base3(<sym x>);
    goto L6(c1, r11);
  L59():
    sym4 = ldf `is.complex`;
    base4 = ldf `is.complex` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  D1():
    deopt 7 [c1, x3];
  L8(c15, r16):
    r17 = `!`(r16);
    c17 = `as.logical`(r17);
    c18 = `&&`(c15, c17);
    goto L7(c18);
  L9():
    goto L10();
  L10():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L68() else L69();
  L56():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r13 = dyn is_numeric(x4);
    check L57() else D2();
  L60():
    x5 = ld x;
    check L62() else D3();
  L61():
    r15 = dyn base4(<sym x>);
    goto L8(c10, r15);
  L64():
    stop = ldf stop;
    check L65() else D4();
  D2():
    deopt 10 [c1, r13];
  D3():
    deopt 14 [c10, x5];
  D4():
    deopt 20 [];
  L11(r21):
    c21 = `as.logical`(r21);
    if c21 then L75() else L13();
  L57():
    goto L6(c1, r13);
  L62():
    x6 = force? x5;
    checkMissing(x6);
    c16 = `is.complex`(x6);
    goto L8(c10, c16);
  L65():
    r18 = dyn stop("argument to 'La.svd' must be numeric or complex");
    check L66() else D5();
  L68():
    sym6 = ldf `is.finite`;
    base6 = ldf `is.finite` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L70() else L71();
  L69():
    r20 = dyn base5(<lang `!`(is.finite(x))>);
    goto L11(r20);
  D5():
    deopt 22 [r18];
  L12(r23):
    r25 = `!`(r23);
    any = ldf any in base;
    r26 = dyn any(r25);
    check L74() else D8();
  L13():
    goto L14();
  L14():
    as_matrix = ldf `as.matrix`;
    check L79() else D11();
  L66():
    goto L10();
  L70():
    x7 = ld x;
    check L72() else D6();
  L71():
    r22 = dyn base6(<sym x>);
    goto L12(r22);
  L75():
    stop1 = ldf stop;
    check L76() else D9();
  D6():
    deopt 29 [x7];
  D8():
    deopt 35 [r26];
  D9():
    deopt 37 [];
  D11():
    deopt 43 [];
  L72():
    x8 = force? x7;
    checkMissing(x8);
    is_finite = ldf `is.finite` in base;
    r24 = dyn is_finite(x8);
    check L73() else D7();
  L74():
    goto L11(r26);
  L76():
    r27 = dyn stop1("infinite or missing values in 'x'");
    check L77() else D10();
  L79():
    p6 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r30 = dyn as_matrix(p6);
    check L80() else D12();
  D7():
    deopt 32 [r24];
  D10():
    deopt 39 [r27];
  D12():
    deopt 45 [r30];
  L73():
    goto L12(r24);
  L77():
    goto L14();
  L80():
    st x = r30;
    nrow = ldf nrow;
    check L81() else D13();
  D13():
    deopt 48 [];
  L81():
    p7 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r32 = dyn nrow(p7);
    check L82() else D14();
  D14():
    deopt 50 [r32];
  L82():
    st n = r32;
    ncol = ldf ncol;
    check L83() else D15();
  D15():
    deopt 53 [];
  L83():
    p8 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r34 = dyn ncol(p8);
    check L84() else D16();
  D16():
    deopt 55 [r34];
  L84():
    st p = r34;
    n4 = ld n;
    check L85() else D17();
  D17():
    deopt 57 [n4];
  L85():
    n5 = force? n4;
    checkMissing(n5);
    r35 = `!`(n5);
    c22 = `as.logical`(r35);
    if c22 then L15(c22) else L86();
  L15(c23):
    c28 = `as.logical`(c23);
    if c28 then L89() else L16();
  L86():
    p9 = ld p;
    check L87() else D18();
  D18():
    deopt 60 [c22, p9];
  L16():
    goto L17();
  L17():
    sym7 = ldf `is.complex`;
    base7 = ldf `is.complex` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L93() else L94();
  L87():
    p10 = force? p9;
    checkMissing(p10);
    r36 = `!`(p10);
    c25 = `as.logical`(r36);
    c26 = `||`(c22, c25);
    goto L15(c26);
  L89():
    stop2 = ldf stop;
    check L90() else D19();
  D19():
    deopt 65 [];
  L18(r40):
    c30 = `as.logical`(r40);
    if c30 then L96() else L19();
  L90():
    r37 = dyn stop2("a dimension is zero");
    check L91() else D20();
  L93():
    x15 = ld x;
    check L95() else D21();
  L94():
    r39 = dyn base7(<sym x>);
    goto L18(r39);
  D20():
    deopt 67 [r37];
  D21():
    deopt 71 [x15];
  L19():
    goto L20(0.0);
  L20(r41):
    st zero = r41;
    nu1 = ld nu;
    check L98() else D22();
  L91():
    goto L17();
  L95():
    x16 = force? x15;
    checkMissing(x16);
    c29 = `is.complex`(x16);
    goto L18(c29);
  L96():
    goto L20(0.0i);
  D22():
    deopt 79 [nu1];
  L98():
    nu2 = force? nu1;
    checkMissing(nu2);
    c31 = `as.logical`(nu2);
    if c31 then L21(c31) else L99();
  L21(c32):
    c37 = `as.logical`(c32);
    if c37 then L102() else L22();
  L99():
    nv1 = ld nv;
    check L100() else D23();
  D23():
    deopt 81 [c31, nv1];
  L22():
    st jobu = "N";
    matrix4 = ldf matrix;
    check L128() else D42();
  L27():
    sym9 = ldf `is.complex`;
    base9 = ldf `is.complex` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L132() else L133();
  L100():
    nv2 = force? nv1;
    checkMissing(nv2);
    c34 = `as.logical`(nv2);
    c35 = `||`(c31, c34);
    goto L21(c35);
  L102():
    sym8 = ldf min;
    base8 = ldf min in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L103() else L104();
  D42():
    deopt 150 [];
  L23(r43):
    st np = r43;
    nu3 = ld nu;
    check L108() else D27();
  L28(r68):
    c46 = `as.logical`(r68);
    if c46 then L135() else L29();
  L103():
    n6 = ld n;
    check L105() else D24();
  L104():
    r42 = dyn base8(<sym n>, <sym p>);
    goto L23(r42);
  L128():
    p33 = prom<V +>{
      zero8 = ld zero;
      zero9 = force? zero8;
      checkMissing(zero9);
      return zero9;
    };
    r64 = dyn matrix4(p33, 1, 1);
    check L129() else D43();
  L132():
    x17 = ld x;
    check L134() else D46();
  L133():
    r67 = dyn base9(<sym x>);
    goto L28(r67);
  D24():
    deopt 86 [n6];
  D27():
    deopt 93 [nu3];
  D43():
    deopt 154 [r64];
  D46():
    deopt 164 [x17];
  L29():
    sym12 = ldf `.Internal`;
    base12 = ldf `.Internal` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L146() else L147();
  L31(r77):
    st res = r77;
    res = ld res;
    check L155() else D61();
  L105():
    n7 = force? n6;
    checkMissing(n7);
    p11 = ld p;
    check L106() else D25();
  L108():
    nu4 = force? nu3;
    checkMissing(nu4);
    np = ld np;
    check L109() else D28();
  L129():
    st u = r64;
    matrix5 = ldf matrix;
    check L130() else D44();
  L134():
    x18 = force? x17;
    checkMissing(x18);
    c45 = `is.complex`(x18);
    goto L28(c45);
  L135():
    sym10 = ldf `.Internal`;
    base10 = ldf `.Internal` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L136() else L137();
  D25():
    deopt 88 [p11];
  D28():
    deopt 94 [nu4, np];
  D44():
    deopt 157 [];
  D61():
    deopt 200 [res];
  L30(r70):
    goto L31(r70);
  L106():
    p12 = force? p11;
    checkMissing(p12);
    min2 = ldf min in base;
    r44 = dyn min2(n7, p12);
    check L107() else D26();
  L109():
    np1 = force? np;
    checkMissing(np1);
    r45 = `<=`(nu4, np1);
    c38 = `as.logical`(r45);
    if c38 then L110() else L24(c38);
  L130():
    p34 = prom<V +>{
      zero10 = ld zero;
      zero11 = force? zero10;
      checkMissing(zero11);
      return zero11;
    };
    r66 = dyn matrix5(p34, 1, 1);
    check L131() else D45();
  L136():
    jobu = ld jobu;
    check L138() else D47();
  L137():
    r69 = dyn base10(<lang La_svd_cmplx(jobu, x, double(min(n, p)), u, vt)>);
    goto L30(r69);
  L146():
    jobu2 = ld jobu;
    check L148() else D54();
  L147():
    r78 = dyn base12(<lang La_svd(jobu, x, double(min(n, p)), u, vt)>);
    goto L31(r78);
  L155():
    res1 = force? res;
    checkMissing(res1);
    c47 = `is.object`(res1);
    if c47 then L156() else L157(res1);
  D26():
    deopt 91 [r44];
  D45():
    deopt 161 [r66];
  D47():
    deopt 169 [jobu];
  D54():
    deopt 185 [jobu2];
  L24(c40):
    c44 = `as.logical`(c40);
    if c44 then L114() else L25();
  L32(dx1):
    st res = dx1;
    nu7 = ld nu;
    check L168() else D65();
  L107():
    goto L23(r44);
  L110():
    nv3 = ld nv;
    check L111() else D29();
  L131():
    st vt = r66;
    goto L27();
  L138():
    jobu1 = force? jobu;
    checkMissing(jobu1);
    x19 = ld x;
    check L139() else D48();
  L148():
    jobu3 = force? jobu2;
    checkMissing(jobu3);
    x21 = ld x;
    check L149() else D55();
  L156():
    dr = tryDispatchBuiltin.1("[", res1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L158() else L157(dr);
  L157(res3):
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L159() else L160();
  D29():
    deopt 97 [c38, nv3];
  D48():
    deopt 171 [x19];
  D55():
    deopt 187 [x21];
  D65():
    deopt 221 [nu7];
  L25():
    st jobu = "A";
    matrix2 = ldf matrix;
    check L121() else D36();
  L26(np10):
    goto L27();
  L33(res6, r86):
    __ = ldf `[` in base;
    r90 = dyn __(res6, r86);
    goto L32(r90);
  L111():
    nv4 = force? nv3;
    checkMissing(nv4);
    np2 = ld np;
    check L112() else D30();
  L114():
    st jobu = "S";
    matrix = ldf matrix;
    check L115() else D31();
  L139():
    x20 = force? x19;
    checkMissing(x20);
    double = ldf double;
    check L140() else D49();
  L149():
    x22 = force? x21;
    checkMissing(x22);
    double1 = ldf double;
    check L150() else D56();
  L158():
    dx = getTryDispatchBuiltinValue(dr);
    goto L32(dx);
  L159():
    nu5 = ld nu;
    check L161() else D62();
  L160():
    r85 = dyn base14("d", <lang if(nu, "u")>, <lang if(nv, "vt")>);
    goto L33(res3, r85);
  L168():
    nu8 = force? nu7;
    checkMissing(nu8);
    c51 = `as.logical`(nu8);
    if c51 then L169() else L38(c51);
  D30():
    deopt 98 [c38, nv4, np2];
  D31():
    deopt 106 [];
  D36():
    deopt 127 [];
  D49():
    deopt 174 [];
  D56():
    deopt 190 [];
  D62():
    deopt 205 [res3, nu5];
  L38(c53):
    c57 = `as.logical`(c53);
    if c57 then L173() else L39();
  L112():
    np3 = force? np2;
    checkMissing(np3);
    r46 = `<=`(nv4, np3);
    c41 = `as.logical`(r46);
    c42 = `&&`(c38, c41);
    goto L24(c42);
  L115():
    p13 = prom<V +>{
      zero = ld zero;
      zero1 = force? zero;
      checkMissing(zero1);
      return zero1;
    };
    p14 = prom<V +>{
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      return n9;
    };
    p15 = prom<V +>{
      np4 = ld np;
      np5 = force? np4;
      checkMissing(np5);
      return np5;
    };
    r50 = dyn matrix(p13, p14, p15);
    check L116() else D32();
  L121():
    p21 = prom<V +>{
      zero4 = ld zero;
      zero5 = force? zero4;
      checkMissing(zero5);
      return zero5;
    };
    p22 = prom<V +>{
      n10 = ld n;
      n11 = force? n10;
      checkMissing(n11);
      return n11;
    };
    p23 = prom<V +>{
      n12 = ld n;
      n13 = force? n12;
      checkMissing(n13);
      return n13;
    };
    r58 = dyn matrix2(p21, p22, p23);
    check L122() else D37();
  L140():
    p37 = prom<V +>{
      sym11 = ldf min;
      base11 = ldf min in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r72):
      return r72;
    L1():
      n16 = ld n;
      n17 = force? n16;
      checkMissing(n17);
      p35 = ld p;
      p36 = force? p35;
      checkMissing(p36);
      min3 = ldf min in base;
      r73 = dyn min3(n17, p36);
      goto L0(r73);
    L2():
      r71 = dyn base11(<sym n>, <sym p>);
      goto L0(r71);
    };
    r75 = dyn double(p37);
    check L141() else D50();
  L150():
    p40 = prom<V +>{
      sym13 = ldf min;
      base13 = ldf min in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r80):
      return r80;
    L1():
      n18 = ld n;
      n19 = force? n18;
      checkMissing(n19);
      p38 = ld p;
      p39 = force? p38;
      checkMissing(p39);
      min4 = ldf min in base;
      r81 = dyn min4(n19, p39);
      goto L0(r81);
    L2():
      r79 = dyn base13(<sym n>, <sym p>);
      goto L0(r79);
    };
    r83 = dyn double1(p40);
    check L151() else D57();
  L161():
    nu6 = force? nu5;
    checkMissing(nu6);
    c48 = `as.logical`(nu6);
    if c48 then L162() else L34();
  L169():
    nu9 = ld nu;
    check L170() else D66();
  D32():
    deopt 110 [r50];
  D37():
    deopt 131 [r58];
  D50():
    deopt 176 [r75];
  D57():
    deopt 192 [r83];
  D66():
    deopt 223 [c51, nu9];
  L34():
    goto L35(res3, NULL);
  L35(res9, r87):
    nv5 = ld nv;
    check L164() else D63();
  L39():
    goto L43();
  L43():
    nv7 = ld nv;
    check L194() else D72();
  L116():
    st u = r50;
    matrix1 = ldf matrix;
    check L117() else D33();
  L122():
    st u = r58;
    matrix3 = ldf matrix;
    check L123() else D38();
  L141():
    u = ld u;
    check L142() else D51();
  L151():
    u2 = ld u;
    check L152() else D58();
  L162():
    goto L35(res3, "u");
  L170():
    nu10 = force? nu9;
    checkMissing(nu10);
    nu11 = ld nu0;
    check L171() else D67();
  L173():
    res13 = ld res;
    check L174() else D68();
  D33():
    deopt 113 [];
  D38():
    deopt 134 [];
  D51():
    deopt 177 [u];
  D58():
    deopt 193 [u2];
  D63():
    deopt 211 [res9, nv5];
  D67():
    deopt 224 [c51, nu10, nu11];
  D68():
    deopt 228 [res13];
  D72():
    deopt 251 [nv7];
  L117():
    p16 = prom<V +>{
      zero2 = ld zero;
      zero3 = force? zero2;
      checkMissing(zero3);
      return zero3;
    };
    p17 = prom<V +>{
      np6 = ld np;
      np7 = force? np6;
      checkMissing(np7);
      return np7;
    };
    p20 = prom<V +>{
      p18 = ld p;
      p19 = force? p18;
      checkMissing(p19);
      return p19;
    };
    r54 = dyn matrix1(p16, p17, p20);
    check L118() else D34();
  L123():
    p24 = prom<V +>{
      zero6 = ld zero;
      zero7 = force? zero6;
      checkMissing(zero7);
      return zero7;
    };
    p27 = prom<V +>{
      p25 = ld p;
      p26 = force? p25;
      checkMissing(p26);
      return p26;
    };
    p30 = prom<V +>{
      p28 = ld p;
      p29 = force? p28;
      checkMissing(p29);
      return p29;
    };
    r62 = dyn matrix3(p24, p27, p30);
    check L124() else D39();
  L142():
    u1 = force? u;
    checkMissing(u1);
    vt = ld vt;
    check L143() else D52();
  L152():
    u3 = force? u2;
    checkMissing(u3);
    vt2 = ld vt;
    check L153() else D59();
  L164():
    nv6 = force? nv5;
    checkMissing(nv6);
    c49 = `as.logical`(nv6);
    if c49 then L165() else L36();
  L171():
    nu12 = force? nu11;
    checkMissing(nu12);
    r91 = `<`(nu10, nu12);
    c54 = `as.logical`(r91);
    c55 = `&&`(c51, c54);
    goto L38(c55);
  L174():
    res14 = force? res13;
    checkMissing(res14);
    c58 = `is.object`(res14);
    if c58 then L176() else L177(res14);
  L194():
    nv8 = force? nv7;
    checkMissing(nv8);
    c61 = `as.logical`(nv8);
    if c61 then L195() else L44(c61);
  D34():
    deopt 117 [r54];
  D39():
    deopt 138 [r62];
  D52():
    deopt 179 [vt];
  D59():
    deopt 195 [vt2];
  L36():
    goto L37(res9, NULL);
  L37(res12, r88):
    c50 = ldf c in base;
    r89 = dyn c50("d", r87, r88);
    check L167() else D64();
  L44(c63):
    c67 = `as.logical`(c63);
    if c67 then L199() else L45();
  L118():
    st vt = r54;
    np8 = ld np;
    check L119() else D35();
  L124():
    st vt = r62;
    n14 = ld n;
    check L125() else D40();
  L143():
    vt1 = force? vt;
    checkMissing(vt1);
    La_svd_cmplx = ldf La_svd_cmplx in base;
    r76 = dyn La_svd_cmplx(jobu1, x20, r75, u1, vt1);
    check L144() else D53();
  L153():
    vt3 = force? vt2;
    checkMissing(vt3);
    La_svd = ldf La_svd in base;
    r84 = dyn La_svd(jobu3, x22, r83, u3, vt3);
    check L154() else D60();
  L165():
    goto L37(res9, "vt");
  L175(dx3):
    c59 = `is.object`(dx3);
    if c59 then L179() else L180(dx3);
  L176():
    dr2 = tryDispatchBuiltin.1("$", res14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L178() else L177(dr2);
  L177(res16):
    r92 = `$`(res16, <sym u>);
    goto L175(r92);
  L195():
    nv9 = ld nv;
    check L196() else D73();
  D35():
    deopt 119 [np8];
  D40():
    deopt 140 [n14];
  D53():
    deopt 182 [r76];
  D60():
    deopt 198 [r84];
  D64():
    deopt 218 [res12, r89];
  D73():
    deopt 253 [c61, nv9];
  L40(dx7):
    l = ld res;
    c60 = `is.object`(l);
    if c60 then L190() else L191(dx7, l);
  L45():
    goto L49();
  L49():
    res21 = ld res;
    check L220() else D79();
  L119():
    np9 = force? np8;
    checkMissing(np9);
    st nv0 = np9;
    st nu0 = np9;
    goto L26(np9);
  L125():
    n15 = force? n14;
    checkMissing(n15);
    st nu0 = n15;
    p31 = ld p;
    check L126() else D41();
  L144():
    goto L30(r76);
  L154():
    goto L31(r84);
  L167():
    goto L33(res12, r89);
  L178():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L175(dx2);
  L179():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L181() else L180(dr4);
  L180(dx5):
    sym15 = ldf seq_len;
    base15 = ldf seq_len in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L182() else L183();
  L196():
    nv10 = force? nv9;
    checkMissing(nv10);
    nv11 = ld nv0;
    check L197() else D74();
  L199():
    res17 = ld res;
    check L200() else D75();
  D41():
    deopt 143 [p31];
  D74():
    deopt 254 [c61, nv10, nv11];
  D75():
    deopt 258 [res17];
  D79():
    deopt 281 [res21];
  L41(r94):
    __1 = ldf `[` in base;
    r99 = dyn __1(dx3, <missing>, r94, FALSE);
    goto L40(r99);
  L126():
    p32 = force? p31;
    checkMissing(p32);
    st nv0 = p32;
    goto L26(p32);
  L181():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L40(dx6);
  L182():
    sym16 = ldf min;
    base16 = ldf min in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L184() else L185();
  L183():
    r93 = dyn base15(<lang min(n, nu)>);
    goto L41(r93);
  L189(dx18, dx19):
    st res = dx19;
    goto L43();
  L190():
    dr6 = tryDispatchBuiltin.0("$<-", l, dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L192() else L191(dx7, dr6);
  L191(dx15, l2):
    r100 = `$<-`(l2, <sym u>, dx7);
    goto L189(dx15, r100);
  L197():
    nv12 = force? nv11;
    checkMissing(nv12);
    r101 = `<`(nv10, nv12);
    c64 = `as.logical`(r101);
    c65 = `&&`(c61, c64);
    goto L44(c65);
  L200():
    res18 = force? res17;
    checkMissing(res18);
    c68 = `is.object`(res18);
    if c68 then L202() else L203(res18);
  L220():
    res22 = force? res21;
    checkMissing(res22);
    popenv;
    return res22;
  L42(dx13, r96):
    r98 = seq_len(r96);
    goto L41(r98);
  L184():
    n20 = ld n;
    check L186() else D69();
  L185():
    r95 = dyn base16(<sym n>, <sym nu>);
    goto L42(dx5, r95);
  L192():
    dx17 = getTryDispatchBuiltinValue(dr6);
    goto L189(dx7, dx17);
  L201(dx22):
    c69 = `is.object`(dx22);
    if c69 then L205() else L206(dx22);
  L202():
    dr8 = tryDispatchBuiltin.1("$", res18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L204() else L203(dr8);
  L203(res20):
    r102 = `$`(res20, <sym vt>);
    goto L201(r102);
  D69():
    deopt 235 [dx5, n20];
  L46(dx26):
    l3 = ld res;
    c70 = `is.object`(l3);
    if c70 then L216() else L217(dx26, l3);
  L186():
    n21 = force? n20;
    checkMissing(n21);
    nu13 = ld nu;
    check L187() else D70();
  L204():
    dx21 = getTryDispatchBuiltinValue(dr8);
    goto L201(dx21);
  L205():
    dr10 = tryDispatchBuiltin.1("[", dx22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L207() else L206(dr10);
  L206(dx24):
    sym17 = ldf seq_len;
    base17 = ldf seq_len in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L208() else L209();
  D70():
    deopt 237 [dx5, nu13];
  L47(r104):
    __2 = ldf `[` in base;
    r109 = dyn __2(dx22, r104, <missing>, FALSE);
    goto L46(r109);
  L187():
    nu14 = force? nu13;
    checkMissing(nu14);
    min5 = ldf min in base;
    r97 = dyn min5(n21, nu14);
    check L188() else D71();
  L207():
    dx25 = getTryDispatchBuiltinValue(dr10);
    goto L46(dx25);
  L208():
    sym18 = ldf min;
    base18 = ldf min in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L210() else L211();
  L209():
    r103 = dyn base17(<lang min(p, nv)>);
    goto L47(r103);
  L215(dx37, dx38):
    st res = dx38;
    goto L49();
  L216():
    dr12 = tryDispatchBuiltin.0("$<-", l3, dx26);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L218() else L217(dx26, dr12);
  L217(dx34, l5):
    r110 = `$<-`(l5, <sym vt>, dx26);
    goto L215(dx34, r110);
  D71():
    deopt 240 [dx5, r97];
  L48(dx32, r106):
    r108 = seq_len(r106);
    goto L47(r108);
  L188():
    goto L42(dx5, r97);
  L210():
    p41 = ld p;
    check L212() else D76();
  L211():
    r105 = dyn base18(<sym p>, <sym nv>);
    goto L48(dx24, r105);
  L218():
    dx36 = getTryDispatchBuiltinValue(dr12);
    goto L215(dx26, dx36);
  D76():
    deopt 264 [dx24, p41];
  L212():
    p42 = force? p41;
    checkMissing(p42);
    nv13 = ld nv;
    check L213() else D77();
  D77():
    deopt 266 [dx24, nv13];
  L213():
    nv14 = force? nv13;
    checkMissing(nv14);
    min6 = ldf min in base;
    r107 = dyn min6(p42, nv14);
    check L214() else D78();
  D78():
    deopt 269 [dx24, r107];
  L214():
    goto L48(dx24, r107);
  }
}