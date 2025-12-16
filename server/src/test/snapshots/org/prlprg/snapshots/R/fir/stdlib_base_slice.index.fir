fun main() {
  () -+> V { reg r:cls, reg array:cls, reg r1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg slice_index:cls, reg x:*, reg x1:V, reg p2:p(V +), reg r9:V, reg slice_index1:cls, reg x2:*, reg x3:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg c1:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg which:cls, reg slice_index2:cls, reg x4:*, reg x5:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg c2:cls, reg r19:V, reg p6:p(V +), reg r21:V, reg r22:V, reg p7:p(V +), reg r24:V |
    mkenv;
    r = clos inner38770071;
    st `slice.index` = r;
    array = ldf array;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      r1 = `:`(1.0, 24.0);
      return r1;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c = ldf c in base;
      r5 = dyn c(2.0, 3.0, 4.0);
      goto L0(r5);
    L2():
      r3 = dyn base(2.0, 3.0, 4.0);
      goto L0(r3);
    };
    r7 = dyn array(p, p1);
    check L1() else D1();
  D1():
    deopt 7 [r7];
  L1():
    st x = r7;
    slice_index = ldf `slice.index`;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r9 = dyn slice_index(p2, 2.0);
    check L3() else D3();
  D3():
    deopt 13 [r9];
  L3():
    slice_index1 = ldf `slice.index`;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p3 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c1 = ldf c in base;
      r13 = dyn c1(1.0, 3.0);
      goto L0(r13);
    L2():
      r11 = dyn base1(1.0, 3.0);
      goto L0(r11);
    };
    r15 = dyn slice_index1(p3, p4);
    check L5() else D5();
  D5():
    deopt 18 [r15];
  L5():
    which = ldf which;
    check L6() else D6();
  D6():
    deopt 20 [];
  L6():
    p7 = prom<V +>{
      slice_index2 = ldf `slice.index`;
      p5 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      p6 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r18):
        return r18;
      L1():
        c2 = ldf c in base;
        r19 = dyn c2(1.0, 3.0);
        goto L0(r19);
      L2():
        r17 = dyn base2(1.0, 3.0);
        goto L0(r17);
      };
      r21 = dyn slice_index2(p5, p6);
      r22 = `==`(r21, 5.0);
      return r22;
    };
    r24 = dyn which[, `arr.ind`](p7, TRUE);
    check L7() else D7();
  D7():
    deopt 24 [r24];
  L7():
    popenv;
    return r24;
  }
}
fun inner38770071(x, MARGIN) {
  (reg x:*, reg MARGIN:*) -+> V { var x:*, var MARGIN:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dim:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg d:*, reg d1:V, reg c:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg length:cls, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg d2:*, reg d3:V, reg length1:cls, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg MARGIN1:*, reg MARGIN2:V, reg c2:L, reg c3:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r14:V, reg r15:V, reg x5:*, reg x6:V, reg dimnames:cls, reg r16:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r17:V, reg r18:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r19:V, reg r20:V, reg dn:*, reg dn1:V, reg names:cls, reg r21:V, reg c4:V, reg c5:L, reg stop:cls, reg r22:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r24:V, reg r25:V, reg MARGIN3:*, reg MARGIN4:V, reg dnn:*, reg dnn1:V, reg match:cls, reg r26:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r27:V, reg r28:V, reg MARGIN5:*, reg MARGIN6:V, reg anyNA:cls, reg r29:V, reg c6:L, reg stop1:cls, reg r30:V, reg r31:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r33:V, reg r34:V, reg MARGIN7:*, reg MARGIN8:V, reg length2:cls, reg r35:V, reg r36:V, reg c7:L, reg c8:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r37:V, reg c12:L, reg r38:V, reg MARGIN9:*, reg MARGIN10:V, reg r39:V, reg any:cls, reg r40:V, reg c13:L, reg c14:V, reg c16:L, reg c17:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r41:V, reg c21:L, reg r42:V, reg MARGIN11:*, reg MARGIN12:V, reg n:*, reg n1:V, reg r43:V, reg any1:cls, reg r44:V, reg c22:L, reg c23:V, reg c25:L, reg stop2:cls, reg r45:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r47:V, reg r48:V, reg d4:*, reg d5:V, reg r49:V, reg any2:cls, reg r50:V, reg c26:L, reg array:cls, reg integer:cls, reg r51:V, reg p:p(V +), reg d6:*, reg d7:V, reg p1:p(V +), reg r54:V, reg MARGIN13:*, reg MARGIN14:V, reg c27:L, reg MARGIN16:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r57:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r58:V, reg r59:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r60:V, reg r61:V, reg d8:*, reg d9:V, reg c28:L, reg r63:I, reg d11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r65:I, reg dx3:V, reg m:*, reg m1:V, reg __1:cls, reg r66:V, reg r67:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r68:V, reg r69:V, reg d12:*, reg d13:V, reg c29:L, reg d15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r70:V, reg d18:V, reg r71:V, reg m2:*, reg m3:V, reg r72:V, reg r73:I, reg __2:cls, reg r74:V, reg prod:cls, reg r75:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r78:V, reg r79:V, reg r80:V, reg d19:*, reg d20:V, reg c30:L, reg r82:V, reg d22:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r84:V, reg dx7:V, reg m4:*, reg m5:V, reg __3:cls, reg r85:V, reg rep_int:cls, reg r86:V, reg r87:V, reg rep_int1:cls, reg r88:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r89:V, reg r90:V, reg d23:*, reg d24:V, reg c31:L, reg d26:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r91:V, reg d29:V, reg r92:V, reg m6:*, reg m7:V, reg r93:V, reg n2:*, reg n3:V, reg m8:*, reg m9:V, reg r94:V, reg seq_int:cls, reg r95:V, reg __4:cls, reg r96:V, reg prod1:cls, reg r97:V, reg rep_int2:cls, reg r98:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r99:V, reg r100:V, reg MARGIN17:*, reg MARGIN18:V, reg length3:cls, reg r101:V, reg r102:V, reg c32:L, reg d30:*, reg d31:V, reg c33:L, reg d33:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg m10:*, reg m11:V, reg __5:cls, reg r103:V, reg MARGIN19:*, reg MARGIN20:V, reg c34:L, reg MARGIN22:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __6:cls, reg r104:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c35:L, reg x7:V, reg y:*, reg y1:V, reg p2:*, reg p3:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r105:V, reg i7:I, reg y4:V, reg p6:V, reg r106:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r107:V, reg i10:I, reg y7:V, reg p9:V, reg r108:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r109:V, reg i13:I, reg y10:V, reg p12:V, reg r110:V, reg d34:*, reg d35:V, reg c36:L, reg i15:I, reg y12:V, reg p14:V, reg d37:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i17:I, reg y14:V, reg p16:V, reg dx15:V, reg m12:*, reg m13:V, reg __7:cls, reg r111:V, reg r112:V, reg seq_int1:cls, reg r113:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r114:V, reg i20:I, reg y17:V, reg p19:V, reg r115:V, reg d38:*, reg d39:V, reg c37:L, reg i22:I, reg y19:V, reg p21:V, reg d41:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i24:I, reg y21:V, reg p23:V, reg dx17:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r116:V, reg i27:I, reg y24:V, reg p26:V, reg d44:V, reg r117:V, reg m14:*, reg m15:V, reg r118:V, reg r119:I, reg __8:cls, reg r120:V, reg prod2:cls, reg r121:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r124:V, reg i30:I, reg y27:V, reg p29:V, reg r125:V, reg r126:V, reg d45:*, reg d46:V, reg c38:L, reg i32:I, reg y29:V, reg p31:V, reg r128:V, reg d48:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i34:I, reg y31:V, reg p33:V, reg r130:V, reg dx19:V, reg m16:*, reg m17:V, reg __9:cls, reg r131:V, reg rep_int3:cls, reg r132:V, reg r133:V, reg rep_int4:cls, reg r134:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r135:V, reg i37:I, reg y34:V, reg p36:V, reg r136:V, reg d49:*, reg d50:V, reg c39:L, reg i39:I, reg y36:V, reg p38:V, reg d52:V, reg dr20:V, reg dc10:L, reg dx20:V, reg i41:I, reg y38:V, reg p40:V, reg dx21:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r137:V, reg i44:I, reg y41:V, reg p43:V, reg d55:V, reg r138:V, reg m18:*, reg m19:V, reg r139:V, reg n4:*, reg n5:V, reg m20:*, reg m21:V, reg r140:V, reg seq_int2:cls, reg r141:V, reg __10:cls, reg r142:V, reg prod3:cls, reg r143:V, reg rep_int5:cls, reg r144:V, reg r145:V, reg r146:V, reg p44:*, reg p45:V, reg d56:*, reg d57:V, reg c40:L, reg i46:I, reg p47:V, reg d59:V, reg dr22:V, reg dc11:L, reg dx22:V, reg i48:I, reg p49:V, reg dx23:V, reg m22:*, reg m23:V, reg __11:cls, reg r147:V, reg r148:V, reg d60:*, reg d61:V, reg l1:*, reg dim__:cls, reg r149:V, reg y42:*, reg y43:V |
    mkenv;
    st x = x;
    st MARGIN = MARGIN;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L60() else L61();
  L0(r1):
    st d = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L64() else L65();
  L60():
    x1 = ld x;
    check L62() else D0();
  L61():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L67() else L2();
  L62():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r2 = dyn dim(x2);
    check L63() else D1();
  L64():
    d = ld d;
    check L66() else D2();
  L65():
    r3 = dyn base1(<sym d>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [d];
  L2():
    goto L4();
  L4():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L73() else L74();
  L63():
    goto L0(r2);
  L66():
    d1 = force? d;
    checkMissing(d1);
    c = `==`(d1, NULL);
    goto L1(c);
  L67():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L68() else L69();
  L3(r6):
    st d = r6;
    goto L4();
  L5(r10):
    st n = r10;
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L77() else L78();
  L68():
    x3 = ld x;
    check L70() else D3();
  L69():
    r5 = dyn base2(<sym x>);
    goto L3(r5);
  L73():
    d2 = ld d;
    check L75() else D5();
  L74():
    r9 = dyn base3(<sym d>);
    goto L5(r9);
  D3():
    deopt 13 [x3];
  D5():
    deopt 22 [d2];
  L6(r13):
    c3 = `as.logical`(r13);
    if c3 then L80() else L7();
  L70():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r7 = dyn length(x4);
    check L71() else D4();
  L75():
    d3 = force? d2;
    checkMissing(d3);
    length1 = ldf length in base;
    r11 = dyn length1(d3);
    check L76() else D6();
  L77():
    MARGIN1 = ld MARGIN;
    check L79() else D7();
  L78():
    r12 = dyn base4(<sym MARGIN>);
    goto L6(r12);
  D4():
    deopt 16 [r7];
  D6():
    deopt 25 [r11];
  D7():
    deopt 28 [MARGIN1];
  L7():
    goto L17();
  L17():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L109() else L110();
  L71():
    goto L3(r7);
  L76():
    goto L5(r11);
  L79():
    MARGIN2 = force? MARGIN1;
    checkMissing(MARGIN2);
    c2 = `is.character`(MARGIN2);
    goto L6(c2);
  L80():
    sym5 = ldf dimnames;
    base5 = ldf dimnames in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L81() else L82();
  L8(r15):
    st dn = r15;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L85() else L86();
  L18(r34):
    r36 = `!`(r34);
    c7 = `as.logical`(r36);
    if c7 then L19(c7) else L113();
  L81():
    x5 = ld x;
    check L83() else D8();
  L82():
    r14 = dyn base5(<sym x>);
    goto L8(r14);
  L109():
    MARGIN7 = ld MARGIN;
    check L111() else D21();
  L110():
    r33 = dyn base10(<sym MARGIN>);
    goto L18(r33);
  D8():
    deopt 33 [x5];
  D21():
    deopt 80 [MARGIN7];
  L9(r18):
    c5 = `as.logical`(r18);
    if c5 then L91() else L11();
  L19(c8):
    c16 = `as.logical`(c8);
    if c16 then L21(c16) else L119();
  L83():
    x6 = force? x5;
    checkMissing(x6);
    dimnames = ldf dimnames in base;
    r16 = dyn dimnames(x6);
    check L84() else D9();
  L85():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L87() else L88();
  L86():
    r17 = dyn base6(<lang `<-`(dnn, names(dn))>);
    goto L9(r17);
  L111():
    MARGIN8 = force? MARGIN7;
    checkMissing(MARGIN8);
    length2 = ldf length in base;
    r35 = dyn length2(MARGIN8);
    check L112() else D22();
  L113():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L114() else L115();
  D9():
    deopt 36 [r16];
  D22():
    deopt 83 [r35];
  L10(r20):
    st dnn = r20;
    c4 = `==`(r20, NULL);
    goto L9(c4);
  L11():
    goto L12();
  L12():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L95() else L96();
  L20(c12, r38):
    c13 = `as.logical`(r38);
    c14 = `||`(c12, c13);
    goto L19(c14);
  L21(c17):
    c25 = `as.logical`(c17);
    if c25 then L126() else L23();
  L84():
    goto L8(r16);
  L87():
    dn = ld dn;
    check L89() else D10();
  L88():
    r19 = dyn base7(<sym dn>);
    goto L10(r19);
  L91():
    stop = ldf stop;
    check L92() else D12();
  L112():
    goto L18(r35);
  L114():
    MARGIN9 = ld MARGIN;
    check L116() else D23();
  L115():
    r37 = dyn base11(<lang `<`(MARGIN, 1)>);
    goto L20(c7, r37);
  L119():
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L120() else L121();
  D10():
    deopt 41 [dn];
  D12():
    deopt 48 [];
  D23():
    deopt 87 [c7, MARGIN9];
  L13(r25):
    st MARGIN = r25;
    sym9 = ldf anyNA;
    base9 = ldf anyNA in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L100() else L101();
  L22(c21, r42):
    c22 = `as.logical`(r42);
    c23 = `||`(c21, c22);
    goto L21(c23);
  L23():
    goto L24();
  L24():
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L130() else L131();
  L89():
    dn1 = force? dn;
    checkMissing(dn1);
    names = ldf names in base;
    r21 = dyn names(dn1);
    check L90() else D11();
  L92():
    r22 = dyn stop("'x' must have named dimnames");
    check L93() else D13();
  L95():
    MARGIN3 = ld MARGIN;
    check L97() else D14();
  L96():
    r24 = dyn base8(<sym MARGIN>, <sym dnn>);
    goto L13(r24);
  L116():
    MARGIN10 = force? MARGIN9;
    checkMissing(MARGIN10);
    r39 = `<`(MARGIN10, 1);
    any = ldf any in base;
    r40 = dyn any(r39);
    check L117() else D24();
  L120():
    MARGIN11 = ld MARGIN;
    check L122() else D25();
  L121():
    r41 = dyn base12(<lang `>`(MARGIN, n)>);
    goto L22(c16, r41);
  L126():
    stop2 = ldf stop;
    check L127() else D28();
  D11():
    deopt 44 [r21];
  D13():
    deopt 50 [r22];
  D14():
    deopt 55 [MARGIN3];
  D24():
    deopt 92 [c7, r40];
  D25():
    deopt 96 [c16, MARGIN11];
  D28():
    deopt 104 [];
  L14(r28):
    c6 = `as.logical`(r28);
    if c6 then L104() else L15();
  L25(r48):
    c26 = `as.logical`(r48);
    if c26 then L134() else L26();
  L90():
    goto L10(r21);
  L93():
    goto L12();
  L97():
    MARGIN4 = force? MARGIN3;
    checkMissing(MARGIN4);
    dnn = ld dnn;
    check L98() else D15();
  L100():
    MARGIN5 = ld MARGIN;
    check L102() else D17();
  L101():
    r27 = dyn base9(<sym MARGIN>);
    goto L14(r27);
  L117():
    goto L20(c7, r40);
  L122():
    MARGIN12 = force? MARGIN11;
    checkMissing(MARGIN12);
    n = ld n;
    check L123() else D26();
  L127():
    r45 = dyn stop2("incorrect value for 'MARGIN'");
    check L128() else D29();
  L130():
    d4 = ld d;
    check L132() else D30();
  L131():
    r47 = dyn base13(<lang `==`(d, 0)>);
    goto L25(r47);
  D15():
    deopt 57 [dnn];
  D17():
    deopt 66 [MARGIN5];
  D26():
    deopt 97 [c16, MARGIN12, n];
  D29():
    deopt 106 [r45];
  D30():
    deopt 111 [d4];
  L15():
    goto L16(NULL);
  L16(r31):
    goto L17();
  L26():
    MARGIN13 = ld MARGIN;
    check L139() else D34();
  L98():
    dnn1 = force? dnn;
    checkMissing(dnn1);
    match = ldf match in base;
    r26 = dyn match(MARGIN4, dnn1, NA_INT, NULL);
    check L99() else D16();
  L102():
    MARGIN6 = force? MARGIN5;
    checkMissing(MARGIN6);
    anyNA = ldf anyNA in base;
    r29 = dyn anyNA(MARGIN6);
    check L103() else D18();
  L104():
    stop1 = ldf stop;
    check L105() else D19();
  L123():
    n1 = force? n;
    checkMissing(n1);
    r43 = `>`(MARGIN12, n1);
    any1 = ldf any in base;
    r44 = dyn any1(r43);
    check L124() else D27();
  L128():
    goto L24();
  L132():
    d5 = force? d4;
    checkMissing(d5);
    r49 = `==`(d5, 0);
    any2 = ldf any in base;
    r50 = dyn any2(r49);
    check L133() else D31();
  L134():
    array = ldf array;
    check L135() else D32();
  D16():
    deopt 62 [r26];
  D18():
    deopt 69 [r29];
  D19():
    deopt 71 [];
  D27():
    deopt 101 [c16, r44];
  D31():
    deopt 116 [r50];
  D32():
    deopt 118 [];
  D34():
    deopt 125 [MARGIN13];
  L99():
    goto L13(r26);
  L103():
    goto L14(r29);
  L105():
    r30 = dyn stop1("not all elements of 'MARGIN' are names of dimensions");
    check L106() else D20();
  L124():
    goto L22(c16, r44);
  L133():
    goto L25(r50);
  L135():
    p = prom<V +>{
      integer = ldf integer;
      r51 = dyn integer();
      return r51;
    };
    p1 = prom<V +>{
      d6 = ld d;
      d7 = force? d6;
      checkMissing(d7);
      return d7;
    };
    r54 = dyn array(p, p1);
    check L136() else D33();
  L139():
    MARGIN14 = force? MARGIN13;
    checkMissing(MARGIN14);
    c27 = `is.object`(MARGIN14);
    if c27 then L140() else L141(MARGIN14);
  D20():
    deopt 73 [r30];
  D33():
    deopt 121 [r54];
  L28(dx1):
    st m = dx1;
    sym14 = ldf `rep.int`;
    base14 = ldf `rep.int` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L143() else L144();
  L106():
    goto L16(r30);
  L136():
    popenv;
    return r54;
  L140():
    dr = tryDispatchBuiltin.1("[", MARGIN14);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L142() else L141(dr);
  L141(MARGIN16):
    __ = ldf `[` in base;
    r57 = dyn __(MARGIN16, 1);
    goto L28(r57);
  L29(r59):
    st y = r59;
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L185() else L186();
  L142():
    dx = getTryDispatchBuiltinValue(dr);
    goto L28(dx);
  L143():
    sym15 = ldf `rep.int`;
    base15 = ldf `rep.int` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L145() else L146();
  L144():
    r58 = dyn base14(<lang rep.int(`:`(1, `[`(d, m)), `*`(prod(`[`(d, seq_len(`-`(m, 1)))), rep.int(1, `[`(d, m))))>, <lang prod(`[`(d, seq.int(from=`+`(m, 1), length.out=`-`(n, m))))>);
    goto L29(r58);
  L30(r61):
    sym19 = ldf prod;
    base19 = ldf prod in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L171() else L172();
  L40(r100):
    r102 = `>`(r100, 1);
    c32 = `as.logical`(r102);
    if c32 then L189() else L41();
  L145():
    d8 = ld d;
    check L147() else D35();
  L146():
    r60 = dyn base15(<lang `:`(1, `[`(d, m))>, <lang `*`(prod(`[`(d, seq_len(`-`(m, 1)))), rep.int(1, `[`(d, m)))>);
    goto L30(r60);
  L185():
    MARGIN17 = ld MARGIN;
    check L187() else D51();
  L186():
    r99 = dyn base21(<sym MARGIN>);
    goto L40(r99);
  D35():
    deopt 136 [1, d8];
  D51():
    deopt 193 [MARGIN17];
  L37(r90):
    rep_int2 = ldf `rep.int` in base;
    r98 = dyn rep_int2(r61, r90);
    check L184() else D50();
  L41():
    goto L59();
  L59():
    d60 = ld d;
    check L254() else D78();
  L147():
    d9 = force? d8;
    checkMissing(d9);
    c28 = `is.object`(d9);
    if c28 then L148() else L149(1, d9);
  L171():
    d23 = ld d;
    check L173() else D44();
  L172():
    r89 = dyn base19(<lang `[`(d, seq.int(from=`+`(m, 1), length.out=`-`(n, m)))>);
    goto L37(r89);
  L187():
    MARGIN18 = force? MARGIN17;
    checkMissing(MARGIN18);
    length3 = ldf length in base;
    r101 = dyn length3(MARGIN18);
    check L188() else D52();
  L189():
    d30 = ld d;
    check L190() else D53();
  D44():
    deopt 169 [d23];
  D50():
    deopt 189 [r98];
  D52():
    deopt 196 [r101];
  D53():
    deopt 199 [d30];
  D78():
    deopt 292 [d60];
  L31(r65, dx3):
    r67 = `:`(r65, dx3);
    sym16 = ldf prod;
    base16 = ldf prod in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L152() else L153();
  L148():
    dr2 = tryDispatchBuiltin.1("[", d9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L150() else L149(1, dr2);
  L149(r63, d11):
    m = ld m;
    check L151() else D36();
  L173():
    d24 = force? d23;
    checkMissing(d24);
    c31 = `is.object`(d24);
    if c31 then L174() else L175(d24);
  L184():
    goto L29(r98);
  L188():
    goto L40(r101);
  L190():
    d31 = force? d30;
    checkMissing(d31);
    c33 = `is.object`(d31);
    if c33 then L191() else L192(d31);
  L254():
    d61 = force? d60;
    checkMissing(d61);
    l1 = ld y;
    dim__ = ldf `dim<-`;
    check L255() else D79();
  D36():
    deopt 138 [r63, d11, m];
  D79():
    deopt 295 [d61, l1, d61];
  L32(r69):
    sym18 = ldf `rep.int`;
    base18 = ldf `rep.int` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L162() else L163();
  L38(dx9):
    prod1 = ldf prod in base;
    r97 = dyn prod1(dx9);
    check L183() else D49();
  L42(dx11):
    st p = dx11;
    MARGIN19 = ld MARGIN;
    check L195() else D55();
  L150():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L31(1, dx2);
  L151():
    m1 = force? m;
    __1 = ldf `[` in base;
    r66 = dyn __1(d11, m1);
    goto L31(r63, r66);
  L152():
    d12 = ld d;
    check L154() else D37();
  L153():
    r68 = dyn base16(<lang `[`(d, seq_len(`-`(m, 1)))>);
    goto L32(r68);
  L174():
    dr8 = tryDispatchBuiltin.1("[", d24);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L176() else L175(dr8);
  L175(d26):
    sym20 = ldf `seq.int`;
    base20 = ldf `seq.int` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L177() else L178();
  L191():
    dr10 = tryDispatchBuiltin.1("[", d31);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L193() else L192(dr10);
  L192(d33):
    m10 = ld m;
    check L194() else D54();
  L255():
    r149 = dyn dim__(l1, NULL, d61);
    check L256() else D80();
  D37():
    deopt 144 [d12];
  D49():
    deopt 187 [r97];
  D54():
    deopt 201 [d33, m10];
  D55():
    deopt 205 [MARGIN19];
  D80():
    deopt 297 [d61, r149];
  L35(r79, r80):
    r87 = `*`(r79, r80);
    rep_int1 = ldf `rep.int` in base;
    r88 = dyn rep_int1(r67, r87);
    check L170() else D43();
  L39(d29, r92):
    __4 = ldf `[` in base;
    r96 = dyn __4(d29, r92);
    goto L38(r96);
  L154():
    d13 = force? d12;
    checkMissing(d13);
    c29 = `is.object`(d13);
    if c29 then L155() else L156(d13);
  L162():
    d19 = ld d;
    check L164() else D40();
  L163():
    r78 = dyn base18(1, <lang `[`(d, m)>);
    goto L35(r69, r78);
  L176():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L38(dx8);
  L177():
    m6 = ld m;
    check L179() else D45();
  L178():
    r91 = dyn base20[from, `length.out`](<lang `+`(m, 1)>, <lang `-`(n, m)>);
    goto L39(d26, r91);
  L183():
    goto L37(r97);
  L193():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L42(dx10);
  L194():
    m11 = force? m10;
    __5 = ldf `[` in base;
    r103 = dyn __5(d33, m11);
    goto L42(r103);
  L195():
    MARGIN20 = force? MARGIN19;
    checkMissing(MARGIN20);
    c34 = `is.object`(MARGIN20);
    if c34 then L196() else L197(MARGIN20);
  L256():
    st y = r149;
    y42 = ld y;
    check L257() else D81();
  D40():
    deopt 157 [r69, d19];
  D43():
    deopt 166 [r88];
  D45():
    deopt 173 [d26, m6];
  D81():
    deopt 299 [y42];
  L33(dx5):
    prod = ldf prod in base;
    r75 = dyn prod(dx5);
    check L161() else D39();
  L43(dx13):
    s = toForSeq(dx13);
    l = length(s);
    i = 0;
    goto L44(i);
  L155():
    dr4 = tryDispatchBuiltin.1("[", d13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L157() else L156(dr4);
  L156(d15):
    sym17 = ldf seq_len;
    base17 = ldf seq_len in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L158() else L159();
  L164():
    d20 = force? d19;
    checkMissing(d20);
    c30 = `is.object`(d20);
    if c30 then L165() else L166(r69, d20);
  L170():
    goto L30(r88);
  L179():
    m7 = force? m6;
    checkMissing(m7);
    r93 = `+`(m7, 1);
    n2 = ld n;
    check L180() else D46();
  L196():
    dr12 = tryDispatchBuiltin.1("[", MARGIN20);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L198() else L197(dr12);
  L197(MARGIN22):
    __6 = ldf `[` in base;
    r104 = dyn __6(MARGIN22, -1);
    goto L43(r104);
  L257():
    y43 = force? y42;
    checkMissing(y43);
    popenv;
    return y43;
  D39():
    deopt 154 [r75];
  D46():
    deopt 178 [d26, n2];
  L34(d18, r71):
    __2 = ldf `[` in base;
    r74 = dyn __2(d18, r71);
    goto L33(r74);
  L36(r84, dx7):
    rep_int = ldf `rep.int` in base;
    r86 = dyn rep_int(1, dx7);
    check L169() else D42();
  L44(i1):
    i2 = `+`.1(i1, 1);
    c35 = `<`.1(l, i2);
    if c35 then L199() else L58();
  L157():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L33(dx4);
  L158():
    m2 = ld m;
    check L160() else D38();
  L159():
    r70 = dyn base17(<lang `-`(m, 1)>);
    goto L34(d15, r70);
  L161():
    goto L32(r75);
  L165():
    dr6 = tryDispatchBuiltin.1("[", d20);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L167() else L166(r69, dr6);
  L166(r82, d22):
    m4 = ld m;
    check L168() else D41();
  L180():
    n3 = force? n2;
    checkMissing(n3);
    m8 = ld m;
    check L181() else D47();
  L198():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L43(dx12);
  D38():
    deopt 147 [d15, m2];
  D41():
    deopt 159 [r82, d22, m4];
  D42():
    deopt 163 [r84, r86];
  D47():
    deopt 179 [d26, n3, m8];
  L58():
    x7 = `[[`(s, i2, NULL, TRUE);
    st m = x7;
    y = ld y;
    check L200() else D56();
  L160():
    m3 = force? m2;
    checkMissing(m3);
    r72 = `-`(m3, 1);
    r73 = seq_len(r72);
    goto L34(d15, r73);
  L167():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L36(r69, dx6);
  L168():
    m5 = force? m4;
    __3 = ldf `[` in base;
    r85 = dyn __3(d22, m5);
    goto L36(r82, r85);
  L169():
    goto L35(r84, r86);
  L181():
    m9 = force? m8;
    checkMissing(m9);
    r94 = `-`(n3, m9);
    seq_int = ldf `seq.int` in base;
    r95 = dyn seq_int(r93, r94);
    check L182() else D48();
  L199():
    goto L59();
  D48():
    deopt 184 [d26, r95];
  D56():
    deopt 210 [i2, y];
  L182():
    goto L39(d26, r95);
  L200():
    y1 = force? y;
    checkMissing(y1);
    p2 = ld p;
    check L201() else D57();
  D57():
    deopt 211 [i2, y1, p2];
  L201():
    p3 = force? p2;
    checkMissing(p3);
    sym22 = ldf `rep.int`;
    base22 = ldf `rep.int` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L202() else L203();
  L45(i7, y4, p6, r106):
    r145 = `*`(p6, r106);
    r146 = `+`(y4, r145);
    st y = r146;
    p44 = ld p;
    check L247() else D75();
  L202():
    sym23 = ldf `rep.int`;
    base23 = ldf `rep.int` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L204() else L205();
  L203():
    r105 = dyn base22(<lang rep.int(seq.int(0, `-`(`[`(d, m), 1)), `*`(prod(`[`(d, seq_len(`-`(m, 1)))), rep.int(1, `[`(d, m))))>, <lang prod(`[`(d, seq.int(from=`+`(m, 1), length.out=`-`(n, m))))>);
    goto L45(i2, y1, p3, r105);
  D75():
    deopt 279 [i7, p44];
  L46(i10, y7, p9, r108):
    sym28 = ldf prod;
    base28 = ldf prod in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L233() else L234();
  L204():
    sym24 = ldf `seq.int`;
    base24 = ldf `seq.int` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L206() else L207();
  L205():
    r107 = dyn base23(<lang seq.int(0, `-`(`[`(d, m), 1))>, <lang `*`(prod(`[`(d, seq_len(`-`(m, 1)))), rep.int(1, `[`(d, m)))>);
    goto L46(i2, y1, p3, r107);
  L247():
    p45 = force? p44;
    checkMissing(p45);
    d56 = ld d;
    check L248() else D76();
  D76():
    deopt 280 [i7, p45, d56];
  L47(i13, y10, p12, r110):
    sym25 = ldf prod;
    base25 = ldf prod in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L214() else L215();
  L54(i37, y34, p36, r136):
    rep_int5 = ldf `rep.int` in base;
    r144 = dyn rep_int5(r108, r136);
    check L246() else D74();
  L206():
    d34 = ld d;
    check L208() else D58();
  L207():
    r109 = dyn base24(0, <lang `-`(`[`(d, m), 1)>);
    goto L47(i2, y1, p3, r109);
  L233():
    d49 = ld d;
    check L235() else D68();
  L234():
    r135 = dyn base28(<lang `[`(d, seq.int(from=`+`(m, 1), length.out=`-`(n, m)))>);
    goto L54(i10, y7, p9, r135);
  L248():
    d57 = force? d56;
    checkMissing(d57);
    c40 = `is.object`(d57);
    if c40 then L249() else L250(i7, p45, d57);
  D58():
    deopt 219 [i2, y1, p3, d34];
  D68():
    deopt 255 [i10, y7, p9, d49];
  D74():
    deopt 275 [i37, y34, p36, r144];
  L49(i20, y17, p19, r115):
    sym27 = ldf `rep.int`;
    base27 = ldf `rep.int` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L224() else L225();
  L57(i48, p49, dx23):
    r148 = `*`(p49, dx23);
    st p = r148;
    goto L44(i48);
  L208():
    d35 = force? d34;
    checkMissing(d35);
    c36 = `is.object`(d35);
    if c36 then L209() else L210(i2, y1, p3, d35);
  L214():
    d38 = ld d;
    check L216() else D61();
  L215():
    r114 = dyn base25(<lang `[`(d, seq_len(`-`(m, 1)))>);
    goto L49(i13, y10, p12, r114);
  L235():
    d50 = force? d49;
    checkMissing(d50);
    c39 = `is.object`(d50);
    if c39 then L236() else L237(i10, y7, p9, d50);
  L246():
    goto L45(i37, y34, p36, r144);
  L249():
    dr22 = tryDispatchBuiltin.1("[", d57);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L251() else L250(i7, p45, dr22);
  L250(i46, p47, d59):
    m22 = ld m;
    check L252() else D77();
  D61():
    deopt 230 [i13, y10, p12, d38];
  D77():
    deopt 282 [i46, p47, d59, m22];
  L48(i17, y14, p16, dx15):
    r112 = `-`(dx15, 1);
    seq_int1 = ldf `seq.int` in base;
    r113 = dyn seq_int1(0, r112);
    check L213() else D60();
  L52(i30, y27, p29, r125, r126):
    r133 = `*`(r125, r126);
    rep_int4 = ldf `rep.int` in base;
    r134 = dyn rep_int4(r110, r133);
    check L232() else D67();
  L55(i41, y38, p40, dx21):
    prod3 = ldf prod in base;
    r143 = dyn prod3(dx21);
    check L245() else D73();
  L209():
    dr14 = tryDispatchBuiltin.1("[", d35);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L211() else L210(i2, y1, p3, dr14);
  L210(i15, y12, p14, d37):
    m12 = ld m;
    check L212() else D59();
  L216():
    d39 = force? d38;
    checkMissing(d39);
    c37 = `is.object`(d39);
    if c37 then L217() else L218(i13, y10, p12, d39);
  L224():
    d45 = ld d;
    check L226() else D64();
  L225():
    r124 = dyn base27(1, <lang `[`(d, m)>);
    goto L52(i20, y17, p19, r115, r124);
  L236():
    dr20 = tryDispatchBuiltin.1("[", d50);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L238() else L237(i10, y7, p9, dr20);
  L237(i39, y36, p38, d52):
    sym29 = ldf `seq.int`;
    base29 = ldf `seq.int` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L239() else L240();
  L251():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L57(i7, p45, dx22);
  L252():
    m23 = force? m22;
    __11 = ldf `[` in base;
    r147 = dyn __11(d59, m23);
    goto L57(i46, p47, r147);
  D59():
    deopt 221 [i15, y12, p14, d37, m12];
  D60():
    deopt 227 [i17, y14, p16, r113];
  D64():
    deopt 243 [i20, y17, p19, r115, d45];
  D67():
    deopt 252 [i30, y27, p29, r134];
  D73():
    deopt 273 [i41, y38, p40, r143];
  L50(i24, y21, p23, dx17):
    prod2 = ldf prod in base;
    r121 = dyn prod2(dx17);
    check L223() else D63();
  L56(i44, y41, p43, d55, r138):
    __10 = ldf `[` in base;
    r142 = dyn __10(d55, r138);
    goto L55(i44, y41, p43, r142);
  L211():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L48(i2, y1, p3, dx14);
  L212():
    m13 = force? m12;
    __7 = ldf `[` in base;
    r111 = dyn __7(d37, m13);
    goto L48(i15, y12, p14, r111);
  L213():
    goto L47(i17, y14, p16, r113);
  L217():
    dr16 = tryDispatchBuiltin.1("[", d39);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L219() else L218(i13, y10, p12, dr16);
  L218(i22, y19, p21, d41):
    sym26 = ldf seq_len;
    base26 = ldf seq_len in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L220() else L221();
  L226():
    d46 = force? d45;
    checkMissing(d46);
    c38 = `is.object`(d46);
    if c38 then L227() else L228(i20, y17, p19, r115, d46);
  L232():
    goto L46(i30, y27, p29, r134);
  L238():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L55(i10, y7, p9, dx20);
  L239():
    m18 = ld m;
    check L241() else D69();
  L240():
    r137 = dyn base29[from, `length.out`](<lang `+`(m, 1)>, <lang `-`(n, m)>);
    goto L56(i39, y36, p38, d52, r137);
  L245():
    goto L54(i41, y38, p40, r143);
  D63():
    deopt 240 [i24, y21, p23, r121];
  D69():
    deopt 259 [i39, y36, p38, d52, m18];
  L51(i27, y24, p26, d44, r117):
    __8 = ldf `[` in base;
    r120 = dyn __8(d44, r117);
    goto L50(i27, y24, p26, r120);
  L53(i34, y31, p33, r130, dx19):
    rep_int3 = ldf `rep.int` in base;
    r132 = dyn rep_int3(1, dx19);
    check L231() else D66();
  L219():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L50(i13, y10, p12, dx16);
  L220():
    m14 = ld m;
    check L222() else D62();
  L221():
    r116 = dyn base26(<lang `-`(m, 1)>);
    goto L51(i22, y19, p21, d41, r116);
  L223():
    goto L49(i24, y21, p23, r121);
  L227():
    dr18 = tryDispatchBuiltin.1("[", d46);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L229() else L228(i20, y17, p19, r115, dr18);
  L228(i32, y29, p31, r128, d48):
    m16 = ld m;
    check L230() else D65();
  L241():
    m19 = force? m18;
    checkMissing(m19);
    r139 = `+`(m19, 1);
    n4 = ld n;
    check L242() else D70();
  D62():
    deopt 233 [i22, y19, p21, d41, m14];
  D65():
    deopt 245 [i32, y29, p31, r128, d48, m16];
  D66():
    deopt 249 [i34, y31, p33, r130, r132];
  D70():
    deopt 264 [i39, y36, p38, d52, n4];
  L222():
    m15 = force? m14;
    checkMissing(m15);
    r118 = `-`(m15, 1);
    r119 = seq_len(r118);
    goto L51(i22, y19, p21, d41, r119);
  L229():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L53(i20, y17, p19, r115, dx18);
  L230():
    m17 = force? m16;
    __9 = ldf `[` in base;
    r131 = dyn __9(d48, m17);
    goto L53(i32, y29, p31, r128, r131);
  L231():
    goto L52(i34, y31, p33, r130, r132);
  L242():
    n5 = force? n4;
    checkMissing(n5);
    m20 = ld m;
    check L243() else D71();
  D71():
    deopt 265 [i39, y36, p38, d52, n5, m20];
  L243():
    m21 = force? m20;
    checkMissing(m21);
    r140 = `-`(n5, m21);
    seq_int2 = ldf `seq.int` in base;
    r141 = dyn seq_int2(r139, r140);
    check L244() else D72();
  D72():
    deopt 270 [i39, y36, p38, d52, r141];
  L244():
    goto L56(i39, y36, p38, d52, r141);
  }
}