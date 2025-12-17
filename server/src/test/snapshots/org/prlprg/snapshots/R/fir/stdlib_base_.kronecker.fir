fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1626172927;
    st `.kronecker` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1626172927(X, Y, FUN, `make.dimnames`, `...`) {
  (reg X:*, reg Y:*, reg FUN:*, reg make_dimnames:*, reg ddd:dots) -+> V { var X:*, var Y:*, var FUN:*, reg FUN_isMissing:L, reg FUN_orDefault:*, var `make.dimnames`:*, reg make_dimnames_isMissing:L, reg make_dimnames_orDefault:*, var `...`:dots?, reg as_array:cls, reg X1:*, reg X2:V, reg p:p(V +), reg r1:V, reg as_array1:cls, reg Y1:*, reg Y2:V, reg p1:p(V +), reg r3:V, reg make_dimnames1:*, reg make_dimnames2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg X3:*, reg X4:V, reg dimnames:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg Y3:*, reg Y4:V, reg dimnames1:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg X5:*, reg X6:V, reg dim:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg Y5:*, reg Y6:V, reg dim1:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg dX:*, reg dX1:V, reg length:cls, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg r24:V, reg dY:*, reg dY1:V, reg length1:cls, reg r25:V, reg r26:V, reg ld:*, reg ld1:V, reg r27:V, reg c1:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg dX2:*, reg dX3:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg ld2:*, reg ld3:V, reg r32:V, reg rep_int:cls, reg r33:V, reg c2:cls, reg r34:V, reg l:*, reg dim__:cls, reg r35:V, reg ld4:*, reg ld5:V, reg r37:V, reg c3:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg dY2:*, reg dY3:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg r41:V, reg ld6:*, reg ld7:V, reg rep_int1:cls, reg r42:V, reg c4:cls, reg r43:V, reg l1:*, reg dim__1:cls, reg r44:V, reg outer:cls, reg X7:*, reg X8:V, reg p2:p(V +), reg Y7:*, reg Y8:V, reg p3:p(V +), reg FUN1:*, reg FUN2:V, reg p4:p(V +), reg ddd1:dots?, reg r48:V, reg as_vector:cls, reg t:cls, reg matrix:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg r54:I, reg r55:R, reg r56:V, reg dX4:*, reg dX5:V, reg length2:cls, reg r57:V, reg r58:V, reg r59:V, reg p5:p(V +), reg r61:V, reg c5:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r64:V, reg p6:p(V +), reg r66:V, reg p7:p(V +), reg r68:V, reg aperm:cls, reg opobj:*, reg opobj1:V, reg p8:p(V +), reg dp:*, reg dp1:V, reg p9:p(V +), reg r71:V, reg dX6:*, reg dX7:V, reg dY4:*, reg dY5:V, reg r72:V, reg l2:*, reg dim__2:cls, reg r73:V, reg make_dimnames3:*, reg make_dimnames4:V, reg c6:L, reg c8:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg c11:L, reg r75:V, reg dnx:*, reg dnx1:V, reg c12:V, reg c13:L, reg c16:L, reg c17:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r76:V, reg c22:L, reg c23:L, reg r77:V, reg dny:*, reg dny1:V, reg c24:V, reg c25:L, reg c26:V, reg r78:V, reg c29:L, reg c30:V, reg c32:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r79:V, reg r80:V, reg dnx2:*, reg dnx3:V, reg c33:V, reg c34:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r81:V, reg r82:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r83:V, reg r84:V, reg dX8:*, reg dX9:V, reg length3:cls, reg r85:V, reg vector:cls, reg r86:V, reg ld8:*, reg ld9:V, reg r88:V, reg c35:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r89:V, reg r90:V, reg dnx4:*, reg dnx5:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r91:V, reg r92:V, reg ld10:*, reg ld11:V, reg r93:V, reg vector1:cls, reg r94:V, reg c36:cls, reg r95:V, reg which:cls, reg sapply:cls, reg dnx6:*, reg dnx7:V, reg p10:p(V +), reg is_null:*, reg is_null1:V, reg p11:p(V +), reg r98:V, reg p12:p(V +), reg r100:V, reg lapply:cls, reg tmp:*, reg tmp1:V, reg p13:p(V +), reg r102:cls, reg p14:p(V +), reg r104:V, reg l3:*, reg c37:L, reg r106:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg tmp2:*, reg tmp3:V, reg ___:cls, reg r109:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r110:V, reg r111:V, reg dny2:*, reg dny3:V, reg c38:V, reg c39:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r112:V, reg r113:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r114:V, reg r115:V, reg dY6:*, reg dY7:V, reg length4:cls, reg r116:V, reg vector2:cls, reg r117:V, reg ld12:*, reg ld13:V, reg r119:V, reg c40:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r120:V, reg r121:V, reg dny4:*, reg dny5:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r122:V, reg r123:V, reg ld14:*, reg ld15:V, reg vector3:cls, reg r124:V, reg c41:cls, reg r125:V, reg which1:cls, reg sapply1:cls, reg dny6:*, reg dny7:V, reg p15:p(V +), reg is_null2:*, reg is_null3:V, reg p16:p(V +), reg r128:V, reg p17:p(V +), reg r130:V, reg lapply1:cls, reg tmp4:*, reg tmp5:V, reg p18:p(V +), reg r132:cls, reg p19:p(V +), reg r134:V, reg l6:*, reg c42:L, reg r136:V, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg tmp6:*, reg tmp7:V, reg ___1:cls, reg r139:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r140:V, reg r141:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r142:V, reg r143:V, reg opobj2:*, reg opobj3:V, reg dim2:cls, reg r144:V, reg length5:cls, reg r145:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r146:V, reg r147:V, reg k:*, reg k1:V, reg vector4:cls, reg r148:V, reg k2:*, reg k3:V, reg r149:V, reg s:V, reg l9:I, reg i:I, reg i1:I, reg i2:I, reg c43:L, reg x:V, reg outer1:cls, reg dnx8:*, reg dnx9:V, reg c44:L, reg dnx11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i5:*, reg i6:V, reg __1:cls, reg r150:V, reg p20:p(V +), reg dny8:*, reg dny9:V, reg c45:L, reg dny11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i7:*, reg i8:V, reg __2:cls, reg r152:V, reg p21:p(V +), reg paste:*, reg paste1:V, reg p22:p(V +), reg r155:V, reg as_vector1:cls, reg t1:cls, reg tmp8:*, reg tmp9:V, reg p23:p(V +), reg r157:V, reg p24:p(V +), reg r159:V, reg l10:*, reg c46:L, reg i10:I, reg r161:V, reg l12:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i12:I, reg dx11:V, reg i13:*, reg i14:V, reg ____:cls, reg r164:V, reg dno:*, reg dno1:V, reg l13:*, reg dimnames__:cls, reg r165:V, reg opobj4:*, reg opobj5:V |
    mkenv;
    st X = X;
    st Y = Y;
    FUN_isMissing = missing.0(FUN);
    if FUN_isMissing then L0("*") else L0(FUN);
  L0(FUN_orDefault):
    st FUN = FUN_orDefault;
    make_dimnames_isMissing = missing.0(make_dimnames);
    if make_dimnames_isMissing then L1(FALSE) else L1(make_dimnames);
  L1(make_dimnames_orDefault):
    st `make.dimnames` = make_dimnames_orDefault;
    st `...` = ddd;
    as_array = ldf `as.array`;
    check L47() else D0();
  D0():
    deopt 1 [];
  L47():
    p = prom<V +>{
      X1 = ld X;
      X2 = force? X1;
      checkMissing(X2);
      return X2;
    };
    r1 = dyn as_array(p);
    check L48() else D1();
  D1():
    deopt 3 [r1];
  L48():
    st X = r1;
    as_array1 = ldf `as.array`;
    check L49() else D2();
  D2():
    deopt 6 [];
  L49():
    p1 = prom<V +>{
      Y1 = ld Y;
      Y2 = force? Y1;
      checkMissing(Y2);
      return Y2;
    };
    r3 = dyn as_array1(p1);
    check L50() else D3();
  D3():
    deopt 8 [r3];
  L50():
    st Y = r3;
    make_dimnames1 = ld `make.dimnames`;
    check L51() else D4();
  D4():
    deopt 10 [make_dimnames1];
  L51():
    make_dimnames2 = force? make_dimnames1;
    checkMissing(make_dimnames2);
    c = `as.logical`(make_dimnames2);
    if c then L52() else L2();
  L2():
    goto L5();
  L5():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L62() else L63();
  L52():
    sym = ldf dimnames;
    base = ldf dimnames in base;
    guard = `==`.4(sym, base);
    if guard then L53() else L54();
  L3(r5):
    st dnx = r5;
    sym1 = ldf dimnames;
    base1 = ldf dimnames in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L57() else L58();
  L6(r12):
    st dX = r12;
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L66() else L67();
  L53():
    X3 = ld X;
    check L55() else D5();
  L54():
    r4 = dyn base(<sym X>);
    goto L3(r4);
  L62():
    X5 = ld X;
    check L64() else D9();
  L63():
    r11 = dyn base2(<sym X>);
    goto L6(r11);
  D5():
    deopt 14 [X3];
  D9():
    deopt 30 [X5];
  L4(r8):
    st dny = r8;
    goto L5();
  L7(r15):
    st dY = r15;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L55():
    X4 = force? X3;
    checkMissing(X4);
    dimnames = ldf dimnames in base;
    r6 = dyn dimnames(X4);
    check L56() else D6();
  L57():
    Y3 = ld Y;
    check L59() else D7();
  L58():
    r7 = dyn base1(<sym Y>);
    goto L4(r7);
  L64():
    X6 = force? X5;
    checkMissing(X6);
    dim = ldf dim in base;
    r13 = dyn dim(X6);
    check L65() else D10();
  L66():
    Y5 = ld Y;
    check L68() else D11();
  L67():
    r14 = dyn base3(<sym Y>);
    goto L7(r14);
  D6():
    deopt 17 [r6];
  D7():
    deopt 21 [Y3];
  D10():
    deopt 33 [r13];
  D11():
    deopt 37 [Y5];
  L8(r18):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  L56():
    goto L3(r6);
  L59():
    Y4 = force? Y3;
    checkMissing(Y4);
    dimnames1 = ldf dimnames in base;
    r9 = dyn dimnames1(Y4);
    check L60() else D8();
  L65():
    goto L6(r13);
  L68():
    Y6 = force? Y5;
    checkMissing(Y6);
    dim1 = ldf dim in base;
    r16 = dyn dim1(Y6);
    check L69() else D12();
  L70():
    dX = ld dX;
    check L72() else D13();
  L71():
    r17 = dyn base4(<sym dX>);
    goto L8(r17);
  D8():
    deopt 24 [r9];
  D12():
    deopt 40 [r16];
  D13():
    deopt 44 [dX];
  L9(r23, r24):
    r26 = `-`(r23, r24);
    st ld = r26;
    ld = ld ld;
    check L78() else D17();
  L60():
    goto L4(r9);
  L69():
    goto L7(r16);
  L72():
    dX1 = force? dX;
    checkMissing(dX1);
    length = ldf length in base;
    r19 = dyn length(dX1);
    check L73() else D14();
  L74():
    dY = ld dY;
    check L76() else D15();
  L75():
    r22 = dyn base5(<sym dY>);
    goto L9(r18, r22);
  D14():
    deopt 47 [r19];
  D15():
    deopt 49 [r18, dY];
  D17():
    deopt 55 [ld];
  L73():
    goto L8(r19);
  L76():
    dY1 = force? dY;
    checkMissing(dY1);
    length1 = ldf length in base;
    r25 = dyn length1(dY1);
    check L77() else D16();
  L78():
    ld1 = force? ld;
    checkMissing(ld1);
    r27 = `<`(ld1, 0);
    c1 = `as.logical`(r27);
    if c1 then L79() else L10();
  D16():
    deopt 52 [r18, r25];
  L10():
    ld4 = ld ld;
    check L91() else D24();
  L13():
    outer = ldf outer;
    check L104() else D31();
  L77():
    goto L9(r18, r25);
  L79():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  D24():
    deopt 79 [ld4];
  D31():
    deopt 105 [];
  L11(r29):
    l = ld X;
    dim__ = ldf `dim<-`;
    check L88() else D22();
  L80():
    dX2 = ld dX;
    check L82() else D18();
  L81():
    r28 = dyn base6(<sym dX>, <lang rep.int(1.0, `-`(ld))>);
    goto L11(r28);
  L91():
    ld5 = force? ld4;
    checkMissing(ld5);
    r37 = `>`(ld5, 0);
    c3 = `as.logical`(r37);
    if c3 then L92() else L14();
  L104():
    p2 = prom<V +>{
      X7 = ld X;
      X8 = force? X7;
      checkMissing(X8);
      return X8;
    };
    p3 = prom<V +>{
      Y7 = ld Y;
      Y8 = force? Y7;
      checkMissing(Y8);
      return Y8;
    };
    p4 = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    ddd1 = ld `...`;
    r48 = dyn outer[, , , `...`](p2, p3, p4, ddd1);
    check L105() else D32();
  D18():
    deopt 61 [dX2];
  D22():
    deopt 74 [r29, l, r29];
  D32():
    deopt 110 [r48];
  L14():
    goto L13();
  L82():
    dX3 = force? dX2;
    checkMissing(dX3);
    sym7 = ldf `rep.int`;
    base7 = ldf `rep.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L83() else L84();
  L88():
    r35 = dyn dim__(l, NULL, r29);
    check L89() else D23();
  L92():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L93() else L94();
  L105():
    st opobj = r48;
    as_vector = ldf `as.vector`;
    check L106() else D33();
  D23():
    deopt 76 [r29, r35];
  D33():
    deopt 113 [];
  L12(r31):
    c2 = ldf c in base;
    r34 = dyn c2(dX3, r31);
    check L87() else D21();
  L15(r39):
    l1 = ld Y;
    dim__1 = ldf `dim<-`;
    check L101() else D29();
  L83():
    ld2 = ld ld;
    check L85() else D19();
  L84():
    r30 = dyn base7(1.0, <lang `-`(ld)>);
    goto L12(r30);
  L89():
    st X = r35;
    st dX = r29;
    goto L13();
  L93():
    dY2 = ld dY;
    check L95() else D25();
  L94():
    r38 = dyn base8(<sym dY>, <lang rep.int(1.0, ld)>);
    goto L15(r38);
  L106():
    p7 = prom<V +>{
      t = ldf t;
      p6 = prom<V +>{
        matrix = ldf matrix;
        p5 = prom<V +>{
          sym10 = ldf length;
          base10 = ldf length in base;
          guard10 = `==`.4(sym10, base10);
          if guard10 then L1() else L2();
        L0(r54, r55, r56):
          r58 = `*`(r55, r56);
          r59 = `:`(r54, r58);
          return r59;
        L1():
          dX4 = ld dX;
          dX5 = force? dX4;
          checkMissing(dX5);
          length2 = ldf length in base;
          r57 = dyn length2(dX5);
          goto L0(1, 2.0, r57);
        L2():
          r53 = dyn base10(<sym dX>);
          goto L0(1, 2.0, r53);
        };
        r61 = dyn matrix[, ncol](p5, 2.0);
        c5 = `is.object`(r61);
        if c5 then L1() else L2();
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", r61);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2();
      L2():
        __ = ldf `[` in base;
        r64 = dyn __(r61, <missing>, <int 2, 1>);
        goto L0(r64);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r66 = dyn t(p6);
      return r66;
    };
    r68 = dyn as_vector(p7);
    check L107() else D34();
  D19():
    deopt 66 [ld2];
  D21():
    deopt 72 [r34];
  D25():
    deopt 85 [dY2];
  D29():
    deopt 97 [r39, l1, r39];
  D34():
    deopt 115 [r68];
  L85():
    ld3 = force? ld2;
    checkMissing(ld3);
    r32 = `-`(<missing>, ld3);
    rep_int = ldf `rep.int` in base;
    r33 = dyn rep_int(1.0, r32);
    check L86() else D20();
  L87():
    goto L11(r34);
  L95():
    dY3 = force? dY2;
    checkMissing(dY3);
    sym9 = ldf `rep.int`;
    base9 = ldf `rep.int` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L96() else L97();
  L101():
    r44 = dyn dim__1(l1, NULL, r39);
    check L102() else D30();
  L107():
    st dp = r68;
    aperm = ldf aperm;
    check L108() else D35();
  D20():
    deopt 70 [r33];
  D30():
    deopt 99 [r39, r44];
  D35():
    deopt 118 [];
  L16(r41):
    c4 = ldf c in base;
    r43 = dyn c4(dY3, r41);
    check L100() else D28();
  L86():
    goto L12(r33);
  L96():
    ld6 = ld ld;
    check L98() else D26();
  L97():
    r40 = dyn base9(1.0, <sym ld>);
    goto L16(r40);
  L102():
    st Y = r44;
    st dY = r39;
    goto L13();
  L108():
    p8 = prom<V +>{
      opobj = ld opobj;
      opobj1 = force? opobj;
      checkMissing(opobj1);
      return opobj1;
    };
    p9 = prom<V +>{
      dp = ld dp;
      dp1 = force? dp;
      checkMissing(dp1);
      return dp1;
    };
    r71 = dyn aperm(p8, p9);
    check L109() else D36();
  D26():
    deopt 90 [ld6];
  D28():
    deopt 95 [r43];
  D36():
    deopt 121 [r71];
  L98():
    ld7 = force? ld6;
    checkMissing(ld7);
    rep_int1 = ldf `rep.int` in base;
    r42 = dyn rep_int1(1.0, ld7);
    check L99() else D27();
  L100():
    goto L15(r43);
  L109():
    st opobj = r71;
    dX6 = ld dX;
    check L110() else D37();
  D27():
    deopt 93 [r42];
  D37():
    deopt 123 [dX6];
  L99():
    goto L16(r42);
  L110():
    dX7 = force? dX6;
    checkMissing(dX7);
    dY4 = ld dY;
    check L111() else D38();
  D38():
    deopt 124 [dX7, dY4];
  L111():
    dY5 = force? dY4;
    checkMissing(dY5);
    r72 = `*`(dX7, dY5);
    l2 = ld opobj;
    dim__2 = ldf `dim<-`;
    check L112() else D39();
  D39():
    deopt 128 [r72, l2, r72];
  L112():
    r73 = dyn dim__2(l2, NULL, r72);
    check L113() else D40();
  D40():
    deopt 130 [r72, r73];
  L113():
    st opobj = r73;
    make_dimnames3 = ld `make.dimnames`;
    check L114() else D41();
  D41():
    deopt 132 [make_dimnames3];
  L114():
    make_dimnames4 = force? make_dimnames3;
    checkMissing(make_dimnames4);
    c6 = `as.logical`(make_dimnames4);
    if c6 then L115() else L17(c6);
  L17(c8):
    c32 = `as.logical`(c8);
    if c32 then L125() else L21();
  L115():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L116() else L117();
  L18(c11, r75):
    c13 = `as.logical`(r75);
    if c13 then L119() else L19(c11, c13);
  L21():
    goto L46();
  L46():
    opobj4 = ld opobj;
    check L213() else D86();
  L116():
    dnx = ld dnx;
    check L118() else D42();
  L117():
    r74 = dyn base11(<sym dnx>);
    goto L18(c6, r74);
  L125():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L126() else L127();
  D42():
    deopt 135 [c6, dnx];
  D86():
    deopt 302 [opobj4];
  L19(c16, c17):
    r78 = `!`(c17);
    c29 = `as.logical`(r78);
    c30 = `&&`(c16, c29);
    goto L17(c30);
  L22(r80):
    c34 = `as.logical`(r80);
    if c34 then L129() else L23();
  L118():
    dnx1 = force? dnx;
    checkMissing(dnx1);
    c12 = `==`(dnx1, NULL);
    goto L18(c6, c12);
  L119():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L120() else L121();
  L126():
    dnx2 = ld dnx;
    check L128() else D44();
  L127():
    r79 = dyn base13(<sym dnx>);
    goto L22(r79);
  L213():
    opobj5 = force? opobj4;
    checkMissing(opobj5);
    popenv;
    return opobj5;
  D44():
    deopt 146 [dnx2];
  L20(c22, c23, r77):
    c25 = `as.logical`(r77);
    c26 = `&&`(c23, c25);
    goto L19(c22, c26);
  L23():
    ld8 = ld ld;
    check L138() else D48();
  L26():
    which = ldf which;
    check L149() else D53();
  L120():
    dny = ld dny;
    check L122() else D43();
  L121():
    r76 = dyn base12(<sym dny>);
    goto L20(c11, c13, r76);
  L128():
    dnx3 = force? dnx2;
    checkMissing(dnx3);
    c33 = `==`(dnx3, NULL);
    goto L22(c33);
  L129():
    sym14 = ldf vector;
    base14 = ldf vector in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L130() else L131();
  D43():
    deopt 139 [c11, c13, dny];
  D48():
    deopt 161 [ld8];
  D53():
    deopt 183 [];
  L24(r82):
    st dnx = r82;
    goto L26();
  L122():
    dny1 = force? dny;
    checkMissing(dny1);
    c24 = `==`(dny1, NULL);
    goto L20(c11, c13, c24);
  L130():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L132() else L133();
  L131():
    r81 = dyn base14("list", <lang length(dX)>);
    goto L24(r81);
  L138():
    ld9 = force? ld8;
    checkMissing(ld9);
    r88 = `<`(ld9, 0);
    c35 = `as.logical`(r88);
    if c35 then L139() else L27();
  L149():
    p12 = prom<V +>{
      sapply = ldf sapply;
      p10 = prom<V +>{
        dnx6 = ld dnx;
        dnx7 = force? dnx6;
        checkMissing(dnx7);
        return dnx7;
      };
      p11 = prom<V +>{
        is_null = ld `is.null`;
        is_null1 = force? is_null;
        checkMissing(is_null1);
        return is_null1;
      };
      r98 = dyn sapply(p10, p11);
      return r98;
    };
    r100 = dyn which(p12);
    check L150() else D54();
  D54():
    deopt 185 [r100];
  L25(r84):
    vector = ldf vector in base;
    r86 = dyn vector("list", r84);
    check L136() else D47();
  L27():
    goto L26();
  L132():
    dX8 = ld dX;
    check L134() else D45();
  L133():
    r83 = dyn base15(<sym dX>);
    goto L25(r83);
  L139():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L140() else L141();
  L150():
    st tmp = r100;
    lapply = ldf lapply;
    check L151() else D55();
  D45():
    deopt 154 [dX8];
  D47():
    deopt 159 [r86];
  D55():
    deopt 188 [];
  L28(r90):
    st dnx = r90;
    goto L26();
  L134():
    dX9 = force? dX8;
    checkMissing(dX9);
    length3 = ldf length in base;
    r85 = dyn length3(dX9);
    check L135() else D46();
  L136():
    goto L24(r86);
  L140():
    dnx4 = ld dnx;
    check L142() else D49();
  L141():
    r89 = dyn base16(<sym dnx>, <lang vector("list", `-`(ld))>);
    goto L28(r89);
  L151():
    p13 = prom<V +>{
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      return tmp1;
    };
    p14 = prom<V +>{
      r102 = clos inner3002224933;
      return r102;
    };
    r104 = dyn lapply(p13, p14);
    check L152() else D56();
  D46():
    deopt 157 [r85];
  D49():
    deopt 167 [dnx4];
  D56():
    deopt 191 [r104];
  L135():
    goto L25(r85);
  L142():
    dnx5 = force? dnx4;
    checkMissing(dnx5);
    sym17 = ldf vector;
    base17 = ldf vector in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L143() else L144();
  L152():
    l3 = ld dnx;
    c37 = `is.object`(l3);
    if c37 then L153() else L154(r104, l3);
  L29(r92):
    c36 = ldf c in base;
    r95 = dyn c36(dnx5, r92);
    check L147() else D52();
  L30(dx3):
    st dnx = dx3;
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L157() else L158();
  L143():
    ld10 = ld ld;
    check L145() else D50();
  L144():
    r91 = dyn base17("list", <lang `-`(ld)>);
    goto L29(r91);
  L153():
    dr2 = tryDispatchBuiltin.0("[<-", l3, r104);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L155() else L154(r104, dr2);
  L154(r106, l5):
    tmp2 = ld tmp;
    check L156() else D57();
  D50():
    deopt 172 [ld10];
  D52():
    deopt 178 [r95];
  D57():
    deopt 193 [r106, l5, r104, tmp2];
  L31(r111):
    c39 = `as.logical`(r111);
    if c39 then L160() else L32();
  L145():
    ld11 = force? ld10;
    checkMissing(ld11);
    r93 = `-`(<missing>, ld11);
    vector1 = ldf vector in base;
    r94 = dyn vector1("list", r93);
    check L146() else D51();
  L147():
    goto L28(r95);
  L155():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L30(dx2);
  L156():
    tmp3 = force? tmp2;
    ___ = ldf `[<-` in base;
    r109 = dyn ___(l5, r104, tmp3);
    goto L30(r109);
  L157():
    dny2 = ld dny;
    check L159() else D58();
  L158():
    r110 = dyn base18(<sym dny>);
    goto L31(r110);
  D51():
    deopt 176 [r94];
  D58():
    deopt 198 [dny2];
  L32():
    ld12 = ld ld;
    check L169() else D62();
  L35():
    which1 = ldf which;
    check L180() else D67();
  L146():
    goto L29(r94);
  L159():
    dny3 = force? dny2;
    checkMissing(dny3);
    c38 = `==`(dny3, NULL);
    goto L31(c38);
  L160():
    sym19 = ldf vector;
    base19 = ldf vector in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L161() else L162();
  D62():
    deopt 213 [ld12];
  D67():
    deopt 234 [];
  L33(r113):
    st dny = r113;
    goto L35();
  L161():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L163() else L164();
  L162():
    r112 = dyn base19("list", <lang length(dY)>);
    goto L33(r112);
  L169():
    ld13 = force? ld12;
    checkMissing(ld13);
    r119 = `>`(ld13, 0.0);
    c40 = `as.logical`(r119);
    if c40 then L170() else L36();
  L180():
    p17 = prom<V +>{
      sapply1 = ldf sapply;
      p15 = prom<V +>{
        dny6 = ld dny;
        dny7 = force? dny6;
        checkMissing(dny7);
        return dny7;
      };
      p16 = prom<V +>{
        is_null2 = ld `is.null`;
        is_null3 = force? is_null2;
        checkMissing(is_null3);
        return is_null3;
      };
      r128 = dyn sapply1(p15, p16);
      return r128;
    };
    r130 = dyn which1(p17);
    check L181() else D68();
  D68():
    deopt 236 [r130];
  L34(r115):
    vector2 = ldf vector in base;
    r117 = dyn vector2("list", r115);
    check L167() else D61();
  L36():
    goto L35();
  L163():
    dY6 = ld dY;
    check L165() else D59();
  L164():
    r114 = dyn base20(<sym dY>);
    goto L34(r114);
  L170():
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L171() else L172();
  L181():
    st tmp = r130;
    lapply1 = ldf lapply;
    check L182() else D69();
  D59():
    deopt 206 [dY6];
  D61():
    deopt 211 [r117];
  D69():
    deopt 239 [];
  L37(r121):
    st dny = r121;
    goto L35();
  L165():
    dY7 = force? dY6;
    checkMissing(dY7);
    length4 = ldf length in base;
    r116 = dyn length4(dY7);
    check L166() else D60();
  L167():
    goto L33(r117);
  L171():
    dny4 = ld dny;
    check L173() else D63();
  L172():
    r120 = dyn base21(<sym dny>, <lang vector("list", ld)>);
    goto L37(r120);
  L182():
    p18 = prom<V +>{
      tmp4 = ld tmp;
      tmp5 = force? tmp4;
      checkMissing(tmp5);
      return tmp5;
    };
    p19 = prom<V +>{
      r132 = clos inner3002224933;
      return r132;
    };
    r134 = dyn lapply1(p18, p19);
    check L183() else D70();
  D60():
    deopt 209 [r116];
  D63():
    deopt 219 [dny4];
  D70():
    deopt 242 [r134];
  L166():
    goto L34(r116);
  L173():
    dny5 = force? dny4;
    checkMissing(dny5);
    sym22 = ldf vector;
    base22 = ldf vector in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L174() else L175();
  L183():
    l6 = ld dny;
    c42 = `is.object`(l6);
    if c42 then L184() else L185(r134, l6);
  L38(r123):
    c41 = ldf c in base;
    r125 = dyn c41(dny5, r123);
    check L178() else D66();
  L39(dx5):
    st dny = dx5;
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L188() else L189();
  L174():
    ld14 = ld ld;
    check L176() else D64();
  L175():
    r122 = dyn base22("list", <sym ld>);
    goto L38(r122);
  L184():
    dr4 = tryDispatchBuiltin.0("[<-", l6, r134);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L186() else L185(r134, dr4);
  L185(r136, l8):
    tmp6 = ld tmp;
    check L187() else D71();
  D64():
    deopt 224 [ld14];
  D66():
    deopt 229 [r125];
  D71():
    deopt 244 [r136, l8, r134, tmp6];
  L40(r141):
    st k = r141;
    sym25 = ldf vector;
    base25 = ldf vector in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L195() else L196();
  L176():
    ld15 = force? ld14;
    checkMissing(ld15);
    vector3 = ldf vector in base;
    r124 = dyn vector3("list", ld15);
    check L177() else D65();
  L178():
    goto L37(r125);
  L186():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L39(dx4);
  L187():
    tmp7 = force? tmp6;
    ___1 = ldf `[<-` in base;
    r139 = dyn ___1(l8, r134, tmp7);
    goto L39(r139);
  L188():
    sym24 = ldf dim;
    base24 = ldf dim in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L190() else L191();
  L189():
    r140 = dyn base23(<lang dim(opobj)>);
    goto L40(r140);
  D65():
    deopt 227 [r124];
  L41(r143):
    length5 = ldf length in base;
    r145 = dyn length5(r143);
    check L194() else D74();
  L42(r147):
    st dno = r147;
    k2 = ld k;
    check L199() else D77();
  L177():
    goto L38(r124);
  L190():
    opobj2 = ld opobj;
    check L192() else D72();
  L191():
    r142 = dyn base24(<sym opobj>);
    goto L41(r142);
  L195():
    k = ld k;
    check L197() else D75();
  L196():
    r146 = dyn base25("list", <sym k>);
    goto L42(r146);
  D72():
    deopt 252 [opobj2];
  D74():
    deopt 257 [r145];
  D75():
    deopt 262 [k];
  D77():
    deopt 268 [1, k2];
  L192():
    opobj3 = force? opobj2;
    checkMissing(opobj3);
    dim2 = ldf dim in base;
    r144 = dyn dim2(opobj3);
    check L193() else D73();
  L194():
    goto L40(r145);
  L197():
    k1 = force? k;
    checkMissing(k1);
    vector4 = ldf vector in base;
    r148 = dyn vector4("list", k1);
    check L198() else D76();
  L199():
    k3 = force? k2;
    checkMissing(k3);
    r149 = `:`(1, k3);
    s = toForSeq(r149);
    l9 = length(s);
    i = 0;
    goto L43(i);
  D73():
    deopt 255 [r144];
  D76():
    deopt 265 [r148];
  L43(i1):
    i2 = `+`.1(i1, 1);
    c43 = `<`.1(l9, i2);
    if c43 then L200() else L45();
  L193():
    goto L41(r144);
  L198():
    goto L42(r148);
  L45():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    outer1 = ldf outer;
    check L201() else D78();
  L200():
    dno = ld dno;
    check L209() else D83();
  D78():
    deopt 272 [i2];
  D83():
    deopt 293 [dno];
  L201():
    p20 = prom<V +>{
      dnx8 = ld dnx;
      dnx9 = force? dnx8;
      checkMissing(dnx9);
      c44 = `is.object`(dnx9);
      if c44 then L1() else L2(dnx9);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", dnx9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(dnx11):
      i5 = ld i;
      i6 = force? i5;
      __1 = ldf `[[` in base;
      r150 = dyn __1(dnx11, i6);
      goto L0(r150);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p21 = prom<V +>{
      dny8 = ld dny;
      dny9 = force? dny8;
      checkMissing(dny9);
      c45 = `is.object`(dny9);
      if c45 then L1() else L2(dny9);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", dny9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(dny11):
      i7 = ld i;
      i8 = force? i7;
      __2 = ldf `[[` in base;
      r152 = dyn __2(dny11, i8);
      goto L0(r152);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p22 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r155 = dyn outer1[, , FUN, sep](p20, p21, p22, ":");
    check L202() else D79();
  L209():
    dno1 = force? dno;
    checkMissing(dno1);
    l13 = ld opobj;
    dimnames__ = ldf `dimnames<-`;
    check L210() else D84();
  D79():
    deopt 279 [i2, r155];
  D84():
    deopt 296 [dno1, l13, dno1];
  L202():
    st tmp = r155;
    as_vector1 = ldf `as.vector`;
    check L203() else D80();
  L210():
    r165 = dyn dimnames__(l13, NULL, dno1);
    check L211() else D85();
  D80():
    deopt 282 [i2];
  D85():
    deopt 298 [dno1, r165];
  L203():
    p24 = prom<V +>{
      t1 = ldf t;
      p23 = prom<V +>{
        tmp8 = ld tmp;
        tmp9 = force? tmp8;
        checkMissing(tmp9);
        return tmp9;
      };
      r157 = dyn t1(p23);
      return r157;
    };
    r159 = dyn as_vector1(p24);
    check L204() else D81();
  L211():
    st opobj = r165;
    goto L46();
  D81():
    deopt 284 [i2, r159];
  L204():
    l10 = ld dno;
    c46 = `is.object`(l10);
    if c46 then L205() else L206(i2, r159, l10);
  L44(i12, dx11):
    st dno = dx11;
    goto L43(i12);
  L205():
    dr10 = tryDispatchBuiltin.0("[[<-", l10, r159);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L207() else L206(i2, r159, dr10);
  L206(i10, r161, l12):
    i13 = ld i;
    check L208() else D82();
  D82():
    deopt 286 [i10, r161, l12, r159, i13];
  L207():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L44(i2, dx10);
  L208():
    i14 = force? i13;
    ____ = ldf `[[<-` in base;
    r164 = dyn ____(l12, r159, i14);
    goto L44(i10, r164);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg dX:*, reg dX1:V, reg c:L, reg dX3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r2:V, reg rep_int:cls, reg r3:V |
    mkenv;
    st i = i;
    sym = ldf `rep.int`;
    base = ldf `rep.int` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    dX = ld dX;
    check L4() else D0();
  L3():
    r = dyn base("", <lang `[`(dX, i)>);
    goto L0(r);
  D0():
    deopt 3 [dX];
  L4():
    dX1 = force? dX;
    checkMissing(dX1);
    c = `is.object`(dX1);
    if c then L5() else L6(dX1);
  L1(dx1):
    rep_int = ldf `rep.int` in base;
    r3 = dyn rep_int("", dx1);
    check L9() else D2();
  L5():
    dr = tryDispatchBuiltin.1("[", dX1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(dX3):
    i1 = ld i;
    check L8() else D1();
  D1():
    deopt 5 [dX3, i1];
  D2():
    deopt 9 [r3];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L8():
    i2 = force? i1;
    __ = ldf `[` in base;
    r2 = dyn __(dX3, i2);
    goto L1(r2);
  L9():
    goto L0(r3);
  }
}