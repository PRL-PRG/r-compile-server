fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2334810962;
    st `lm.wfit` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2334810962(x, y, w, offset, method, tol, `singular.ok`, `...`) {
  (reg x:*, reg y:*, reg w:*, reg offset:*, reg method:*, reg tol:*, reg singular_ok:*, reg ddd:dots) -+> V { var x:*, var y:*, var w:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, var `singular.ok`:*, reg singular_ok_isMissing:L, reg singular_ok_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nrow:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg c:V, reg c1:L, reg stop:cls, reg r4:V, reg n:*, reg n1:V, reg r6:V, reg c2:L, reg stop1:cls, reg r7:V, reg NCOL:cls, reg y1:*, reg y2:V, reg p1:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg y3:*, reg y4:V, reg is_matrix:cls, reg r13:V, reg c3:L, reg c5:V, reg ny:*, reg ny1:V, reg r14:V, reg c6:L, reg c7:V, reg c9:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg y5:*, reg y6:V, reg drop:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg offset1:*, reg offset2:V, reg c10:V, reg r21:V, reg c11:L, reg y7:*, reg y8:V, reg offset3:*, reg offset4:V, reg r22:V, reg NROW:cls, reg y9:*, reg y10:V, reg p2:p(V +), reg r25:V, reg n2:*, reg n3:V, reg r26:V, reg c12:L, reg c13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg c17:L, reg r28:V, reg w1:*, reg w2:V, reg length:cls, reg r29:V, reg n4:*, reg n5:V, reg r30:V, reg c18:L, reg c19:V, reg c21:L, reg stop2:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg w3:*, reg w4:V, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg r40:V, reg w5:*, reg w6:V, reg is_na:cls, reg r41:V, reg r42:V, reg any:cls, reg r43:V, reg c22:L, reg stop3:cls, reg r44:V, reg method1:*, reg method2:V, reg r46:V, reg c23:L, reg warning:cls, reg gettextf:cls, reg method3:*, reg method4:V, reg p3:p(V +), reg r48:V, reg p4:p(V +), reg r50:V, reg chkDots:cls, reg ddd1:dots?, reg r52:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg x3:*, reg x4:V, reg attr:cls, reg r55:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg r57:V, reg w7:*, reg w8:V, reg r58:V, reg any1:cls, reg r59:V, reg zero_weights:*, reg zero_weights1:V, reg c24:L, reg y11:*, reg y12:V, reg y13:*, reg y14:V, reg w9:*, reg w10:V, reg w11:*, reg w12:V, reg r60:V, reg ok:*, reg ok1:V, reg r61:V, reg w13:*, reg w14:V, reg c25:L, reg w16:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ok2:*, reg ok3:V, reg __:cls, reg r62:V, reg x5:*, reg x6:V, reg c26:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ok4:*, reg ok5:V, reg r63:V, reg __1:cls, reg r64:V, reg x9:*, reg x10:V, reg c27:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ok6:*, reg ok7:V, reg __2:cls, reg r65:V, reg nrow1:cls, reg x13:*, reg x14:V, reg p5:p(V +), reg r67:V, reg ny2:*, reg ny3:V, reg r68:V, reg c28:L, reg y15:*, reg y16:V, reg c29:L, reg y18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ok8:*, reg ok9:V, reg r69:V, reg __3:cls, reg r70:V, reg dx8:V, reg y19:*, reg y20:V, reg c30:L, reg y22:V, reg dr8:V, reg dc4:L, reg dx9:V, reg ok10:*, reg ok11:V, reg r71:V, reg __4:cls, reg r72:V, reg ny4:*, reg ny5:V, reg r73:V, reg c31:L, reg y23:*, reg y24:V, reg c32:L, reg y26:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ok12:*, reg ok13:V, reg __5:cls, reg r74:V, reg dx12:V, reg y27:*, reg y28:V, reg c33:L, reg y30:V, reg dr12:V, reg dc6:L, reg dx13:V, reg ok14:*, reg ok15:V, reg __6:cls, reg r75:V, reg ncol:cls, reg x15:*, reg x16:V, reg p6:p(V +), reg r77:V, reg p7:*, reg p8:V, reg r78:V, reg c34:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r79:V, reg r80:V, reg numeric:cls, reg r81:V, reg y31:*, reg y32:V, reg y33:*, reg y34:V, reg r82:V, reg w17:*, reg w18:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r83:V, reg r84:V, reg y35:*, reg y36:V, reg length1:cls, reg r85:V, reg list:cls, reg r86:V, reg n6:*, reg n7:V, reg r89:V, reg c35:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r90:V, reg r91:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r92:V, reg r93:V, reg rep:cls, reg r94:V, reg y37:*, reg y38:V, reg y39:*, reg y40:V, reg r95:V, reg w19:*, reg w20:V, reg list1:cls, reg r96:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r99:V, reg r100:V, reg w21:*, reg w22:V, reg r101:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r102:V, reg r103:V, reg C_Cdqrls:*, reg C_Cdqrls1:V, reg x17:*, reg x18:V, reg wts:*, reg wts1:V, reg r104:V, reg y41:*, reg y42:V, reg wts2:*, reg wts3:V, reg r105:V, reg tol1:*, reg tol2:V, reg vargs:dots, reg r106:V, reg singular_ok1:*, reg singular_ok2:V, reg r107:V, reg c36:L, reg c38:V, reg z:*, reg z1:V, reg c39:L, reg c41:L, reg z3:V, reg dr14:V, reg dc7:L, reg dx15:V, reg c43:L, reg dx16:V, reg r108:V, reg p9:*, reg p10:V, reg r109:V, reg c44:L, reg c45:V, reg c47:L, reg stop4:cls, reg r110:V, reg z4:*, reg z5:V, reg c48:L, reg z7:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg r112:V, reg z8:*, reg z9:V, reg c49:L, reg z11:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg r113:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r114:V, reg r115:V, reg z12:*, reg z13:V, reg c50:L, reg z15:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg r116:V, reg r117:I, reg ____:cls, reg colnames:cls, reg x19:*, reg x20:V, reg p11:p(V +), reg r119:V, reg p12:p(V +), reg paste0:cls, reg p13:*, reg p14:V, reg r121:V, reg p15:p(V +), reg r123:V, reg p16:p(V +), reg r125:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r126:V, reg r127:V, reg dn:*, reg dn1:V, reg c51:L, reg dn3:V, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg pivot:*, reg pivot1:V, reg c52:L, reg dn5:V, reg pivot3:V, reg dr24:V, reg dc12:L, reg dx25:V, reg dn7:V, reg dx26:V, reg r128:*, reg r129:V, reg __7:cls, reg r130:V, reg __8:cls, reg r131:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r132:V, reg r133:V, reg n8:*, reg n9:V, reg z16:*, reg z17:V, reg c53:L, reg n11:V, reg z19:V, reg dr26:V, reg dc13:L, reg dx27:V, reg n13:V, reg dx28:V, reg r134:V, reg r135:V, reg rep_int:cls, reg r136:V, reg c54:cls, reg r137:V, reg z20:*, reg z21:V, reg c55:L, reg z23:V, reg dr28:V, reg dc14:L, reg dx29:V, reg dx30:V, reg r138:V, reg p17:*, reg p18:V, reg r139:V, reg c56:L, reg z24:*, reg z25:V, reg c57:L, reg z27:V, reg dr30:V, reg dc15:L, reg dx31:V, reg dx32:V, reg r140:V, reg r141:V, reg p19:*, reg p20:V, reg r142:V, reg r143:V, reg integer:cls, reg r144:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r145:V, reg r146:V, reg y43:*, reg y44:V, reg is_matrix1:cls, reg r147:V, reg c58:L, reg l:*, reg c59:L, reg r149:L, reg l2:*, reg dr32:V, reg dc16:L, reg dx33:V, reg dx34:V, reg r152:*, reg r153:V, reg ___:cls, reg r154:V, reg z28:*, reg z29:V, reg c60:L, reg z31:V, reg dr34:V, reg dc17:L, reg dx35:V, reg dx36:V, reg r155:V, reg c61:L, reg coef:*, reg coef1:V, reg l3:*, reg c62:L, reg coef3:V, reg l5:*, reg dr36:V, reg dc18:L, reg dx37:V, reg coef5:V, reg dx38:V, reg pivot4:*, reg pivot5:V, reg ___1:cls, reg r156:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r157:V, reg r158:V, reg dn8:*, reg dn9:V, reg colnames1:cls, reg y45:*, reg y46:V, reg p21:p(V +), reg r160:V, reg list2:cls, reg r161:V, reg l6:*, reg dimnames__:cls, reg r162:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r163:V, reg r164:V, reg nmeffects:*, reg nmeffects1:V, reg colnames2:cls, reg y47:*, reg y48:V, reg p22:p(V +), reg r166:V, reg list3:cls, reg r167:V, reg l7:*, reg c63:L, reg r170:V, reg l10:*, reg r171:V, reg l11:*, reg dr38:V, reg dc19:L, reg dx39:V, reg r174:V, reg l13:*, reg r175:V, reg dx40:V, reg r176:V, reg dimnames__1:cls, reg r177:V, reg c64:L, reg r179:V, reg l15:*, reg dr40:V, reg dc20:L, reg dx41:V, reg r181:V, reg dx42:V, reg r182:V, reg l16:*, reg c65:L, reg r185:L, reg l18:*, reg dr42:V, reg dc21:L, reg dx43:V, reg dx44:V, reg r188:*, reg r189:V, reg ___2:cls, reg r190:V, reg z32:*, reg z33:V, reg c66:L, reg z35:V, reg dr44:V, reg dc22:L, reg dx45:V, reg dx46:V, reg r191:V, reg c67:L, reg coef7:*, reg coef8:V, reg l19:*, reg c68:L, reg coef10:V, reg l21:*, reg dr46:V, reg dc23:L, reg dx47:V, reg coef12:V, reg dx48:V, reg pivot6:*, reg pivot7:V, reg ___3:cls, reg r192:V, reg dn10:*, reg dn11:V, reg l22:*, reg names__:cls, reg r193:V, reg nmeffects2:*, reg nmeffects3:V, reg l23:*, reg c69:L, reg nmeffects6:V, reg l26:*, reg nmeffects7:V, reg l27:*, reg dr48:V, reg dc24:L, reg dx49:V, reg nmeffects10:V, reg l29:*, reg nmeffects11:V, reg dx50:V, reg r194:V, reg names__1:cls, reg r195:V, reg c70:L, reg nmeffects13:V, reg l31:*, reg dr50:V, reg dc25:L, reg dx51:V, reg nmeffects15:V, reg dx52:V, reg r196:V, reg coef14:*, reg coef15:V, reg l32:*, reg c71:L, reg coef17:V, reg l34:*, reg dr52:V, reg dc26:L, reg dx53:V, reg dx54:V, reg r197:V, reg z36:*, reg z37:V, reg c72:L, reg z39:V, reg dr54:V, reg dc27:L, reg dx55:V, reg dx56:V, reg r198:V, reg wts4:*, reg wts5:V, reg r199:V, reg l35:*, reg c73:L, reg r201:V, reg l37:*, reg dr56:V, reg dc28:L, reg dx57:V, reg dx58:V, reg r204:V, reg y49:*, reg y50:V, reg z40:*, reg z41:V, reg c74:L, reg y52:V, reg z43:V, reg dr58:V, reg dc29:L, reg dx59:V, reg y54:V, reg dx60:V, reg r205:V, reg r206:V, reg l38:*, reg c75:L, reg r208:V, reg l40:*, reg dr60:V, reg dc30:L, reg dx61:V, reg dx62:V, reg r211:V, reg w23:*, reg w24:V, reg l41:*, reg c76:L, reg w26:V, reg l43:*, reg dr62:V, reg dc31:L, reg dx63:V, reg dx64:V, reg r212:V, reg zero_weights2:*, reg zero_weights3:V, reg c77:L, reg l44:*, reg c78:L, reg r214:R, reg l46:*, reg dr64:V, reg dc32:L, reg dx65:V, reg dx66:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r221:V, reg r222:R, reg l49:*, reg r223:R, reg r224:V, reg coef20:*, reg coef21:V, reg is_na1:cls, reg r225:V, reg ___4:cls, reg r226:V, reg x21:*, reg x22:V, reg coef22:*, reg coef23:V, reg ___5:cls, reg r227:V, reg ny6:*, reg ny7:V, reg r228:V, reg c79:L, reg z44:*, reg z45:V, reg c80:L, reg z47:V, reg dr66:V, reg dc33:L, reg dx67:V, reg dx68:V, reg r229:V, reg l50:*, reg c81:L, reg dx70:V, reg l52:*, reg dr68:V, reg dc34:L, reg dx72:V, reg dx74:V, reg ok16:*, reg ok17:V, reg ___6:cls, reg r230:V, reg y55:*, reg y56:V, reg f0:*, reg f1:V, reg r231:V, reg l53:*, reg c82:L, reg r233:V, reg l55:*, reg dr70:V, reg dc35:L, reg dx75:V, reg dx76:V, reg nok:*, reg nok1:V, reg ___7:cls, reg r236:V, reg z48:*, reg z49:V, reg c83:L, reg z51:V, reg dr72:V, reg dc36:L, reg dx77:V, reg dx78:V, reg r237:V, reg l56:*, reg c84:L, reg dx80:V, reg l58:*, reg dr74:V, reg dc37:L, reg dx82:V, reg dx84:V, reg ok18:*, reg ok19:V, reg ___8:cls, reg r238:V, reg f2:*, reg f3:V, reg l59:*, reg c85:L, reg f5:V, reg l61:*, reg dr76:V, reg dc38:L, reg dx85:V, reg f7:V, reg dx86:V, reg nok2:*, reg nok3:V, reg ___9:cls, reg r239:V, reg z52:*, reg z53:V, reg c86:L, reg z55:V, reg dr78:V, reg dc39:L, reg dx87:V, reg dx88:V, reg r240:V, reg l62:*, reg c87:L, reg dx90:V, reg l64:*, reg dr80:V, reg dc40:L, reg dx92:V, reg dx94:V, reg ok20:*, reg ok21:V, reg ___10:cls, reg r241:V, reg y57:*, reg y58:V, reg f9:*, reg f10:V, reg r242:V, reg l65:*, reg c88:L, reg r244:V, reg l67:*, reg dr82:V, reg dc41:L, reg dx95:V, reg dx96:V, reg nok4:*, reg nok5:V, reg ___11:cls, reg r247:V, reg z56:*, reg z57:V, reg c89:L, reg z59:V, reg dr84:V, reg dc42:L, reg dx97:V, reg dx98:V, reg r248:V, reg l68:*, reg c90:L, reg dx100:V, reg l70:*, reg dr86:V, reg dc43:L, reg dx102:V, reg dx104:V, reg ok22:*, reg ok23:V, reg ___12:cls, reg r249:V, reg f11:*, reg f12:V, reg l71:*, reg c91:L, reg f14:V, reg l73:*, reg dr88:V, reg dc44:L, reg dx105:V, reg f16:V, reg dx106:V, reg nok6:*, reg nok7:V, reg ___13:cls, reg r250:V, reg save_r:*, reg save_r1:V, reg l74:*, reg c92:L, reg save_r3:V, reg l76:*, reg dr90:V, reg dc45:L, reg dx107:V, reg dx108:V, reg r251:V, reg save_f:*, reg save_f1:V, reg l77:*, reg c93:L, reg save_f3:V, reg l79:*, reg dr92:V, reg dc46:L, reg dx109:V, reg dx110:V, reg r252:V, reg save_w:*, reg save_w1:V, reg l80:*, reg c94:L, reg save_w3:V, reg l82:*, reg dr94:V, reg dc47:L, reg dx111:V, reg save_w5:V, reg dx112:V, reg r253:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r254:V, reg r255:V, reg offset5:*, reg offset6:V, reg c95:V, reg r256:V, reg c96:L, reg z60:*, reg z61:V, reg c97:L, reg z63:V, reg dr96:V, reg dc48:L, reg dx113:V, reg dx114:V, reg r257:V, reg offset7:*, reg offset8:V, reg r258:V, reg l83:*, reg c98:L, reg r260:V, reg l85:*, reg dr98:V, reg dc49:L, reg dx115:V, reg r262:V, reg dx116:V, reg r263:V, reg z64:*, reg z65:V, reg c99:L, reg z67:V, reg dr100:V, reg dc50:L, reg dx117:V, reg dx118:V, reg r265:V, reg c100:L, reg colnames3:cls, reg x23:*, reg x24:V, reg p23:p(V +), reg r267:V, reg c101:L, reg r269:V, reg dr102:V, reg dc51:L, reg dx119:V, reg dx120:V, reg z68:*, reg z69:V, reg c102:L, reg r271:V, reg z71:V, reg dr104:V, reg dc52:L, reg dx121:V, reg r273:V, reg dx122:V, reg r274:V, reg __9:cls, reg r275:V, reg l86:*, reg c103:L, reg dx125:V, reg l89:*, reg dx126:V, reg l90:*, reg dr106:V, reg dc53:L, reg dx129:V, reg dx130:V, reg l92:*, reg dx131:V, reg dx132:V, reg r276:V, reg colnames__:cls, reg r277:V, reg c104:L, reg dx134:V, reg l94:*, reg dr108:V, reg dc54:L, reg dx136:V, reg dx137:V, reg dx138:V, reg r278:V, reg z72:*, reg z73:V, reg c105:L, reg z75:V, reg dr110:V, reg dc55:L, reg dx140:V, reg dx141:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r279:V, reg z78:V, reg r280:V, reg c106:cls, reg r281:V, reg __10:cls, reg r282:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r283:V, reg r284:V, reg z79:*, reg z80:V, reg c107:L, reg z82:V, reg dr112:V, reg dc56:L, reg dx142:V, reg dx143:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r285:V, reg z85:V, reg r286:V, reg c108:cls, reg r287:V, reg __11:cls, reg r288:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r289:V, reg r290:V, reg x_asgn:*, reg x_asgn1:V, reg structure:cls, reg qr:*, reg qr1:V, reg p24:p(V +), reg r292:V, reg n14:*, reg n15:V, reg z86:*, reg z87:V, reg c109:L, reg n17:V, reg z89:V, reg dr114:V, reg dc57:L, reg dx144:V, reg n19:V, reg dx145:V, reg r293:V, reg r294:V, reg list4:cls, reg r295:V, reg c110:cls, reg r296:V |
    mkenv;
    st x = x;
    st y = y;
    st w = w;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L0(NULL) else L0(offset);
  L0(offset_orDefault):
    st offset = offset_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L1("qr") else L1(method);
  L1(method_orDefault):
    st method = method_orDefault;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L2(1.0E-7) else L2(tol);
  L2(tol_orDefault):
    st tol = tol_orDefault;
    singular_ok_isMissing = missing.0(singular_ok);
    if singular_ok_isMissing then L3(TRUE) else L3(singular_ok);
  L3(singular_ok_orDefault):
    st `singular.ok` = singular_ok_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L99() else L100();
  L4(r1):
    c1 = `as.logical`(r1);
    if c1 then L103() else L5();
  L99():
    nrow = ldf nrow;
    check L101() else D0();
  L100():
    r = dyn base(<lang `<-`(n, nrow(x))>);
    goto L4(r);
  D0():
    deopt 2 [];
  L5():
    goto L6();
  L6():
    n = ld n;
    check L107() else D4();
  L101():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn nrow(p);
    check L102() else D1();
  L103():
    stop = ldf stop;
    check L104() else D2();
  D1():
    deopt 4 [r3];
  D2():
    deopt 8 [];
  D4():
    deopt 13 [n];
  L102():
    st n = r3;
    c = `==`(r3, NULL);
    goto L4(c);
  L104():
    r4 = dyn stop("'x' must be a matrix");
    check L105() else D3();
  L107():
    n1 = force? n;
    checkMissing(n1);
    r6 = `==`(n1, 0.0);
    c2 = `as.logical`(r6);
    if c2 then L108() else L7();
  D3():
    deopt 10 [r4];
  L7():
    goto L8();
  L8():
    NCOL = ldf NCOL;
    check L112() else D7();
  L105():
    goto L6();
  L108():
    stop1 = ldf stop;
    check L109() else D5();
  D5():
    deopt 18 [];
  D7():
    deopt 24 [];
  L109():
    r7 = dyn stop1("0 (non-NA) cases");
    check L110() else D6();
  L112():
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r10 = dyn NCOL(p1);
    check L113() else D8();
  D6():
    deopt 20 [r7];
  D8():
    deopt 26 [r10];
  L110():
    goto L8();
  L113():
    st ny = r10;
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L114() else L115();
  L9(r12):
    c3 = `as.logical`(r12);
    if c3 then L118() else L10(c3);
  L114():
    y3 = ld y;
    check L116() else D9();
  L115():
    r11 = dyn base1(<sym y>);
    goto L9(r11);
  D9():
    deopt 30 [y3];
  L10(c5):
    c9 = `as.logical`(c5);
    if c9 then L121() else L11();
  L116():
    y4 = force? y3;
    checkMissing(y4);
    is_matrix = ldf `is.matrix` in base;
    r13 = dyn is_matrix(y4);
    check L117() else D10();
  L118():
    ny = ld ny;
    check L119() else D11();
  D10():
    deopt 33 [r13];
  D11():
    deopt 34 [c3, ny];
  L11():
    goto L13();
  L13():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L127() else L128();
  L117():
    goto L9(r13);
  L119():
    ny1 = force? ny;
    checkMissing(ny1);
    r14 = `==`(ny1, 1);
    c6 = `as.logical`(r14);
    c7 = `&&`(c3, c6);
    goto L10(c7);
  L121():
    sym2 = ldf drop;
    base2 = ldf drop in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L122() else L123();
  L12(r16):
    st y = r16;
    goto L13();
  L14(r20):
    r21 = `!`(r20);
    c11 = `as.logical`(r21);
    if c11 then L130() else L15();
  L122():
    y5 = ld y;
    check L124() else D12();
  L123():
    r15 = dyn base2(<sym y>);
    goto L12(r15);
  L127():
    offset1 = ld offset;
    check L129() else D14();
  L128():
    r19 = dyn base3(<sym offset>);
    goto L14(r19);
  D12():
    deopt 41 [y5];
  D14():
    deopt 49 [offset1];
  L15():
    goto L16();
  L16():
    NROW = ldf NROW;
    check L134() else D17();
  L124():
    y6 = force? y5;
    checkMissing(y6);
    drop = ldf drop in base;
    r17 = dyn drop(y6);
    check L125() else D13();
  L129():
    offset2 = force? offset1;
    checkMissing(offset2);
    c10 = `==`(offset2, NULL);
    goto L14(c10);
  L130():
    y7 = ld y;
    check L131() else D15();
  D13():
    deopt 44 [r17];
  D15():
    deopt 53 [y7];
  D17():
    deopt 61 [];
  L125():
    goto L12(r17);
  L131():
    y8 = force? y7;
    checkMissing(y8);
    offset3 = ld offset;
    check L132() else D16();
  L134():
    p2 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      return y10;
    };
    r25 = dyn NROW(p2);
    check L135() else D18();
  D16():
    deopt 54 [y8, offset3];
  D18():
    deopt 63 [r25];
  L132():
    offset4 = force? offset3;
    checkMissing(offset4);
    r22 = `-`(y8, offset4);
    st y = r22;
    goto L16();
  L135():
    n2 = ld n;
    check L136() else D19();
  D19():
    deopt 63 [r25, n2];
  L136():
    n3 = force? n2;
    checkMissing(n3);
    r26 = `!=`(r25, n3);
    c12 = `as.logical`(r26);
    if c12 then L17(c12) else L137();
  L17(c13):
    c21 = `as.logical`(c13);
    if c21 then L144() else L19();
  L137():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L138() else L139();
  L18(c17, r28):
    n4 = ld n;
    check L142() else D22();
  L19():
    goto L20();
  L20():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L148() else L149();
  L138():
    w1 = ld w;
    check L140() else D20();
  L139():
    r27 = dyn base4(<sym w>);
    goto L18(c12, r27);
  L144():
    stop2 = ldf stop;
    check L145() else D23();
  D20():
    deopt 68 [c12, w1];
  D22():
    deopt 71 [c17, r28, n4];
  D23():
    deopt 76 [];
  L21(r34):
    c22 = `as.logical`(r34);
    if c22 then L156() else L23();
  L140():
    w2 = force? w1;
    checkMissing(w2);
    length = ldf length in base;
    r29 = dyn length(w2);
    check L141() else D21();
  L142():
    n5 = force? n4;
    checkMissing(n5);
    r30 = `!=`(r28, n5);
    c18 = `as.logical`(r30);
    c19 = `||`(c17, c18);
    goto L17(c19);
  L145():
    r31 = dyn stop2("incompatible dimensions");
    check L146() else D24();
  L148():
    w3 = ld w;
    check L150() else D25();
  L149():
    r33 = dyn base5(<lang `|`(`<`(w, 0.0), is.na(w))>);
    goto L21(r33);
  D21():
    deopt 71 [c12, r29];
  D24():
    deopt 78 [r31];
  D25():
    deopt 83 [w3];
  L23():
    goto L24();
  L24():
    method1 = ld method;
    check L160() else D31();
  L141():
    goto L18(c12, r29);
  L146():
    goto L20();
  L150():
    w4 = force? w3;
    checkMissing(w4);
    r35 = `<`(w4, 0.0);
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L151() else L152();
  L156():
    stop3 = ldf stop;
    check L157() else D29();
  D29():
    deopt 96 [];
  D31():
    deopt 101 [method1];
  L22(r39, r40):
    r42 = `||`(r39, r40);
    any = ldf any in base;
    r43 = dyn any(r42);
    check L155() else D28();
  L151():
    w5 = ld w;
    check L153() else D26();
  L152():
    r38 = dyn base6(<sym w>);
    goto L22(r35, r38);
  L157():
    r44 = dyn stop3("missing or negative weights not allowed");
    check L158() else D30();
  L160():
    method2 = force? method1;
    checkMissing(method2);
    r46 = `!=`(method2, "qr");
    c23 = `as.logical`(r46);
    if c23 then L161() else L25();
  D26():
    deopt 88 [r35, w5];
  D28():
    deopt 94 [r43];
  D30():
    deopt 98 [r44];
  L25():
    goto L26();
  L26():
    chkDots = ldf chkDots;
    check L165() else D34();
  L153():
    w6 = force? w5;
    checkMissing(w6);
    is_na = ldf `is.na` in base;
    r41 = dyn is_na(w6);
    check L154() else D27();
  L155():
    goto L21(r43);
  L158():
    goto L24();
  L161():
    warning = ldf warning;
    check L162() else D32();
  D27():
    deopt 91 [r35, r41];
  D32():
    deopt 106 [];
  D34():
    deopt 114 [];
  L154():
    goto L22(r35, r41);
  L162():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        method3 = ld method;
        method4 = force? method3;
        checkMissing(method4);
        return method4;
      };
      r48 = dyn gettextf("method = '%s' is not supported. Using 'qr'", p3);
      return r48;
    };
    r50 = dyn warning[, domain](p4, NA_LGL);
    check L163() else D33();
  L165():
    ddd1 = ld `...`;
    r52 = dyn chkDots[`...`](ddd1);
    check L166() else D35();
  D33():
    deopt 110 [r50];
  D35():
    deopt 116 [r52];
  L163():
    goto L26();
  L166():
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L167() else L168();
  L27(r54):
    st `x.asgn` = r54;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L171() else L172();
  L167():
    x3 = ld x;
    check L169() else D36();
  L168():
    r53 = dyn base7(<sym x>, "assign");
    goto L27(r53);
  D36():
    deopt 119 [x3];
  L28(r57):
    st `zero.weights` = r57;
    zero_weights = ld `zero.weights`;
    check L175() else D40();
  L169():
    x4 = force? x3;
    checkMissing(x4);
    attr = ldf attr in base;
    r55 = dyn attr(x4, "assign");
    check L170() else D37();
  L171():
    w7 = ld w;
    check L173() else D38();
  L172():
    r56 = dyn base8(<lang `==`(w, 0.0)>);
    goto L28(r56);
  D37():
    deopt 123 [r55];
  D38():
    deopt 127 [w7];
  D40():
    deopt 134 [zero_weights];
  L170():
    goto L27(r55);
  L173():
    w8 = force? w7;
    checkMissing(w8);
    r58 = `==`(w8, 0.0);
    any1 = ldf any in base;
    r59 = dyn any1(r58);
    check L174() else D39();
  L175():
    zero_weights1 = force? zero_weights;
    checkMissing(zero_weights1);
    c24 = `as.logical`(zero_weights1);
    if c24 then L176() else L29();
  D39():
    deopt 132 [r59];
  L29():
    goto L39();
  L39():
    ncol = ldf ncol;
    check L226() else D64();
  L174():
    goto L28(r59);
  L176():
    y11 = ld y;
    check L177() else D41();
  D41():
    deopt 136 [y11];
  D64():
    deopt 229 [];
  L177():
    y12 = force? y11;
    checkMissing(y12);
    st `save.r` = y12;
    y13 = ld y;
    check L178() else D42();
  L226():
    p6 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r77 = dyn ncol(p6);
    check L227() else D65();
  D42():
    deopt 139 [y13];
  D65():
    deopt 231 [r77];
  L178():
    y14 = force? y13;
    checkMissing(y14);
    st `save.f` = y14;
    w9 = ld w;
    check L179() else D43();
  L227():
    st p = r77;
    p7 = ld p;
    check L228() else D66();
  D43():
    deopt 142 [w9];
  D66():
    deopt 233 [p7];
  L179():
    w10 = force? w9;
    checkMissing(w10);
    st `save.w` = w10;
    w11 = ld w;
    check L180() else D44();
  L228():
    p8 = force? p7;
    checkMissing(p8);
    r78 = `==`(p8, 0.0);
    c34 = `as.logical`(r78);
    if c34 then L229() else L40();
  D44():
    deopt 145 [w11];
  L40():
    n6 = ld n;
    check L244() else D75();
  L180():
    w12 = force? w11;
    checkMissing(w12);
    r60 = `!=`(w12, 0.0);
    st ok = r60;
    ok = ld ok;
    check L181() else D45();
  L229():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L230() else L231();
  D45():
    deopt 150 [ok];
  D75():
    deopt 268 [n6];
  L41(r80):
    popenv;
    return r80;
  L181():
    ok1 = force? ok;
    checkMissing(ok1);
    r61 = `!`(ok1);
    st nok = r61;
    w13 = ld w;
    check L182() else D46();
  L230():
    numeric = ldf numeric;
    check L232() else D67();
  L231():
    r79 = dyn base9[coefficients, residuals, `fitted.values`, weights, rank, `df.residual`](<lang numeric()>, <sym y>, <lang `*`(0.0, y)>, <sym w>, 0, <lang length(y)>);
    goto L41(r79);
  L244():
    n7 = force? n6;
    checkMissing(n7);
    r89 = `==`(n7, 0.0);
    c35 = `as.logical`(r89);
    if c35 then L245() else L44();
  D46():
    deopt 154 [w13];
  D67():
    deopt 240 [];
  L44():
    sym13 = ldf sqrt;
    base13 = ldf sqrt in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L256() else L257();
  L182():
    w14 = force? w13;
    checkMissing(w14);
    c25 = `is.object`(w14);
    if c25 then L183() else L184(w14);
  L232():
    r81 = dyn numeric();
    check L233() else D68();
  L245():
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L246() else L247();
  D68():
    deopt 241 [r81];
  L30(dx1):
    st w = dx1;
    x5 = ld x;
    check L187() else D48();
  L45(r91):
    popenv;
    return r91;
  L48(r100):
    st wts = r100;
    sym14 = ldf `.Call`;
    base14 = ldf `.Call` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L259() else L260();
  L183():
    dr = tryDispatchBuiltin.1("[", w14);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L185() else L184(dr);
  L184(w16):
    ok2 = ld ok;
    check L186() else D47();
  L233():
    y31 = ld y;
    check L234() else D69();
  L246():
    sym12 = ldf rep;
    base12 = ldf rep in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L248() else L249();
  L247():
    r90 = dyn base11[coefficients, residuals, `fitted.values`, weights, rank, `df.residual`](<lang rep(NA_REAL, p)>, <sym y>, <lang `*`(0.0, y)>, <sym w>, 0, 0);
    goto L45(r90);
  L256():
    w21 = ld w;
    check L258() else D80();
  L257():
    r99 = dyn base13(<sym w>);
    goto L48(r99);
  D47():
    deopt 156 [w16, ok2];
  D48():
    deopt 160 [x5];
  D69():
    deopt 243 [y31];
  D80():
    deopt 299 [w21];
  L46(r93):
    y37 = ld y;
    check L250() else D76();
  L49(r103):
    st z = r103;
    singular_ok1 = ld `singular.ok`;
    check L267() else D87();
  L185():
    dx = getTryDispatchBuiltinValue(dr);
    goto L30(dx);
  L186():
    ok3 = force? ok2;
    __ = ldf `[` in base;
    r62 = dyn __(w16, ok3);
    goto L30(r62);
  L187():
    x6 = force? x5;
    checkMissing(x6);
    c26 = `is.object`(x6);
    if c26 then L188() else L189(x6);
  L234():
    y32 = force? y31;
    checkMissing(y32);
    y33 = ld y;
    check L235() else D70();
  L248():
    rep = ldf rep in base;
    r94 = dyn rep(NA_REAL, <sym p>);
    goto L46(r94);
  L249():
    r92 = dyn base12(NA_REAL, <sym p>);
    goto L46(r92);
  L258():
    w22 = force? w21;
    checkMissing(w22);
    r101 = sqrt(w22);
    goto L48(r101);
  L259():
    C_Cdqrls = ld C_Cdqrls;
    check L261() else D81();
  L260():
    r102 = dyn base14(<sym C_Cdqrls>, <lang `*`(x, wts)>, <lang `*`(y, wts)>, <sym tol>, FALSE);
    goto L49(r102);
  D70():
    deopt 247 [0.0, y33];
  D76():
    deopt 278 [y37];
  D81():
    deopt 304 [C_Cdqrls];
  D87():
    deopt 316 [singular_ok1];
  L31(dx3):
    st x0 = dx3;
    x9 = ld x;
    check L192() else D50();
  L188():
    dr2 = tryDispatchBuiltin.1("[", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L190() else L189(dr2);
  L189(x8):
    ok4 = ld ok;
    check L191() else D49();
  L235():
    y34 = force? y33;
    checkMissing(y34);
    r82 = `*`(0.0, y34);
    w17 = ld w;
    check L236() else D71();
  L250():
    y38 = force? y37;
    checkMissing(y38);
    y39 = ld y;
    check L251() else D77();
  L261():
    C_Cdqrls1 = force? C_Cdqrls;
    checkMissing(C_Cdqrls1);
    x17 = ld x;
    check L262() else D82();
  L267():
    singular_ok2 = force? singular_ok1;
    checkMissing(singular_ok2);
    r107 = `!`(singular_ok2);
    c36 = `as.logical`(r107);
    if c36 then L268() else L50(c36);
  D49():
    deopt 162 [x8, ok4];
  D50():
    deopt 171 [x9];
  D71():
    deopt 251 [w17];
  D77():
    deopt 282 [0.0, y39];
  D82():
    deopt 305 [C_Cdqrls1, x17];
  L50(c38):
    c47 = `as.logical`(c38);
    if c47 then L276() else L51();
  L190():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L31(dx2);
  L191():
    ok5 = force? ok4;
    checkMissing(ok5);
    r63 = `!`(ok5);
    __1 = ldf `[` in base;
    r64 = dyn __1(x6, r63, <missing>, FALSE);
    goto L31(r64);
  L192():
    x10 = force? x9;
    checkMissing(x10);
    c27 = `is.object`(x10);
    if c27 then L193() else L194(x10);
  L236():
    w18 = force? w17;
    checkMissing(w18);
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L237() else L238();
  L251():
    y40 = force? y39;
    checkMissing(y40);
    r95 = `*`(0.0, y40);
    w19 = ld w;
    check L252() else D78();
  L262():
    x18 = force? x17;
    checkMissing(x18);
    wts = ld wts;
    check L263() else D83();
  L268():
    z = ld z;
    check L269() else D88();
  D78():
    deopt 286 [w19];
  D83():
    deopt 306 [C_Cdqrls1, x18, wts];
  D88():
    deopt 319 [c36, z];
  L32(dx5):
    st x = dx5;
    nrow1 = ldf nrow;
    check L197() else D52();
  L42(r84):
    list = ldf list in base;
    r86 = dyn list(r81, y32, r82, w18, 0, r84);
    check L241() else D74();
  L51():
    goto L52();
  L52():
    z4 = ld z;
    check L280() else D92();
  L193():
    dr4 = tryDispatchBuiltin.1("[", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L195() else L194(dr4);
  L194(x12):
    ok6 = ld ok;
    check L196() else D51();
  L237():
    y35 = ld y;
    check L239() else D72();
  L238():
    r83 = dyn base10(<sym y>);
    goto L42(r83);
  L252():
    w20 = force? w19;
    checkMissing(w20);
    list1 = ldf list in base;
    r96 = dyn list1(r93, y38, r95, w20, 0, 0);
    check L253() else D79();
  L263():
    wts1 = force? wts;
    checkMissing(wts1);
    r104 = `*`(x18, wts1);
    y41 = ld y;
    check L264() else D84();
  L269():
    z1 = force? z;
    checkMissing(z1);
    c39 = `is.object`(z1);
    if c39 then L271() else L272(c36, z1);
  L276():
    stop4 = ldf stop;
    check L277() else D90();
  D51():
    deopt 173 [x12, ok6];
  D52():
    deopt 182 [];
  D72():
    deopt 258 [y35];
  D74():
    deopt 264 [r86];
  D79():
    deopt 294 [r96];
  D84():
    deopt 308 [C_Cdqrls1, r104, y41];
  D90():
    deopt 326 [];
  D92():
    deopt 331 [z4];
  L195():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L32(dx4);
  L196():
    ok7 = force? ok6;
    __2 = ldf `[` in base;
    r65 = dyn __2(x10, ok7, <missing>, FALSE);
    goto L32(r65);
  L197():
    p5 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r67 = dyn nrow1(p5);
    check L198() else D53();
  L239():
    y36 = force? y35;
    checkMissing(y36);
    length1 = ldf length in base;
    r85 = dyn length1(y36);
    check L240() else D73();
  L241():
    goto L41(r86);
  L253():
    goto L45(r96);
  L264():
    y42 = force? y41;
    checkMissing(y42);
    wts2 = ld wts;
    check L265() else D85();
  L270(c43, dx16):
    p9 = ld p;
    check L274() else D89();
  L271():
    dr14 = tryDispatchBuiltin.1("$", z1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L273() else L272(c36, dr14);
  L272(c41, z3):
    r108 = `$`(z3, <sym rank>);
    goto L270(c41, r108);
  L277():
    r110 = dyn stop4("singular fit encountered");
    check L278() else D91();
  L280():
    z5 = force? z4;
    checkMissing(z5);
    c48 = `is.object`(z5);
    if c48 then L282() else L283(z5);
  D53():
    deopt 184 [r67];
  D73():
    deopt 261 [r85];
  D85():
    deopt 309 [C_Cdqrls1, r104, y42, wts2];
  D89():
    deopt 321 [c43, dx16, p9];
  D91():
    deopt 328 [r110];
  L198():
    st n = r67;
    ny2 = ld ny;
    check L199() else D54();
  L240():
    goto L42(r85);
  L265():
    wts3 = force? wts2;
    checkMissing(wts3);
    r105 = `*`(y42, wts3);
    tol1 = ld tol;
    check L266() else D86();
  L273():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L270(c36, dx15);
  L274():
    p10 = force? p9;
    checkMissing(p10);
    r109 = `<`(dx16, p10);
    c44 = `as.logical`(r109);
    c45 = `&&`(c43, c44);
    goto L50(c45);
  L278():
    goto L52();
  L281(dx18):
    st coef = dx18;
    z8 = ld z;
    check L285() else D93();
  L282():
    dr16 = tryDispatchBuiltin.1("$", z5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L284() else L283(dr16);
  L283(z7):
    r112 = `$`(z7, <sym coefficients>);
    goto L281(r112);
  D54():
    deopt 186 [ny2];
  D86():
    deopt 311 [C_Cdqrls1, r104, r105, tol1];
  D93():
    deopt 335 [z8];
  L199():
    ny3 = force? ny2;
    checkMissing(ny3);
    r68 = `>`(ny3, 1);
    c28 = `as.logical`(r68);
    if c28 then L200() else L33();
  L266():
    tol2 = force? tol1;
    checkMissing(tol2);
    vargs = dots[r104, r105, tol2, FALSE];
    r106 = `.Call`(C_Cdqrls1, vargs, <missing>);
    goto L49(r106);
  L284():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L281(dx17);
  L285():
    z9 = force? z8;
    checkMissing(z9);
    c49 = `is.object`(z9);
    if c49 then L287() else L288(z9);
  L33():
    y19 = ld y;
    check L207() else D57();
  L35(dx8):
    st y0 = dx8;
    ny4 = ld ny;
    check L212() else D59();
  L200():
    y15 = ld y;
    check L201() else D55();
  L286(dx20):
    st pivot = dx20;
    sym15 = ldf seq_len;
    base15 = ldf seq_len in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L290() else L291();
  L287():
    dr18 = tryDispatchBuiltin.1("$", z9);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L289() else L288(dr18);
  L288(z11):
    r113 = `$`(z11, <sym pivot>);
    goto L286(r113);
  D55():
    deopt 190 [y15];
  D57():
    deopt 200 [y19];
  D59():
    deopt 207 [ny4];
  L53(r115):
    st r1 = r115;
    ____ = ldf `%||%`;
    check L297() else D95();
  L201():
    y16 = force? y15;
    checkMissing(y16);
    c29 = `is.object`(y16);
    if c29 then L202() else L203(y16);
  L207():
    y20 = force? y19;
    checkMissing(y20);
    c30 = `is.object`(y20);
    if c30 then L208() else L209(y20);
  L212():
    ny5 = force? ny4;
    checkMissing(ny5);
    r73 = `>`(ny5, 1);
    c31 = `as.logical`(r73);
    if c31 then L213() else L36();
  L289():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L286(dx19);
  L290():
    z12 = ld z;
    check L292() else D94();
  L291():
    r114 = dyn base15(<lang `$`(z, rank)>);
    goto L53(r114);
  D94():
    deopt 340 [z12];
  D95():
    deopt 346 [];
  L34(dx7):
    goto L35(dx7);
  L36():
    y27 = ld y;
    check L220() else D62();
  L38(dx12):
    st y = dx12;
    goto L39();
  L202():
    dr6 = tryDispatchBuiltin.1("[", y16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L204() else L203(dr6);
  L203(y18):
    ok8 = ld ok;
    check L205() else D56();
  L208():
    dr8 = tryDispatchBuiltin.1("[", y20);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L210() else L209(dr8);
  L209(y22):
    ok10 = ld ok;
    check L211() else D58();
  L213():
    y23 = ld y;
    check L214() else D60();
  L292():
    z13 = force? z12;
    checkMissing(z13);
    c50 = `is.object`(z13);
    if c50 then L294() else L295(z13);
  L297():
    p12 = prom<V +>{
      colnames = ldf colnames;
      p11 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        return x20;
      };
      r119 = dyn colnames(p11);
      return r119;
    };
    p16 = prom<V +>{
      paste0 = ldf paste0;
      p15 = prom<V +>{
        p13 = ld p;
        p14 = force? p13;
        checkMissing(p14);
        r121 = `:`(1, p14);
        return r121;
      };
      r123 = dyn paste0("x", p15);
      return r123;
    };
    r125 = dyn ____(p12, p16);
    check L298() else D96();
  D56():
    deopt 192 [y18, ok8];
  D58():
    deopt 202 [y22, ok10];
  D60():
    deopt 211 [y23];
  D62():
    deopt 220 [y27];
  D96():
    deopt 349 [r125];
  L204():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L34(dx6);
  L205():
    ok9 = force? ok8;
    checkMissing(ok9);
    r69 = `!`(ok9);
    __3 = ldf `[` in base;
    r70 = dyn __3(y16, r69, <missing>, FALSE);
    goto L34(r70);
  L210():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L35(dx9);
  L211():
    ok11 = force? ok10;
    checkMissing(ok11);
    r71 = `!`(ok11);
    __4 = ldf `[` in base;
    r72 = dyn __4(y22, r71);
    goto L35(r72);
  L214():
    y24 = force? y23;
    checkMissing(y24);
    c32 = `is.object`(y24);
    if c32 then L215() else L216(y24);
  L220():
    y28 = force? y27;
    checkMissing(y28);
    c33 = `is.object`(y28);
    if c33 then L221() else L222(y28);
  L293(dx22):
    r117 = seq_len(dx22);
    goto L53(r117);
  L294():
    dr20 = tryDispatchBuiltin.1("$", z13);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L296() else L295(dr20);
  L295(z15):
    r116 = `$`(z15, <sym rank>);
    goto L293(r116);
  L298():
    st dn = r125;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L299() else L300();
  L37(dx11):
    goto L38(dx11);
  L54(r127):
    st nmeffects = r127;
    z20 = ld z;
    check L320() else D104();
  L215():
    dr10 = tryDispatchBuiltin.1("[", y24);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L217() else L216(dr10);
  L216(y26):
    ok12 = ld ok;
    check L218() else D61();
  L221():
    dr12 = tryDispatchBuiltin.1("[", y28);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L223() else L222(dr12);
  L222(y30):
    ok14 = ld ok;
    check L224() else D63();
  L296():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L293(dx21);
  L299():
    dn = ld dn;
    check L301() else D97();
  L300():
    r126 = dyn base16(<lang `[`(dn, `[`(pivot, r1))>, <lang rep.int("", `-`(n, `$`(z, rank)))>);
    goto L54(r126);
  D61():
    deopt 213 [y26, ok12];
  D63():
    deopt 222 [y30, ok14];
  D97():
    deopt 353 [dn];
  D104():
    deopt 374 [z20];
  L217():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L37(dx10);
  L218():
    ok13 = force? ok12;
    __5 = ldf `[` in base;
    r74 = dyn __5(y24, ok13, <missing>, FALSE);
    goto L37(r74);
  L223():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L38(dx13);
  L224():
    ok15 = force? ok14;
    __6 = ldf `[` in base;
    r75 = dyn __6(y30, ok15);
    goto L38(r75);
  L301():
    dn1 = force? dn;
    checkMissing(dn1);
    c51 = `is.object`(dn1);
    if c51 then L302() else L303(dn1);
  L320():
    z21 = force? z20;
    checkMissing(z21);
    c55 = `is.object`(z21);
    if c55 then L322() else L323(z21);
  L55(dx24):
    sym17 = ldf `rep.int`;
    base17 = ldf `rep.int` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L310() else L311();
  L302():
    dr22 = tryDispatchBuiltin.1("[", dn1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L304() else L303(dr22);
  L303(dn3):
    pivot = ld pivot;
    check L305() else D98();
  L321(dx30):
    p17 = ld p;
    check L325() else D105();
  L322():
    dr28 = tryDispatchBuiltin.1("$", z21);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L324() else L323(dr28);
  L323(z23):
    r138 = `$`(z23, <sym rank>);
    goto L321(r138);
  D98():
    deopt 355 [dn3, pivot];
  D105():
    deopt 376 [dx30, p17];
  L57(r133):
    c54 = ldf c in base;
    r137 = dyn c54(dx24, r133);
    check L319() else D103();
  L304():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L55(dx23);
  L305():
    pivot1 = force? pivot;
    checkMissing(pivot1);
    c52 = `is.object`(pivot1);
    if c52 then L306() else L307(dn3, pivot1);
  L310():
    n8 = ld n;
    check L312() else D100();
  L311():
    r132 = dyn base17("", <lang `-`(n, `$`(z, rank))>);
    goto L57(r132);
  L324():
    dx29 = getTryDispatchBuiltinValue(dr28);
    goto L321(dx29);
  L325():
    p18 = force? p17;
    checkMissing(p18);
    r139 = `<`(dx30, p18);
    c56 = `as.logical`(r139);
    if c56 then L326() else L58();
  D100():
    deopt 364 [n8];
  D103():
    deopt 372 [r137];
  L56(dn7, dx26):
    __8 = ldf `[` in base;
    r131 = dyn __8(dn7, dx26);
    goto L55(r131);
  L58():
    integer = ldf integer;
    check L334() else D108();
  L59(r143):
    st r2 = r143;
    sym18 = ldf `is.matrix`;
    base18 = ldf `is.matrix` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L336() else L337();
  L306():
    dr24 = tryDispatchBuiltin.1("[", pivot1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L308() else L307(dn3, dr24);
  L307(dn5, pivot3):
    r128 = ld r1;
    check L309() else D99();
  L312():
    n9 = force? n8;
    checkMissing(n9);
    z16 = ld z;
    check L313() else D101();
  L319():
    goto L54(r137);
  L326():
    z24 = ld z;
    check L327() else D106();
  D99():
    deopt 357 [dn5, pivot3, r128];
  D101():
    deopt 365 [n9, z16];
  D106():
    deopt 379 [z24];
  D108():
    deopt 387 [];
  L60(r146):
    c58 = `as.logical`(r146);
    if c58 then L340() else L61();
  L308():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L56(dn3, dx25);
  L309():
    r129 = force? r128;
    __7 = ldf `[` in base;
    r130 = dyn __7(pivot3, r129);
    goto L56(dn5, r130);
  L313():
    z17 = force? z16;
    checkMissing(z17);
    c53 = `is.object`(z17);
    if c53 then L315() else L316(n9, z17);
  L327():
    z25 = force? z24;
    checkMissing(z25);
    c57 = `is.object`(z25);
    if c57 then L329() else L330(z25);
  L334():
    r144 = dyn integer();
    check L335() else D109();
  L336():
    y43 = ld y;
    check L338() else D110();
  L337():
    r145 = dyn base18(<sym y>);
    goto L60(r145);
  D109():
    deopt 388 [r144];
  D110():
    deopt 392 [y43];
  L61():
    l16 = ld coef;
    c65 = `is.object`(l16);
    if c65 then L382() else L383(NA_LGL, l16);
  L68():
    coef14 = ld coef;
    check L412() else D138();
  L314(n13, dx28):
    r135 = `-`(n13, dx28);
    rep_int = ldf `rep.int` in base;
    r136 = dyn rep_int("", r135);
    check L318() else D102();
  L315():
    dr26 = tryDispatchBuiltin.1("$", z17);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L317() else L316(n9, dr26);
  L316(n11, z19):
    r134 = `$`(z19, <sym rank>);
    goto L314(n11, r134);
  L328(dx32):
    r141 = `+`(dx32, 1);
    p19 = ld p;
    check L332() else D107();
  L329():
    dr30 = tryDispatchBuiltin.1("$", z25);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L331() else L330(dr30);
  L330(z27):
    r140 = `$`(z27, <sym rank>);
    goto L328(r140);
  L335():
    goto L59(r144);
  L338():
    y44 = force? y43;
    checkMissing(y44);
    is_matrix1 = ldf `is.matrix` in base;
    r147 = dyn is_matrix1(y44);
    check L339() else D111();
  L340():
    l = ld coef;
    c59 = `is.object`(l);
    if c59 then L341() else L342(NA_LGL, l);
  D102():
    deopt 370 [r136];
  D107():
    deopt 383 [r141, p19];
  D111():
    deopt 395 [r147];
  D138():
    deopt 490 [coef14];
  L62(dx34):
    st coef = dx34;
    z28 = ld z;
    check L345() else D113();
  L69(dx44):
    st coef = dx44;
    z32 = ld z;
    check L386() else D129();
  L317():
    dx27 = getTryDispatchBuiltinValue(dr26);
    goto L314(n9, dx27);
  L318():
    goto L57(r136);
  L331():
    dx31 = getTryDispatchBuiltinValue(dr30);
    goto L328(dx31);
  L332():
    p20 = force? p19;
    checkMissing(p20);
    r142 = `:`(r141, p20);
    goto L59(r142);
  L339():
    goto L60(r147);
  L341():
    dr32 = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L343() else L342(NA_LGL, dr32);
  L342(r149, l2):
    r152 = ld r2;
    check L344() else D112();
  L382():
    dr42 = tryDispatchBuiltin.0("[<-", l16, NA_LGL);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L384() else L383(NA_LGL, dr42);
  L383(r185, l18):
    r188 = ld r2;
    check L385() else D128();
  L412():
    coef15 = force? coef14;
    checkMissing(coef15);
    l32 = ld z;
    c71 = `is.object`(l32);
    if c71 then L414() else L415(coef15, l32);
  D112():
    deopt 399 [r149, l2, NA_LGL, r152];
  D113():
    deopt 405 [z28];
  D128():
    deopt 456 [r185, l18, NA_LGL, r188];
  D129():
    deopt 460 [z32];
  L343():
    dx33 = getTryDispatchBuiltinValue(dr32);
    goto L62(dx33);
  L344():
    r153 = force? r152;
    ___ = ldf `[<-` in base;
    r154 = dyn ___(l, r153, <missing>, NA_LGL);
    goto L62(r154);
  L345():
    z29 = force? z28;
    checkMissing(z29);
    c60 = `is.object`(z29);
    if c60 then L347() else L348(z29);
  L384():
    dx43 = getTryDispatchBuiltinValue(dr42);
    goto L69(dx43);
  L385():
    r189 = force? r188;
    ___2 = ldf `[<-` in base;
    r190 = dyn ___2(l18, NA_LGL, r189);
    goto L69(r190);
  L386():
    z33 = force? z32;
    checkMissing(z33);
    c66 = `is.object`(z33);
    if c66 then L388() else L389(z33);
  L413(dx54):
    st z = dx54;
    z36 = ld z;
    check L417() else D139();
  L414():
    dr52 = tryDispatchBuiltin.0("$<-", l32, coef15);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L416() else L415(coef15, dr52);
  L415(coef17, l34):
    r197 = `$<-`(l34, <sym coefficients>, coef15);
    goto L413(r197);
  D139():
    deopt 495 [z36];
  L346(dx36):
    c61 = `as.logical`(dx36);
    if c61 then L350() else L63();
  L347():
    dr34 = tryDispatchBuiltin.1("$", z29);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L349() else L348(dr34);
  L348(z31):
    r155 = `$`(z31, <sym pivoted>);
    goto L346(r155);
  L387(dx46):
    c67 = `as.logical`(dx46);
    if c67 then L391() else L70();
  L388():
    dr44 = tryDispatchBuiltin.1("$", z33);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L390() else L389(dr44);
  L389(z35):
    r191 = `$`(z35, <sym pivoted>);
    goto L387(r191);
  L416():
    dx53 = getTryDispatchBuiltinValue(dr52);
    goto L413(dx53);
  L417():
    z37 = force? z36;
    checkMissing(z37);
    c72 = `is.object`(z37);
    if c72 then L419() else L420(z37);
  L63():
    goto L65();
  L65():
    sym19 = ldf list;
    base19 = ldf list in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L357() else L358();
  L70():
    goto L72();
  L72():
    dn10 = ld dn;
    check L398() else D132();
  L349():
    dx35 = getTryDispatchBuiltinValue(dr34);
    goto L346(dx35);
  L350():
    coef = ld coef;
    check L351() else D114();
  L390():
    dx45 = getTryDispatchBuiltinValue(dr44);
    goto L387(dx45);
  L391():
    coef7 = ld coef;
    check L392() else D130();
  L418(dx56):
    wts4 = ld wts;
    check L422() else D140();
  L419():
    dr54 = tryDispatchBuiltin.1("$", z37);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L421() else L420(dr54);
  L420(z39):
    r198 = `$`(z39, <sym residuals>);
    goto L418(r198);
  D114():
    deopt 408 [coef];
  D130():
    deopt 463 [coef7];
  D132():
    deopt 472 [dn10];
  D140():
    deopt 497 [dx56, wts4];
  L66(r158):
    l6 = ld coef;
    dimnames__ = ldf `dimnames<-`;
    check L363() else D120();
  L351():
    coef1 = force? coef;
    checkMissing(coef1);
    l3 = ld coef;
    c62 = `is.object`(l3);
    if c62 then L352() else L353(coef1, l3);
  L357():
    dn8 = ld dn;
    check L359() else D116();
  L358():
    r157 = dyn base19(<sym dn>, <lang colnames(y)>);
    goto L66(r157);
  L392():
    coef8 = force? coef7;
    checkMissing(coef8);
    l19 = ld coef;
    c68 = `is.object`(l19);
    if c68 then L393() else L394(coef8, l19);
  L398():
    dn11 = force? dn10;
    checkMissing(dn11);
    l22 = ld coef;
    names__ = ldf `names<-`;
    check L399() else D133();
  L421():
    dx55 = getTryDispatchBuiltinValue(dr54);
    goto L418(dx55);
  L422():
    wts5 = force? wts4;
    checkMissing(wts5);
    r199 = `/`(dx56, wts5);
    l35 = ld z;
    c73 = `is.object`(l35);
    if c73 then L424() else L425(r199, l35);
  D116():
    deopt 421 [dn8];
  D120():
    deopt 430 [r158, l6, r158];
  D133():
    deopt 475 [dn11, l22, dn11];
  L64(coef5, dx38):
    st coef = dx38;
    goto L65();
  L71(coef12, dx48):
    st coef = dx48;
    goto L72();
  L352():
    dr36 = tryDispatchBuiltin.0("[<-", l3, coef1);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L354() else L353(coef1, dr36);
  L353(coef3, l5):
    pivot4 = ld pivot;
    check L355() else D115();
  L359():
    dn9 = force? dn8;
    checkMissing(dn9);
    colnames1 = ldf colnames;
    check L360() else D117();
  L363():
    r162 = dyn dimnames__(l6, NULL, r158);
    check L364() else D121();
  L393():
    dr46 = tryDispatchBuiltin.0("[<-", l19, coef8);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L395() else L394(coef8, dr46);
  L394(coef10, l21):
    pivot6 = ld pivot;
    check L396() else D131();
  L399():
    r193 = dyn names__(l22, NULL, dn11);
    check L400() else D134();
  L423(dx58):
    st z = dx58;
    y49 = ld y;
    check L427() else D141();
  L424():
    dr56 = tryDispatchBuiltin.0("$<-", l35, r199);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L426() else L425(r199, dr56);
  L425(r201, l37):
    r204 = `$<-`(l37, <sym residuals>, r199);
    goto L423(r204);
  D115():
    deopt 411 [coef3, l5, coef1, pivot4];
  D117():
    deopt 424 [];
  D121():
    deopt 432 [r158, r162];
  D131():
    deopt 466 [coef10, l21, coef8, pivot6];
  D134():
    deopt 477 [dn11, r193];
  D141():
    deopt 503 [y49];
  L354():
    dx37 = getTryDispatchBuiltinValue(dr36);
    goto L64(coef1, dx37);
  L355():
    pivot5 = force? pivot4;
    ___1 = ldf `[<-` in base;
    r156 = dyn ___1(l3, pivot5, <missing>, coef1);
    goto L64(coef3, r156);
  L360():
    p21 = prom<V +>{
      y45 = ld y;
      y46 = force? y45;
      checkMissing(y46);
      return y46;
    };
    r160 = dyn colnames1(p21);
    check L361() else D118();
  L364():
    st coef = r162;
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L365() else L366();
  L395():
    dx47 = getTryDispatchBuiltinValue(dr46);
    goto L71(coef8, dx47);
  L396():
    pivot7 = force? pivot6;
    ___3 = ldf `[<-` in base;
    r192 = dyn ___3(l21, coef8, pivot7);
    goto L71(coef10, r192);
  L400():
    st coef = r193;
    nmeffects2 = ld nmeffects;
    check L401() else D135();
  L426():
    dx57 = getTryDispatchBuiltinValue(dr56);
    goto L423(dx57);
  L427():
    y50 = force? y49;
    checkMissing(y50);
    z40 = ld z;
    check L428() else D142();
  D118():
    deopt 426 [r160];
  D135():
    deopt 479 [nmeffects2];
  D142():
    deopt 504 [y50, z40];
  L67(r164):
    l7 = ld z;
    c63 = `is.object`(l7);
    if c63 then L372() else L373(r164, l7, r164, l7);
  L361():
    list2 = ldf list in base;
    r161 = dyn list2(dn9, r160);
    check L362() else D119();
  L365():
    nmeffects = ld nmeffects;
    check L367() else D122();
  L366():
    r163 = dyn base20(<sym nmeffects>, <lang colnames(y)>);
    goto L67(r163);
  L401():
    nmeffects3 = force? nmeffects2;
    checkMissing(nmeffects3);
    l23 = ld z;
    c69 = `is.object`(l23);
    if c69 then L403() else L404(nmeffects3, l23, nmeffects3, l23);
  L428():
    z41 = force? z40;
    checkMissing(z41);
    c74 = `is.object`(z41);
    if c74 then L430() else L431(y50, z41);
  D119():
    deopt 428 [r161];
  D122():
    deopt 436 [nmeffects];
  L362():
    goto L66(r161);
  L367():
    nmeffects1 = force? nmeffects;
    checkMissing(nmeffects1);
    colnames2 = ldf colnames;
    check L368() else D123();
  L371(r174, l13, r175, dx40):
    dimnames__1 = ldf `dimnames<-`;
    check L375() else D126();
  L372():
    dr38 = tryDispatchBuiltin.1("$", l7);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L374() else L373(r164, l7, r164, dr38);
  L373(r170, l10, r171, l11):
    r176 = `$`(l11, <sym effects>);
    goto L371(r170, l10, r171, r176);
  L402(nmeffects10, l29, nmeffects11, dx50):
    names__1 = ldf `names<-`;
    check L406() else D136();
  L403():
    dr48 = tryDispatchBuiltin.1("$", l23);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L405() else L404(nmeffects3, l23, nmeffects3, dr48);
  L404(nmeffects6, l26, nmeffects7, l27):
    r194 = `$`(l27, <sym effects>);
    goto L402(nmeffects6, l26, nmeffects7, r194);
  L429(y54, dx60):
    r206 = `-`(y54, dx60);
    l38 = ld z;
    c75 = `is.object`(l38);
    if c75 then L434() else L435(r206, l38);
  L430():
    dr58 = tryDispatchBuiltin.1("$", z41);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L432() else L431(y50, dr58);
  L431(y52, z43):
    r205 = `$`(z43, <sym residuals>);
    goto L429(y52, r205);
  D123():
    deopt 439 [];
  D126():
    deopt 448 [r174, l13, dx40, r175];
  D136():
    deopt 485 [nmeffects10, l29, dx50, nmeffects11];
  L368():
    p22 = prom<V +>{
      y47 = ld y;
      y48 = force? y47;
      checkMissing(y48);
      return y48;
    };
    r166 = dyn colnames2(p22);
    check L369() else D124();
  L374():
    dx39 = getTryDispatchBuiltinValue(dr38);
    goto L371(r164, l7, r164, dx39);
  L375():
    r177 = dyn dimnames__1(dx40, NULL, r175);
    check L376() else D127();
  L405():
    dx49 = getTryDispatchBuiltinValue(dr48);
    goto L402(nmeffects3, l23, nmeffects3, dx49);
  L406():
    r195 = dyn names__1(dx50, NULL, nmeffects11);
    check L407() else D137();
  L432():
    dx59 = getTryDispatchBuiltinValue(dr58);
    goto L429(y50, dx59);
  L433(dx62):
    st z = dx62;
    w23 = ld w;
    check L437() else D143();
  L434():
    dr60 = tryDispatchBuiltin.0("$<-", l38, r206);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L436() else L435(r206, dr60);
  L435(r208, l40):
    r211 = `$<-`(l40, <sym fitted.values>, r206);
    goto L433(r211);
  D124():
    deopt 441 [r166];
  D127():
    deopt 450 [r174, l13, r177];
  D137():
    deopt 487 [nmeffects10, l29, r195];
  D143():
    deopt 511 [w23];
  L369():
    list3 = ldf list in base;
    r167 = dyn list3(nmeffects1, r166);
    check L370() else D125();
  L376():
    c64 = `is.object`(l13);
    if c64 then L378() else L379(r174, l13);
  L407():
    c70 = `is.object`(l29);
    if c70 then L409() else L410(nmeffects10, l29);
  L436():
    dx61 = getTryDispatchBuiltinValue(dr60);
    goto L433(dx61);
  L437():
    w24 = force? w23;
    checkMissing(w24);
    l41 = ld z;
    c76 = `is.object`(l41);
    if c76 then L439() else L440(w24, l41);
  D125():
    deopt 443 [r167];
  L370():
    goto L67(r167);
  L377(r181, dx42):
    st z = dx42;
    goto L68();
  L378():
    dr40 = tryDispatchBuiltin.0("$<-", l13, r177);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L380() else L379(r174, dr40);
  L379(r179, l15):
    r182 = `$<-`(l15, <sym effects>, r177);
    goto L377(r179, r182);
  L408(nmeffects15, dx52):
    st z = dx52;
    goto L68();
  L409():
    dr50 = tryDispatchBuiltin.0("$<-", l29, r195);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L411() else L410(nmeffects10, dr50);
  L410(nmeffects13, l31):
    r196 = `$<-`(l31, <sym effects>, r195);
    goto L408(nmeffects13, r196);
  L438(dx64):
    st z = dx64;
    zero_weights2 = ld `zero.weights`;
    check L442() else D144();
  L439():
    dr62 = tryDispatchBuiltin.0("$<-", l41, w24);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L441() else L440(w24, dr62);
  L440(w26, l43):
    r212 = `$<-`(l43, <sym weights>, w24);
    goto L438(r212);
  D144():
    deopt 516 [zero_weights2];
  L380():
    dx41 = getTryDispatchBuiltinValue(dr40);
    goto L377(r174, dx41);
  L411():
    dx51 = getTryDispatchBuiltinValue(dr50);
    goto L408(nmeffects10, dx51);
  L441():
    dx63 = getTryDispatchBuiltinValue(dr62);
    goto L438(dx63);
  L442():
    zero_weights3 = force? zero_weights2;
    checkMissing(zero_weights3);
    c77 = `as.logical`(zero_weights3);
    if c77 then L443() else L73();
  L73():
    goto L86();
  L86():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L531() else L532();
  L443():
    l44 = ld coef;
    c78 = `is.object`(l44);
    if c78 then L444() else L445(0.0, l44);
  L74(dx66):
    st coef = dx66;
    x21 = ld x0;
    check L451() else D147();
  L87(r255):
    r256 = `!`(r255);
    c96 = `as.logical`(r256);
    if c96 then L534() else L88();
  L444():
    dr64 = tryDispatchBuiltin.0("[<-", l44, 0.0);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L446() else L445(0.0, dr64);
  L445(r214, l46):
    sym21 = ldf `is.na`;
    base21 = ldf `is.na` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L447() else L448();
  L531():
    offset5 = ld offset;
    check L533() else D172();
  L532():
    r254 = dyn base22(<sym offset>);
    goto L87(r254);
  D147():
    deopt 530 [x21];
  D172():
    deopt 631 [offset5];
  L75(r222, l49, r223, r224):
    ___4 = ldf `[<-` in base;
    r226 = dyn ___4(l49, r223, r224);
    goto L74(r226);
  L88():
    goto L89();
  L89():
    z64 = ld z;
    check L546() else D175();
  L446():
    dx65 = getTryDispatchBuiltinValue(dr64);
    goto L74(dx65);
  L447():
    coef20 = ld coef;
    check L449() else D145();
  L448():
    r221 = dyn base21(<sym coef>);
    goto L75(r214, l46, 0.0, r221);
  L451():
    x22 = force? x21;
    checkMissing(x22);
    coef22 = ld coef;
    check L452() else D148();
  L533():
    offset6 = force? offset5;
    checkMissing(offset6);
    c95 = `==`(offset6, NULL);
    goto L87(c95);
  L534():
    z60 = ld z;
    check L535() else D173();
  D145():
    deopt 523 [r214, l46, 0.0, coef20];
  D148():
    deopt 532 [coef22];
  D173():
    deopt 635 [z60];
  D175():
    deopt 645 [z64];
  L449():
    coef21 = force? coef20;
    checkMissing(coef21);
    is_na1 = ldf `is.na` in base;
    r225 = dyn is_na1(coef21);
    check L450() else D146();
  L452():
    coef23 = force? coef22;
    checkMissing(coef23);
    ___5 = ldf `%*%` in base;
    r227 = dyn ___5(x22, coef23);
    check L453() else D149();
  L535():
    z61 = force? z60;
    checkMissing(z61);
    c97 = `is.object`(z61);
    if c97 then L537() else L538(z61);
  L546():
    z65 = force? z64;
    checkMissing(z65);
    c99 = `is.object`(z65);
    if c99 then L548() else L549(z65);
  D146():
    deopt 526 [r214, l46, 0.0, r225];
  D149():
    deopt 535 [r227];
  L450():
    goto L75(r214, l46, 0.0, r225);
  L453():
    st f0 = r227;
    ny6 = ld ny;
    check L454() else D150();
  L536(dx114):
    offset7 = ld offset;
    check L540() else D174();
  L537():
    dr96 = tryDispatchBuiltin.1("$", z61);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L539() else L538(dr96);
  L538(z63):
    r257 = `$`(z63, <sym fitted.values>);
    goto L536(r257);
  L547(dx118):
    c100 = `as.logical`(dx118);
    if c100 then L551() else L90();
  L548():
    dr100 = tryDispatchBuiltin.1("$", z65);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L550() else L549(dr100);
  L549(z67):
    r265 = `$`(z67, <sym pivoted>);
    goto L547(r265);
  D150():
    deopt 537 [ny6];
  D174():
    deopt 637 [dx114, offset7];
  L90():
    goto L92();
  L92():
    z72 = ld z;
    check L573() else D181();
  L454():
    ny7 = force? ny6;
    checkMissing(ny7);
    r228 = `>`(ny7, 1.0);
    c79 = `as.logical`(r228);
    if c79 then L455() else L76();
  L539():
    dx113 = getTryDispatchBuiltinValue(dr96);
    goto L536(dx113);
  L540():
    offset8 = force? offset7;
    checkMissing(offset8);
    r258 = `+`(dx114, offset8);
    l83 = ld z;
    c98 = `is.object`(l83);
    if c98 then L542() else L543(r258, l83);
  L550():
    dx117 = getTryDispatchBuiltinValue(dr100);
    goto L547(dx117);
  L551():
    colnames3 = ldf colnames;
    check L552() else D176();
  D176():
    deopt 649 [];
  D181():
    deopt 667 [z72];
  L76():
    z52 = ld z;
    check L486() else D160();
  L81():
    save_r = ld `save.r`;
    check L515() else D169();
  L455():
    z44 = ld z;
    check L456() else D151();
  L541(r262, dx116):
    st z = dx116;
    goto L89();
  L542():
    dr98 = tryDispatchBuiltin.0("$<-", l83, r258);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L544() else L543(r258, dr98);
  L543(r260, l85):
    r263 = `$<-`(l85, <sym fitted.values>, r258);
    goto L541(r260, r263);
  L552():
    p23 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    r267 = dyn colnames3(p23);
    check L553() else D177();
  L573():
    z73 = force? z72;
    checkMissing(z73);
    c105 = `is.object`(z73);
    if c105 then L574() else L575(z73);
  D151():
    deopt 541 [z44];
  D160():
    deopt 581 [z52];
  D169():
    deopt 613 [save_r];
  D177():
    deopt 651 [r267];
  L93(dx141):
    st qr = dx141;
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L580() else L581();
  L456():
    z45 = force? z44;
    checkMissing(z45);
    c80 = `is.object`(z45);
    if c80 then L458() else L459(z45);
  L486():
    z53 = force? z52;
    checkMissing(z53);
    c86 = `is.object`(z53);
    if c86 then L488() else L489(z53);
  L515():
    save_r1 = force? save_r;
    checkMissing(save_r1);
    l74 = ld z;
    c92 = `is.object`(l74);
    if c92 then L517() else L518(save_r1, l74);
  L544():
    dx115 = getTryDispatchBuiltinValue(dr98);
    goto L541(r258, dx115);
  L553():
    c101 = `is.object`(r267);
    if c101 then L554() else L555(r267);
  L574():
    dr110 = tryDispatchBuiltin.1("[", z73);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L576() else L575(dr110);
  L575(z75):
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L577() else L578();
  L91(dx120):
    l86 = ld z;
    c103 = `is.object`(l86);
    if c103 then L563() else L564(dx120, l86, dx120, l86);
  L94(z78, r280):
    __10 = ldf `[` in base;
    r282 = dyn __10(z78, r280);
    goto L93(r282);
  L95(r284):
    popenv;
    return r284;
  L457(dx68):
    l50 = ld `save.r`;
    c81 = `is.object`(l50);
    if c81 then L461() else L462(dx68, l50);
  L458():
    dr66 = tryDispatchBuiltin.1("$", z45);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L460() else L459(dr66);
  L459(z47):
    r229 = `$`(z47, <sym residuals>);
    goto L457(r229);
  L487(dx88):
    l62 = ld `save.r`;
    c87 = `is.object`(l62);
    if c87 then L491() else L492(dx88, l62);
  L488():
    dr78 = tryDispatchBuiltin.1("$", z53);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L490() else L489(dr78);
  L489(z55):
    r240 = `$`(z55, <sym residuals>);
    goto L487(r240);
  L516(dx108):
    st z = dx108;
    save_f = ld `save.f`;
    check L520() else D170();
  L517():
    dr90 = tryDispatchBuiltin.0("$<-", l74, save_r1);
    dc45 = getTryDispatchBuiltinDispatched(dr90);
    if dc45 then L519() else L518(save_r1, dr90);
  L518(save_r3, l76):
    r251 = `$<-`(l76, <sym residuals>, save_r1);
    goto L516(r251);
  L554():
    dr102 = tryDispatchBuiltin.1("[", r267);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L556() else L555(dr102);
  L555(r269):
    z68 = ld z;
    check L557() else D178();
  L576():
    dx140 = getTryDispatchBuiltinValue(dr110);
    goto L93(dx140);
  L577():
    c106 = ldf c in base;
    r281 = dyn c106("qr", "qraux", "pivot", "tol", "rank");
    check L579() else D182();
  L578():
    r279 = dyn base23("qr", "qraux", "pivot", "tol", "rank");
    goto L94(z75, r279);
  L580():
    z79 = ld z;
    check L582() else D183();
  L581():
    r283 = dyn base24(<lang `[`(z, c("coefficients", "residuals", "fitted.values", "effects", "weights", "rank"))>, <lang list(assign=x.asgn, qr=structure(qr, class="qr"), df.residual=`-`(n, `$`(z, rank)))>);
    goto L95(r283);
  D170():
    deopt 618 [save_f];
  D178():
    deopt 652 [r269, z68];
  D182():
    deopt 677 [z75, r281];
  D183():
    deopt 682 [z79];
  L77(dx74):
    st `save.r` = dx74;
    y55 = ld y0;
    check L465() else D153();
  L82(dx94):
    st `save.r` = dx94;
    y57 = ld y0;
    check L495() else D162();
  L460():
    dx67 = getTryDispatchBuiltinValue(dr66);
    goto L457(dx67);
  L461():
    dr68 = tryDispatchBuiltin.0("[<-", l50, dx68);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L463() else L462(dx68, dr68);
  L462(dx70, l52):
    ok16 = ld ok;
    check L464() else D152();
  L490():
    dx87 = getTryDispatchBuiltinValue(dr78);
    goto L487(dx87);
  L491():
    dr80 = tryDispatchBuiltin.0("[<-", l62, dx88);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L493() else L492(dx88, dr80);
  L492(dx90, l64):
    ok20 = ld ok;
    check L494() else D161();
  L519():
    dx107 = getTryDispatchBuiltinValue(dr90);
    goto L516(dx107);
  L520():
    save_f1 = force? save_f;
    checkMissing(save_f1);
    l77 = ld z;
    c93 = `is.object`(l77);
    if c93 then L522() else L523(save_f1, l77);
  L556():
    dx119 = getTryDispatchBuiltinValue(dr102);
    goto L91(dx119);
  L557():
    z69 = force? z68;
    checkMissing(z69);
    c102 = `is.object`(z69);
    if c102 then L559() else L560(r269, z69);
  L562(dx130, l92, dx131, dx132):
    colnames__ = ldf `colnames<-`;
    check L566() else D179();
  L563():
    dr106 = tryDispatchBuiltin.1("$", l86);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L565() else L564(dx120, l86, dx120, dr106);
  L564(dx125, l89, dx126, l90):
    r276 = `$`(l90, <sym qr>);
    goto L562(dx125, l89, dx126, r276);
  L579():
    goto L94(z75, r281);
  L582():
    z80 = force? z79;
    checkMissing(z80);
    c107 = `is.object`(z80);
    if c107 then L583() else L584(z80);
  D152():
    deopt 545 [dx70, l52, dx68, ok16];
  D153():
    deopt 551 [y55];
  D161():
    deopt 585 [dx90, l64, dx88, ok20];
  D162():
    deopt 589 [y57];
  D179():
    deopt 660 [dx130, l92, dx132, dx131];
  L96(dx143):
    sym26 = ldf list;
    base26 = ldf list in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L589() else L590();
  L463():
    dx72 = getTryDispatchBuiltinValue(dr68);
    goto L77(dx72);
  L464():
    ok17 = force? ok16;
    ___6 = ldf `[<-` in base;
    r230 = dyn ___6(l50, ok17, <missing>, dx68);
    goto L77(r230);
  L465():
    y56 = force? y55;
    checkMissing(y56);
    f0 = ld f0;
    check L466() else D154();
  L493():
    dx92 = getTryDispatchBuiltinValue(dr80);
    goto L82(dx92);
  L494():
    ok21 = force? ok20;
    ___10 = ldf `[<-` in base;
    r241 = dyn ___10(l64, dx88, ok21);
    goto L82(r241);
  L495():
    y58 = force? y57;
    checkMissing(y58);
    f9 = ld f0;
    check L496() else D163();
  L521(dx110):
    st z = dx110;
    save_w = ld `save.w`;
    check L525() else D171();
  L522():
    dr92 = tryDispatchBuiltin.0("$<-", l77, save_f1);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L524() else L523(save_f1, dr92);
  L523(save_f3, l79):
    r252 = `$<-`(l79, <sym fitted.values>, save_f1);
    goto L521(r252);
  L558(r273, dx122):
    __9 = ldf `[` in base;
    r275 = dyn __9(r273, dx122);
    goto L91(r275);
  L559():
    dr104 = tryDispatchBuiltin.1("$", z69);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L561() else L560(r269, dr104);
  L560(r271, z71):
    r274 = `$`(z71, <sym pivot>);
    goto L558(r271, r274);
  L565():
    dx129 = getTryDispatchBuiltinValue(dr106);
    goto L562(dx120, l86, dx120, dx129);
  L566():
    r277 = dyn colnames__(dx132, NULL, dx131);
    check L567() else D180();
  L583():
    dr112 = tryDispatchBuiltin.1("[", z80);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L585() else L584(dr112);
  L584(z82):
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L586() else L587();
  D154():
    deopt 552 [y56, f0];
  D163():
    deopt 590 [y58, f9];
  D171():
    deopt 623 [save_w];
  D180():
    deopt 662 [dx130, l92, r277];
  L97(z85, r286):
    __11 = ldf `[` in base;
    r288 = dyn __11(z85, r286);
    goto L96(r288);
  L98(r290):
    c110 = ldf c in base;
    r296 = dyn c110(dx143, r290);
    check L601() else D191();
  L466():
    f1 = force? f0;
    checkMissing(f1);
    r231 = `-`(y56, f1);
    l53 = ld `save.r`;
    c82 = `is.object`(l53);
    if c82 then L467() else L468(r231, l53);
  L496():
    f10 = force? f9;
    checkMissing(f10);
    r242 = `-`(y58, f10);
    l65 = ld `save.r`;
    c88 = `is.object`(l65);
    if c88 then L497() else L498(r242, l65);
  L524():
    dx109 = getTryDispatchBuiltinValue(dr92);
    goto L521(dx109);
  L525():
    save_w1 = force? save_w;
    checkMissing(save_w1);
    l80 = ld z;
    c94 = `is.object`(l80);
    if c94 then L527() else L528(save_w1, l80);
  L561():
    dx121 = getTryDispatchBuiltinValue(dr104);
    goto L558(r269, dx121);
  L567():
    c104 = `is.object`(l92);
    if c104 then L569() else L570(dx130, l92);
  L585():
    dx142 = getTryDispatchBuiltinValue(dr112);
    goto L96(dx142);
  L586():
    c108 = ldf c in base;
    r287 = dyn c108("coefficients", "residuals", "fitted.values", "effects", "weights", "rank");
    check L588() else D184();
  L587():
    r285 = dyn base25("coefficients", "residuals", "fitted.values", "effects", "weights", "rank");
    goto L97(z82, r285);
  L589():
    x_asgn = ld `x.asgn`;
    check L591() else D185();
  L590():
    r289 = dyn base26[assign, qr, `df.residual`](<sym x.asgn>, <lang structure(qr, class="qr")>, <lang `-`(n, `$`(z, rank))>);
    goto L98(r289);
  D184():
    deopt 693 [z82, r287];
  D185():
    deopt 697 [x_asgn];
  D191():
    deopt 716 [r296];
  L78(dx76):
    st `save.r` = dx76;
    z48 = ld z;
    check L471() else D156();
  L83(dx96):
    st `save.r` = dx96;
    z56 = ld z;
    check L501() else D165();
  L467():
    dr70 = tryDispatchBuiltin.0("[<-", l53, r231);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L469() else L468(r231, dr70);
  L468(r233, l55):
    nok = ld nok;
    check L470() else D155();
  L497():
    dr82 = tryDispatchBuiltin.0("[<-", l65, r242);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L499() else L498(r242, dr82);
  L498(r244, l67):
    nok4 = ld nok;
    check L500() else D164();
  L526(save_w5, dx112):
    st z = dx112;
    goto L86();
  L527():
    dr94 = tryDispatchBuiltin.0("$<-", l80, save_w1);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L529() else L528(save_w1, dr94);
  L528(save_w3, l82):
    r253 = `$<-`(l82, <sym weights>, save_w1);
    goto L526(save_w3, r253);
  L568(dx137, dx138):
    st z = dx138;
    goto L92();
  L569():
    dr108 = tryDispatchBuiltin.0("$<-", l92, r277);
    dc54 = getTryDispatchBuiltinDispatched(dr108);
    if dc54 then L571() else L570(dx130, dr108);
  L570(dx134, l94):
    r278 = `$<-`(l94, <sym qr>, r277);
    goto L568(dx134, r278);
  L588():
    goto L97(z82, r287);
  L591():
    x_asgn1 = force? x_asgn;
    checkMissing(x_asgn1);
    structure = ldf structure;
    check L592() else D186();
  L601():
    goto L95(r296);
  D155():
    deopt 556 [r233, l55, r231, nok];
  D156():
    deopt 562 [z48];
  D164():
    deopt 594 [r244, l67, r242, nok4];
  D165():
    deopt 598 [z56];
  D186():
    deopt 701 [];
  L469():
    dx75 = getTryDispatchBuiltinValue(dr70);
    goto L78(dx75);
  L470():
    nok1 = force? nok;
    ___7 = ldf `[<-` in base;
    r236 = dyn ___7(l53, nok1, <missing>, r231);
    goto L78(r236);
  L471():
    z49 = force? z48;
    checkMissing(z49);
    c83 = `is.object`(z49);
    if c83 then L473() else L474(z49);
  L499():
    dx95 = getTryDispatchBuiltinValue(dr82);
    goto L83(dx95);
  L500():
    nok5 = force? nok4;
    ___11 = ldf `[<-` in base;
    r247 = dyn ___11(l67, r242, nok5);
    goto L83(r247);
  L501():
    z57 = force? z56;
    checkMissing(z57);
    c89 = `is.object`(z57);
    if c89 then L503() else L504(z57);
  L529():
    dx111 = getTryDispatchBuiltinValue(dr94);
    goto L526(save_w1, dx111);
  L571():
    dx136 = getTryDispatchBuiltinValue(dr108);
    goto L568(dx130, dx136);
  L592():
    p24 = prom<V +>{
      qr = ld qr;
      qr1 = force? qr;
      checkMissing(qr1);
      return qr1;
    };
    r292 = dyn structure[, class](p24, "qr");
    check L593() else D187();
  D187():
    deopt 705 [r292];
  L472(dx78):
    l56 = ld `save.f`;
    c84 = `is.object`(l56);
    if c84 then L476() else L477(dx78, l56);
  L473():
    dr72 = tryDispatchBuiltin.1("$", z49);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L475() else L474(dr72);
  L474(z51):
    r237 = `$`(z51, <sym fitted.values>);
    goto L472(r237);
  L502(dx98):
    l68 = ld `save.f`;
    c90 = `is.object`(l68);
    if c90 then L506() else L507(dx98, l68);
  L503():
    dr84 = tryDispatchBuiltin.1("$", z57);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L505() else L504(dr84);
  L504(z59):
    r248 = `$`(z59, <sym fitted.values>);
    goto L502(r248);
  L593():
    n14 = ld n;
    check L594() else D188();
  D188():
    deopt 707 [n14];
  L79(dx84):
    st `save.f` = dx84;
    f2 = ld f0;
    check L480() else D158();
  L84(dx104):
    st `save.f` = dx104;
    f11 = ld f0;
    check L510() else D167();
  L475():
    dx77 = getTryDispatchBuiltinValue(dr72);
    goto L472(dx77);
  L476():
    dr74 = tryDispatchBuiltin.0("[<-", l56, dx78);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L478() else L477(dx78, dr74);
  L477(dx80, l58):
    ok18 = ld ok;
    check L479() else D157();
  L505():
    dx97 = getTryDispatchBuiltinValue(dr84);
    goto L502(dx97);
  L506():
    dr86 = tryDispatchBuiltin.0("[<-", l68, dx98);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L508() else L507(dx98, dr86);
  L507(dx100, l70):
    ok22 = ld ok;
    check L509() else D166();
  L594():
    n15 = force? n14;
    checkMissing(n15);
    z86 = ld z;
    check L595() else D189();
  D157():
    deopt 566 [dx80, l58, dx78, ok18];
  D158():
    deopt 572 [f2];
  D166():
    deopt 602 [dx100, l70, dx98, ok22];
  D167():
    deopt 606 [f11];
  D189():
    deopt 708 [n15, z86];
  L478():
    dx82 = getTryDispatchBuiltinValue(dr74);
    goto L79(dx82);
  L479():
    ok19 = force? ok18;
    ___8 = ldf `[<-` in base;
    r238 = dyn ___8(l56, ok19, <missing>, dx78);
    goto L79(r238);
  L480():
    f3 = force? f2;
    checkMissing(f3);
    l59 = ld `save.f`;
    c85 = `is.object`(l59);
    if c85 then L481() else L482(f3, l59);
  L508():
    dx102 = getTryDispatchBuiltinValue(dr86);
    goto L84(dx102);
  L509():
    ok23 = force? ok22;
    ___12 = ldf `[<-` in base;
    r249 = dyn ___12(l70, dx98, ok23);
    goto L84(r249);
  L510():
    f12 = force? f11;
    checkMissing(f12);
    l71 = ld `save.f`;
    c91 = `is.object`(l71);
    if c91 then L511() else L512(f12, l71);
  L595():
    z87 = force? z86;
    checkMissing(z87);
    c109 = `is.object`(z87);
    if c109 then L597() else L598(n15, z87);
  L80(f7, dx86):
    st `save.f` = dx86;
    goto L81();
  L85(f16, dx106):
    st `save.f` = dx106;
    goto L81();
  L481():
    dr76 = tryDispatchBuiltin.0("[<-", l59, f3);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L483() else L482(f3, dr76);
  L482(f5, l61):
    nok2 = ld nok;
    check L484() else D159();
  L511():
    dr88 = tryDispatchBuiltin.0("[<-", l71, f12);
    dc44 = getTryDispatchBuiltinDispatched(dr88);
    if dc44 then L513() else L512(f12, dr88);
  L512(f14, l73):
    nok6 = ld nok;
    check L514() else D168();
  L596(n19, dx145):
    r294 = `-`(n19, dx145);
    list4 = ldf list in base;
    r295 = dyn list4(x_asgn1, r292, r294);
    check L600() else D190();
  L597():
    dr114 = tryDispatchBuiltin.1("$", z87);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L599() else L598(n15, dr114);
  L598(n17, z89):
    r293 = `$`(z89, <sym rank>);
    goto L596(n17, r293);
  D159():
    deopt 575 [f5, l61, f3, nok2];
  D168():
    deopt 609 [f14, l73, f12, nok6];
  D190():
    deopt 714 [r295];
  L483():
    dx85 = getTryDispatchBuiltinValue(dr76);
    goto L80(f3, dx85);
  L484():
    nok3 = force? nok2;
    ___9 = ldf `[<-` in base;
    r239 = dyn ___9(l59, nok3, <missing>, f3);
    goto L80(f5, r239);
  L513():
    dx105 = getTryDispatchBuiltinValue(dr88);
    goto L85(f12, dx105);
  L514():
    nok7 = force? nok6;
    ___13 = ldf `[<-` in base;
    r250 = dyn ___13(l73, f12, nok7);
    goto L85(f14, r250);
  L599():
    dx144 = getTryDispatchBuiltinValue(dr114);
    goto L596(n15, dx144);
  L600():
    goto L98(r295);
  }
}