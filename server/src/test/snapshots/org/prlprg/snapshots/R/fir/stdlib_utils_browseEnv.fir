fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg interactive:cls, reg r3:V, reg c:L, reg ordered:cls, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg expression:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg expression1:cls, reg r11:V, reg example:cls, reg factor:*, reg factor1:V, reg p1:p(V +), reg r13:V, reg example1:cls, reg table:*, reg table1:V, reg p2:p(V +), reg r15:V, reg example2:cls, reg ftable:*, reg ftable1:V, reg p3:p(V +), reg r17:V, reg example3:cls, reg lm:*, reg lm1:V, reg p4:p(V +), reg r19:V, reg example4:cls, reg str:*, reg str1:V, reg p5:p(V +), reg r21:V, reg browseEnv:cls, reg r22:V, reg approxfun:cls, reg p6:p(V +), reg p7:p(V +), reg r25:V, reg browseEnv1:cls, reg environment:cls, reg af12:*, reg af13:V, reg p8:p(V +), reg r27:V, reg p9:p(V +), reg r29:V |
    mkenv;
    r = clos inner2907136846;
    st browseEnv = r;
    sym = ldf interactive;
    base = ldf interactive in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r2):
    c = `as.logical`(r2);
    if c then L7() else L1();
  L4():
    interactive = ldf interactive in base;
    r3 = dyn interactive();
    check L6() else D0();
  L5():
    r1 = dyn base();
    goto L0(r1);
  D0():
    deopt 6 [r3];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L6():
    goto L0(r3);
  L7():
    ordered = ldf ordered;
    check L8() else D1();
  D1():
    deopt 8 [];
  L8():
    p = prom<V +>{
      return <int 4, 3, 2, 1>;
    };
    r5 = dyn ordered(p);
    check L9() else D2();
  D2():
    deopt 10 [r5];
  L9():
    st ofa = r5;
    sym1 = ldf expression;
    base1 = ldf expression in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L2(r7):
    st ex1 = r7;
    sym2 = ldf expression;
    base2 = ldf expression in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L10():
    expression = ldf expression in base;
    r8 = dyn expression(<lang `+`(1.0, `:`(0.0, 9.0))>);
    goto L2(r8);
  L11():
    r6 = dyn base1(<lang `+`(1.0, `:`(0.0, 9.0))>);
    goto L2(r6);
  L3(r10):
    st ex3 = r10;
    example = ldf example;
    check L14() else D3();
  L12():
    expression1 = ldf expression in base;
    r11 = dyn expression1(<sym u>, <sym v>, <lang `+`(1.0, `:`(0.0, 9.0))>);
    goto L3(r11);
  L13():
    r9 = dyn base2(<sym u>, <sym v>, <lang `+`(1.0, `:`(0.0, 9.0))>);
    goto L3(r9);
  D3():
    deopt 21 [];
  L14():
    p1 = prom<V +>{
      factor = ld factor;
      factor1 = force? factor;
      checkMissing(factor1);
      return factor1;
    };
    r13 = dyn example[, echo](p1, FALSE);
    check L15() else D4();
  D4():
    deopt 25 [r13];
  L15():
    example1 = ldf example;
    check L16() else D5();
  D5():
    deopt 27 [];
  L16():
    p2 = prom<V +>{
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      return table1;
    };
    r15 = dyn example1[, echo](p2, FALSE);
    check L17() else D6();
  D6():
    deopt 31 [r15];
  L17():
    example2 = ldf example;
    check L18() else D7();
  D7():
    deopt 33 [];
  L18():
    p3 = prom<V +>{
      ftable = ld ftable;
      ftable1 = force? ftable;
      checkMissing(ftable1);
      return ftable1;
    };
    r17 = dyn example2[, echo](p3, FALSE);
    check L19() else D8();
  D8():
    deopt 37 [r17];
  L19():
    example3 = ldf example;
    check L20() else D9();
  D9():
    deopt 39 [];
  L20():
    p4 = prom<V +>{
      lm = ld lm;
      lm1 = force? lm;
      checkMissing(lm1);
      return lm1;
    };
    r19 = dyn example3[, echo, ask](p4, FALSE, FALSE);
    check L21() else D10();
  D10():
    deopt 45 [r19];
  L21():
    example4 = ldf example;
    check L22() else D11();
  D11():
    deopt 47 [];
  L22():
    p5 = prom<V +>{
      str = ld str;
      str1 = force? str;
      checkMissing(str1);
      return str1;
    };
    r21 = dyn example4[, echo](p5, FALSE);
    check L23() else D12();
  D12():
    deopt 51 [r21];
  L23():
    browseEnv = ldf browseEnv;
    check L24() else D13();
  D13():
    deopt 53 [];
  L24():
    r22 = dyn browseEnv();
    check L25() else D14();
  D14():
    deopt 54 [r22];
  L25():
    approxfun = ldf approxfun;
    check L26() else D15();
  D15():
    deopt 56 [];
  L26():
    p6 = prom<V +>{
      return <int 1, 2>;
    };
    p7 = prom<V +>{
      return <int 1, 2>;
    };
    r25 = dyn approxfun[, , method](p6, p7, "const");
    check L27() else D16();
  D16():
    deopt 61 [r25];
  L27():
    st af12 = r25;
    browseEnv1 = ldf browseEnv;
    check L28() else D17();
  D17():
    deopt 64 [];
  L28():
    p9 = prom<V +>{
      environment = ldf environment;
      p8 = prom<V +>{
        af12 = ld af12;
        af13 = force? af12;
        checkMissing(af13);
        return af13;
      };
      r27 = dyn environment(p8);
      return r27;
    };
    r29 = dyn browseEnv1[envir](p9);
    check L29() else D18();
  D18():
    deopt 67 [r29];
  L29():
    popenv;
    return r29;
  }
}
fun inner2907136846(envir, pattern, excludepatt, html, expanded, properties, main, debugMe) {
  (reg envir:*, reg pattern:*, reg excludepatt:*, reg html:*, reg expanded:*, reg properties:*, reg main:*, reg debugMe:*) -+> V { var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p:p(V +), var pattern:*, var excludepatt:*, reg excludepatt_isMissing:L, reg excludepatt_orDefault:*, var html:*, reg html_isMissing:L, reg html_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg r2:V, reg p1:p(V +), var expanded:*, reg expanded_isMissing:L, reg expanded_orDefault:*, var properties:*, reg properties_isMissing:L, reg properties_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var debugMe:*, reg debugMe_isMissing:L, reg debugMe_orDefault:*, reg ls:cls, reg envir1:*, reg envir2:V, reg p2:p(V +), reg pattern1:*, reg pattern2:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg grep:cls, reg excludepatt1:*, reg excludepatt2:V, reg p4:p(V +), reg objlist:*, reg objlist1:V, reg p5:p(V +), reg r11:V, reg length:cls, reg r12:V, reg c1:L, reg objlist2:*, reg objlist3:V, reg c2:L, reg objlist5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg iX:*, reg iX1:V, reg r13:V, reg __:cls, reg r14:V, reg debugMe1:*, reg debugMe2:V, reg c3:L, reg cat:cls, reg r15:V, reg print:cls, reg envir3:*, reg envir4:V, reg p6:p(V +), reg r17:V, reg cat1:cls, reg r18:V, reg print1:cls, reg objlist6:*, reg objlist7:V, reg p7:p(V +), reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg objlist8:*, reg objlist9:V, reg length1:cls, reg r24:V, reg n:*, reg n1:V, reg r25:V, reg c4:L, reg cat2:cls, reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg invisible:cls, reg r29:V, reg r32:cls, reg n2:*, reg n3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg n4:*, reg n5:V, reg rep_int:cls, reg r35:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg n6:*, reg n7:V, reg rep_int1:cls, reg r38:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg n8:*, reg n9:V, reg rep_int2:cls, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg n10:*, reg n11:V, reg rep_int3:cls, reg r44:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg n12:*, reg n13:V, reg rep_int4:cls, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg n14:*, reg n15:V, reg rep_int5:cls, reg r50:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r51:V, reg r52:V, reg n16:*, reg n17:V, reg rep_int6:cls, reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg n18:*, reg n19:V, reg rep_int7:cls, reg r56:V, reg objlist10:*, reg objlist11:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg N:*, reg N1:V, reg r57:V, reg debugMe3:*, reg debugMe4:V, reg c6:L, reg cat3:cls, reg N2:*, reg N3:V, reg p8:p(V +), reg objNam:*, reg objNam1:V, reg p9:p(V +), reg r60:V, reg i7:I, reg get:cls, reg objNam2:*, reg objNam3:V, reg p10:p(V +), reg envir5:*, reg envir6:V, reg p11:p(V +), reg r64:V, reg str1:cls, reg obj:*, reg obj1:V, reg p12:p(V +), reg r66:V, reg debugMe5:*, reg debugMe6:V, reg c7:L, reg cat4:cls, reg sOb:*, reg sOb1:V, reg c8:L, reg sOb3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r67:V, reg p13:p(V +), reg sOb4:*, reg sOb5:V, reg c9:L, reg sOb7:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r69:V, reg p14:p(V +), reg r71:V, reg i10:I, reg N4:*, reg N5:V, reg l1:*, reg c10:L, reg i12:I, reg N7:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx9:V, reg i14:I, reg dx10:V, reg N10:*, reg N11:V, reg ___:cls, reg r73:V, reg objNam4:*, reg objNam5:V, reg l4:*, reg c11:L, reg i16:I, reg objNam7:V, reg l6:*, reg dr10:V, reg dc5:L, reg dx11:V, reg i18:I, reg dx12:V, reg N12:*, reg N13:V, reg ___1:cls, reg r74:V, reg sOb8:*, reg sOb9:V, reg c12:L, reg i20:I, reg sOb11:V, reg dr12:V, reg dc6:L, reg dx13:V, reg i22:I, reg dx14:V, reg r75:V, reg l7:*, reg c13:L, reg i24:I, reg dx16:V, reg l9:*, reg dr14:V, reg dc7:L, reg dx18:V, reg i26:I, reg dx20:V, reg N14:*, reg N15:V, reg ___2:cls, reg r76:V, reg sOb12:*, reg sOb13:V, reg c14:L, reg i28:I, reg sOb15:V, reg dr16:V, reg dc8:L, reg dx21:V, reg i30:I, reg dx22:V, reg r77:V, reg l10:*, reg c15:L, reg i32:I, reg dx24:V, reg l12:*, reg dr18:V, reg dc9:L, reg dx26:V, reg i34:I, reg dx28:V, reg N16:*, reg N17:V, reg ___3:cls, reg r78:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r79:V, reg i37:I, reg r80:V, reg obj2:*, reg obj3:V, reg is_recursive:cls, reg r81:V, reg c16:L, reg i39:I, reg c18:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r82:V, reg i42:I, reg c21:L, reg r83:V, reg obj4:*, reg obj5:V, reg is_function:cls, reg r84:V, reg r85:V, reg c22:L, reg c23:V, reg c25:L, reg i45:I, reg c27:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r86:V, reg i48:I, reg c30:L, reg r87:V, reg obj6:*, reg obj7:V, reg is_environment:cls, reg r88:V, reg r89:V, reg c31:L, reg c32:V, reg c34:L, reg i51:I, reg c36:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r90:V, reg i54:I, reg c39:L, reg r91:V, reg obj8:*, reg obj9:V, reg length2:cls, reg r92:V, reg c40:L, reg c41:V, reg c43:L, reg l13:*, reg c44:L, reg i59:I, reg r94:L, reg l15:*, reg dr20:V, reg dc10:L, reg dx29:V, reg i61:I, reg dx30:V, reg N18:*, reg N19:V, reg ___4:cls, reg r97:V, reg lg:*, reg lg1:V, reg l16:*, reg c45:L, reg i63:I, reg lg3:V, reg l18:*, reg dr22:V, reg dc11:L, reg dx31:V, reg i65:I, reg dx32:V, reg N20:*, reg N21:V, reg ___5:cls, reg r98:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r99:V, reg i68:I, reg r100:V, reg obj10:*, reg obj11:V, reg names:cls, reg r101:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r102:V, reg i71:I, reg r103:V, reg nm:*, reg nm1:V, reg c46:V, reg c47:L, reg paste0:cls, reg format:cls, reg lg6:*, reg lg7:V, reg r104:V, reg p15:p(V +), reg r106:V, reg p16:p(V +), reg r108:V, reg i74:I, reg lg8:*, reg lg9:V, reg r110:V, reg s1:V, reg l19:I, reg i75:I, reg i76:I, reg i77:I, reg i78:I, reg c48:L, reg x1:V, reg M:*, reg M1:V, reg r111:V, reg N22:*, reg N23:V, reg l20:*, reg c49:L, reg i85:I, reg i86:I, reg N25:V, reg l22:*, reg dr24:V, reg dc12:L, reg dx33:V, reg i89:I, reg i90:I, reg dx34:V, reg M2:*, reg M3:V, reg ___6:cls, reg r112:V, reg nm2:*, reg nm3:V, reg c50:L, reg i93:I, reg i94:I, reg nm5:V, reg dr26:V, reg dc13:L, reg dx35:V, reg i97:I, reg i98:I, reg dx36:V, reg i99:*, reg i100:V, reg __1:cls, reg r113:V, reg r114:V, reg c51:L, reg paste1:cls, reg i105:*, reg i106:V, reg p17:p(V +), reg r116:V, reg l23:*, reg c52:L, reg i109:I, reg i110:I, reg r118:V, reg l25:*, reg dr28:V, reg dc14:L, reg dx37:V, reg i113:I, reg i114:I, reg r120:V, reg dx38:V, reg i115:*, reg i116:V, reg ___7:cls, reg r121:V, reg i117:I, reg i118:I, reg str2:cls, reg obj12:*, reg obj13:V, reg c53:L, reg obj15:V, reg dr30:V, reg dc15:L, reg dx39:V, reg dx40:V, reg i119:*, reg i120:V, reg __2:cls, reg r123:V, reg p18:p(V +), reg r125:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r126:V, reg i125:I, reg i126:I, reg r127:V, reg IDS:*, reg IDS1:V, reg M4:*, reg M5:V, reg c54:cls, reg r128:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r129:V, reg i131:I, reg i132:I, reg r130:V, reg NAMES:*, reg NAMES1:V, reg nm6:*, reg nm7:V, reg c55:L, reg i135:I, reg i136:I, reg nm9:V, reg dr32:V, reg dc16:L, reg dx41:V, reg i139:I, reg i140:I, reg dx42:V, reg i141:*, reg i142:V, reg __3:cls, reg r131:V, reg c56:cls, reg r132:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r133:V, reg i147:I, reg i148:I, reg r134:V, reg TYPES:*, reg TYPES1:V, reg s_l:*, reg s_l1:V, reg c57:L, reg i151:I, reg i152:I, reg s_l3:V, reg dr34:V, reg dc17:L, reg dx43:V, reg i155:I, reg i156:I, reg dx44:V, reg r135:V, reg c58:cls, reg r136:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r137:V, reg i161:I, reg i162:I, reg r138:V, reg DIMS:*, reg DIMS1:V, reg s_l4:*, reg s_l5:V, reg c59:L, reg i165:I, reg i166:I, reg s_l7:V, reg dr36:V, reg dc18:L, reg dx45:V, reg i169:I, reg i170:I, reg dx46:V, reg r139:V, reg c60:cls, reg r140:V, reg i171:I, reg sym21:cls, reg base21:cls, reg guard21:L, reg r141:V, reg i175:I, reg r142:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r143:V, reg i178:I, reg r144:V, reg obj16:*, reg obj17:V, reg class:cls, reg r145:V, reg c61:V, reg r146:V, reg c62:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r147:V, reg i183:I, reg r148:V, reg obj18:*, reg obj19:V, reg inherits:cls, reg r149:V, reg c63:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r150:V, reg i188:I, reg r151:V, reg obj20:*, reg obj21:V, reg attr:cls, reg r152:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r153:V, reg i191:I, reg r154:V, reg obj_nms:*, reg obj_nms1:V, reg length3:cls, reg r155:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r156:V, reg i194:I, reg r157:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r158:V, reg i197:I, reg r159:V, reg obj_nms2:*, reg obj_nms3:V, reg names1:cls, reg r160:V, reg length4:cls, reg r161:V, reg r162:V, reg c64:L, reg sym28:cls, reg base28:cls, reg guard28:L, reg r163:V, reg i202:I, reg r164:V, reg obj_nms4:*, reg obj_nms5:V, reg names2:cls, reg r165:V, reg i203:I, reg sym29:cls, reg base29:cls, reg guard29:L, reg r167:V, reg i206:I, reg r168:V, reg lg10:*, reg lg11:V, reg rep_int8:cls, reg r169:V, reg l26:*, reg c65:L, reg i208:I, reg r171:L, reg l28:*, reg dr38:V, reg dc19:L, reg dx47:V, reg i210:I, reg dx48:V, reg N28:*, reg N29:V, reg ___8:cls, reg r174:V, reg lg12:*, reg lg13:V, reg l29:*, reg c66:L, reg i212:I, reg lg15:V, reg l31:*, reg dr40:V, reg dc20:L, reg dx49:V, reg i214:I, reg dx50:V, reg N30:*, reg N31:V, reg ___9:cls, reg r175:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r176:V, reg i217:I, reg r177:V, reg lg18:*, reg lg19:V, reg r178:I, reg s2:V, reg l32:I, reg i218:I, reg i219:I, reg i220:I, reg i221:I, reg c67:L, reg x2:V, reg M6:*, reg M7:V, reg r179:V, reg N32:*, reg N33:V, reg l33:*, reg c68:L, reg i228:I, reg i229:I, reg N35:V, reg l35:*, reg dr42:V, reg dc21:L, reg dx51:V, reg i232:I, reg i233:I, reg dx52:V, reg M8:*, reg M9:V, reg ___10:cls, reg r180:V, reg nm10:*, reg nm11:V, reg c69:L, reg i236:I, reg i237:I, reg nm13:V, reg dr44:V, reg dc22:L, reg dx53:V, reg i240:I, reg i241:I, reg dx54:V, reg i242:*, reg i243:V, reg __4:cls, reg r181:V, reg r182:V, reg c70:L, reg paste2:cls, reg i248:*, reg i249:V, reg p19:p(V +), reg r184:V, reg l36:*, reg c71:L, reg i252:I, reg i253:I, reg r186:V, reg l38:*, reg dr46:V, reg dc23:L, reg dx55:V, reg i256:I, reg i257:I, reg r188:V, reg dx56:V, reg i258:*, reg i259:V, reg ___11:cls, reg r189:V, reg i260:I, reg i261:I, reg mode:cls, reg obj_nms6:*, reg obj_nms7:V, reg c72:L, reg obj_nms9:V, reg dr48:V, reg dc24:L, reg dx57:V, reg dx58:V, reg i262:*, reg i263:V, reg __5:cls, reg r191:V, reg p20:p(V +), reg r193:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r194:V, reg i268:I, reg i269:I, reg r195:V, reg obj_nms10:*, reg obj_nms11:V, reg c73:L, reg i272:I, reg i273:I, reg obj_nms13:V, reg dr50:V, reg dc25:L, reg dx59:V, reg i276:I, reg i277:I, reg dx60:V, reg i278:*, reg i279:V, reg __6:cls, reg r196:V, reg dim:cls, reg r197:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r198:V, reg i284:I, reg i285:I, reg r199:V, reg objdim_l:*, reg objdim_l1:V, reg length5:cls, reg r200:V, reg r201:V, reg c74:L, reg paste3:cls, reg sym33:cls, reg base33:cls, reg guard33:L, reg r202:V, reg r203:V, reg obj_nms14:*, reg obj_nms15:V, reg c75:L, reg obj_nms17:V, reg dr52:V, reg dc26:L, reg dx61:V, reg dx62:V, reg i290:*, reg i291:V, reg __7:cls, reg r204:V, reg length6:cls, reg r205:V, reg p21:p(V +), reg r207:V, reg i292:I, reg i293:I, reg sym34:cls, reg base34:cls, reg guard34:L, reg r209:V, reg i298:I, reg i299:I, reg r210:V, reg objdim_l2:*, reg objdim_l3:V, reg r211:I, reg s3:V, reg l39:I, reg i300:I, reg i301:I, reg i302:I, reg i303:I, reg i304:I, reg c76:L, reg x3:V, reg paste4:cls, reg dim_field_l:*, reg dim_field_l1:V, reg p22:p(V +), reg objdim_l4:*, reg objdim_l5:V, reg c77:L, reg objdim_l7:V, reg dr54:V, reg dc27:L, reg dx63:V, reg dx64:V, reg i311:*, reg i312:V, reg __8:cls, reg r213:V, reg p23:p(V +), reg r215:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r216:V, reg i317:I, reg i318:I, reg r217:V, reg IDS2:*, reg IDS3:V, reg M10:*, reg M11:V, reg c78:cls, reg r218:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r219:V, reg i323:I, reg i324:I, reg r220:V, reg NAMES2:*, reg NAMES3:V, reg nm14:*, reg nm15:V, reg c79:L, reg i327:I, reg i328:I, reg nm17:V, reg dr56:V, reg dc28:L, reg dx65:V, reg i331:I, reg i332:I, reg dx66:V, reg i333:*, reg i334:V, reg __9:cls, reg r221:V, reg c80:cls, reg r222:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r223:V, reg i339:I, reg i340:I, reg r224:V, reg TYPES2:*, reg TYPES3:V, reg md_l:*, reg md_l1:V, reg c81:cls, reg r225:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r226:V, reg i345:I, reg i346:I, reg r227:V, reg DIMS2:*, reg DIMS3:V, reg dim_field_l2:*, reg dim_field_l3:V, reg c82:cls, reg r228:V, reg i347:I, reg i348:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r229:V, reg i351:I, reg r230:V, reg obj22:*, reg obj23:V, reg inherits1:cls, reg r231:V, reg c83:L, reg sym40:cls, reg base40:cls, reg guard40:L, reg r232:V, reg i356:I, reg r233:V, reg obj24:*, reg obj25:V, reg dimnames:cls, reg r234:V, reg c84:L, reg i358:I, reg r236:V, reg dr58:V, reg dc29:L, reg dx67:V, reg i360:I, reg dx68:V, reg __10:cls, reg r237:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r238:V, reg i363:I, reg r239:V, reg nm18:*, reg nm19:V, reg length7:cls, reg r240:V, reg l40:*, reg c85:L, reg i365:I, reg r242:L, reg l42:*, reg dr60:V, reg dc30:L, reg dx69:V, reg i367:I, reg dx70:V, reg N38:*, reg N39:V, reg ___12:cls, reg r245:V, reg lg20:*, reg lg21:V, reg l43:*, reg c86:L, reg i369:I, reg lg23:V, reg l45:*, reg dr62:V, reg dc31:L, reg dx71:V, reg i371:I, reg dx72:V, reg N40:*, reg N41:V, reg ___13:cls, reg r246:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r247:V, reg i374:I, reg r248:V, reg lg26:*, reg lg27:V, reg r249:I, reg s4:V, reg l46:I, reg i375:I, reg i376:I, reg i377:I, reg i378:I, reg c87:L, reg x4:V, reg M12:*, reg M13:V, reg r250:V, reg N42:*, reg N43:V, reg l47:*, reg c88:L, reg i385:I, reg i386:I, reg N45:V, reg l49:*, reg dr64:V, reg dc32:L, reg dx73:V, reg i389:I, reg i390:I, reg dx74:V, reg M14:*, reg M15:V, reg ___14:cls, reg r251:V, reg mode1:cls, reg obj26:*, reg obj27:V, reg c89:L, reg obj29:V, reg dr66:V, reg dc33:L, reg dx75:V, reg dx76:V, reg i391:*, reg i392:V, reg __11:cls, reg r252:V, reg p24:p(V +), reg r254:V, reg paste5:cls, reg sym43:cls, reg base43:cls, reg guard43:L, reg r255:V, reg r256:V, reg obj30:*, reg obj31:V, reg dim1:cls, reg r257:V, reg c90:L, reg r259:V, reg dr68:V, reg dc34:L, reg dx77:V, reg dx78:V, reg __12:cls, reg r260:V, reg p25:p(V +), reg r262:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r263:V, reg i397:I, reg i398:I, reg r264:V, reg IDS4:*, reg IDS5:V, reg M16:*, reg M17:V, reg c91:cls, reg r265:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r266:V, reg i403:I, reg i404:I, reg r267:V, reg NAMES4:*, reg NAMES5:V, reg nm20:*, reg nm21:V, reg c92:L, reg i407:I, reg i408:I, reg nm23:V, reg dr70:V, reg dc35:L, reg dx79:V, reg i411:I, reg i412:I, reg dx80:V, reg i413:*, reg i414:V, reg __13:cls, reg r268:V, reg c93:cls, reg r269:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r270:V, reg i419:I, reg i420:I, reg r271:V, reg TYPES4:*, reg TYPES5:V, reg md_l2:*, reg md_l3:V, reg c94:cls, reg r272:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r273:V, reg i425:I, reg i426:I, reg r274:V, reg DIMS4:*, reg DIMS5:V, reg dim_field_l4:*, reg dim_field_l5:V, reg c95:cls, reg r275:V, reg debugMe7:*, reg debugMe8:V, reg c96:L, reg cat5:cls, reg r276:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r278:V, reg r279:V, reg Container:*, reg Container1:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r280:V, reg r281:V, reg M18:*, reg M19:V, reg N48:*, reg N49:V, reg r282:V, reg rep_int9:cls, reg r283:V, reg c97:cls, reg r284:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r285:V, reg r286:V, reg IsRoot:*, reg IsRoot1:V, reg sym51:cls, reg base51:cls, reg guard51:L, reg r287:V, reg r288:V, reg M20:*, reg M21:V, reg N50:*, reg N51:V, reg r289:V, reg rep_int10:cls, reg r290:V, reg c98:cls, reg r291:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r292:V, reg r293:V, reg ItemsPerContainer:*, reg ItemsPerContainer1:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r294:V, reg r295:V, reg M22:*, reg M23:V, reg N52:*, reg N53:V, reg r296:V, reg rep_int11:cls, reg r297:V, reg c99:cls, reg r298:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r299:V, reg r300:V, reg main1:*, reg main2:V, reg c100:V, reg c101:L, reg paste6:cls, reg deparse1:cls, reg sym55:cls, reg base55:cls, reg guard55:L, reg r301:V, reg r302:V, reg substitute:cls, reg r303:V, reg p26:p(V +), reg r305:V, reg p27:p(V +), reg r307:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r309:V, reg r310:V, reg properties1:*, reg properties2:V, reg c102:V, reg c103:L, reg as_list:cls, reg sym57:cls, reg base57:cls, reg guard57:L, reg r311:V, reg r312:V, reg format1:cls, reg Sys_time:cls, reg r313:V, reg p28:p(V +), reg r315:V, reg r316:cls, reg r317:cls, reg r318:V, reg c104:cls, reg r319:V, reg p29:p(V +), reg r321:V, reg html1:*, reg html2:V, reg c105:L, reg wsbrowser:cls, reg IDS6:*, reg IDS7:V, reg p30:p(V +), reg IsRoot2:*, reg IsRoot3:V, reg p31:p(V +), reg Container2:*, reg Container3:V, reg p32:p(V +), reg ItemsPerContainer2:*, reg ItemsPerContainer3:V, reg p33:p(V +), reg ParentID:*, reg ParentID1:V, reg p34:p(V +), reg NAMES6:*, reg NAMES7:V, reg p35:p(V +), reg TYPES6:*, reg TYPES7:V, reg p36:p(V +), reg DIMS6:*, reg DIMS7:V, reg p37:p(V +), reg main3:*, reg main4:V, reg p38:p(V +), reg properties3:*, reg properties4:V, reg p39:p(V +), reg expanded1:*, reg expanded2:V, reg p40:p(V +), reg r334:V, reg _Platform4:*, reg _Platform5:V, reg c106:L, reg _Platform7:V, reg dr72:V, reg dc36:L, reg dx81:V, reg dx82:V, reg r335:V, reg r336:V, reg c107:L, reg get1:cls, reg sym58:cls, reg base58:cls, reg guard58:L, reg r337:V, reg r338:V, reg as_environment:cls, reg r339:V, reg p41:p(V +), reg r341:V, reg awsbrowser:cls, reg sym59:cls, reg base59:cls, reg guard59:L, reg r342:V, reg r343:V, reg IDS8:*, reg IDS9:V, reg as_integer:cls, reg r344:V, reg p42:p(V +), reg IsRoot4:*, reg IsRoot5:V, reg p43:p(V +), reg Container4:*, reg Container5:V, reg p44:p(V +), reg sym60:cls, reg base60:cls, reg guard60:L, reg r348:V, reg r349:V, reg ItemsPerContainer4:*, reg ItemsPerContainer5:V, reg as_integer1:cls, reg r350:V, reg p45:p(V +), reg sym61:cls, reg base61:cls, reg guard61:L, reg r352:V, reg r353:V, reg ParentID2:*, reg ParentID3:V, reg as_integer2:cls, reg r354:V, reg p46:p(V +), reg NAMES8:*, reg NAMES9:V, reg p47:p(V +), reg TYPES8:*, reg TYPES9:V, reg p48:p(V +), reg DIMS8:*, reg DIMS9:V, reg p49:p(V +), reg r359:V, reg stop:cls, reg r360:V |
    mkenv;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    st pattern = pattern;
    excludepatt_isMissing = missing.0(excludepatt);
    if excludepatt_isMissing then L2("^last\\.warning") else L2(excludepatt);
  L2(excludepatt_orDefault):
    st excludepatt = excludepatt_orDefault;
    html_isMissing = missing.0(html);
    if html_isMissing then L3() else L4(html);
  L3():
    p1 = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c = `is.object`(_Platform1);
      if c then L1() else L2(_Platform1);
    L0(dx1):
      r2 = `!=`(dx1, "AQUA");
      return r2;
    L1():
      dr = tryDispatchBuiltin.1("$", _Platform1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Platform3):
      r1 = `$`(_Platform3, <sym GUI>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L4(p1);
  L4(html_orDefault):
    st html = html_orDefault;
    expanded_isMissing = missing.0(expanded);
    if expanded_isMissing then L5(TRUE) else L5(expanded);
  L5(expanded_orDefault):
    st expanded = expanded_orDefault;
    properties_isMissing = missing.0(properties);
    if properties_isMissing then L6(NULL) else L6(properties);
  L6(properties_orDefault):
    st properties = properties_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L7(NULL) else L7(main);
  L7(main_orDefault):
    st main = main_orDefault;
    debugMe_isMissing = missing.0(debugMe);
    if debugMe_isMissing then L8(FALSE) else L8(debugMe);
  L8(debugMe_orDefault):
    st debugMe = debugMe_orDefault;
    ls = ldf ls;
    check L133() else D0();
  D0():
    deopt 1 [];
  L133():
    p2 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    p3 = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    r6 = dyn ls[envir, pattern](p2, p3);
    check L134() else D1();
  D1():
    deopt 6 [r6];
  L134():
    st objlist = r6;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L135() else L136();
  L9(r8):
    c1 = `as.logical`(r8);
    if c1 then L140() else L10();
  L135():
    grep = ldf grep;
    check L137() else D2();
  L136():
    r7 = dyn base(<lang `<-`(iX, grep(excludepatt, objlist))>);
    goto L9(r7);
  D2():
    deopt 11 [];
  L10():
    goto L12();
  L12():
    debugMe1 = ld debugMe;
    check L147() else D7();
  L137():
    p4 = prom<V +>{
      excludepatt1 = ld excludepatt;
      excludepatt2 = force? excludepatt1;
      checkMissing(excludepatt2);
      return excludepatt2;
    };
    p5 = prom<V +>{
      objlist = ld objlist;
      objlist1 = force? objlist;
      checkMissing(objlist1);
      return objlist1;
    };
    r11 = dyn grep(p4, p5);
    check L138() else D3();
  L140():
    objlist2 = ld objlist;
    check L141() else D5();
  D3():
    deopt 14 [r11];
  D5():
    deopt 18 [objlist2];
  D7():
    deopt 27 [debugMe1];
  L138():
    st iX = r11;
    length = ldf length in base;
    r12 = dyn length(r11);
    check L139() else D4();
  L141():
    objlist3 = force? objlist2;
    checkMissing(objlist3);
    c2 = `is.object`(objlist3);
    if c2 then L142() else L143(objlist3);
  L147():
    debugMe2 = force? debugMe1;
    checkMissing(debugMe2);
    c3 = `as.logical`(debugMe2);
    if c3 then L148() else L13();
  D4():
    deopt 17 [r12];
  L11(dx3):
    st objlist = dx3;
    goto L12();
  L13():
    goto L14();
  L14():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L158() else L159();
  L139():
    goto L9(r12);
  L142():
    dr2 = tryDispatchBuiltin.1("[", objlist3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L144() else L143(dr2);
  L143(objlist5):
    iX = ld iX;
    check L145() else D6();
  L148():
    cat = ldf cat;
    check L149() else D8();
  D6():
    deopt 20 [objlist5, iX];
  D8():
    deopt 30 [];
  L15(r23):
    st n = r23;
    n = ld n;
    check L162() else D18();
  L144():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L145():
    iX1 = force? iX;
    checkMissing(iX1);
    r13 = `-`(<missing>, iX1);
    __ = ldf `[` in base;
    r14 = dyn __(objlist5, r13);
    goto L11(r14);
  L149():
    r15 = dyn cat("envir= ");
    check L150() else D9();
  L158():
    objlist8 = ld objlist;
    check L160() else D16();
  L159():
    r22 = dyn base1(<sym objlist>);
    goto L15(r22);
  D9():
    deopt 32 [r15];
  D16():
    deopt 49 [objlist8];
  D18():
    deopt 54 [n];
  L150():
    print = ldf print;
    check L151() else D10();
  L160():
    objlist9 = force? objlist8;
    checkMissing(objlist9);
    length1 = ldf length in base;
    r24 = dyn length1(objlist9);
    check L161() else D17();
  L162():
    n1 = force? n;
    checkMissing(n1);
    r25 = `==`(n1, 0);
    c4 = `as.logical`(r25);
    if c4 then L163() else L16();
  D10():
    deopt 34 [];
  D17():
    deopt 52 [r24];
  L16():
    r32 = clos inner1912617395;
    st str1 = r32;
    st N = 0;
    n2 = ld n;
    check L171() else D22();
  L151():
    p6 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    r17 = dyn print(p6);
    check L152() else D11();
  L161():
    goto L15(r24);
  L163():
    cat2 = ldf cat;
    check L164() else D19();
  D11():
    deopt 36 [r17];
  D19():
    deopt 59 [];
  D22():
    deopt 75 [n2];
  L152():
    cat1 = ldf cat;
    check L153() else D12();
  L164():
    r26 = dyn cat2("Empty environment, nothing to do!\n");
    check L165() else D20();
  L171():
    n3 = force? n2;
    checkMissing(n3);
    st M = n3;
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L172() else L173();
  D12():
    deopt 38 [];
  D20():
    deopt 61 [r26];
  L19(r34):
    st IDS = r34;
    sym4 = ldf `rep.int`;
    base4 = ldf `rep.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L176() else L177();
  L153():
    r18 = dyn cat1("objlist =\n");
    check L154() else D13();
  L165():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L166() else L167();
  L172():
    n4 = ld n;
    check L174() else D23();
  L173():
    r33 = dyn base3(NA_LGL, <sym n>);
    goto L19(r33);
  D13():
    deopt 40 [r18];
  D23():
    deopt 81 [n4];
  L17(r28):
    popenv;
    return r28;
  L20(r37):
    st NAMES = r37;
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L180() else L181();
  L154():
    print1 = ldf print;
    check L155() else D14();
  L166():
    invisible = ldf invisible in base;
    r29 = dyn invisible();
    check L168() else D21();
  L167():
    r27 = dyn base2();
    goto L17(r27);
  L174():
    n5 = force? n4;
    checkMissing(n5);
    rep_int = ldf `rep.int` in base;
    r35 = dyn rep_int(NA_LGL, n5);
    check L175() else D24();
  L176():
    n6 = ld n;
    check L178() else D25();
  L177():
    r36 = dyn base4(NA_LGL, <sym n>);
    goto L20(r36);
  D14():
    deopt 42 [];
  D21():
    deopt 65 [r29];
  D24():
    deopt 84 [r35];
  D25():
    deopt 89 [n6];
  L21(r40):
    st TYPES = r40;
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L184() else L185();
  L155():
    p7 = prom<V +>{
      objlist6 = ld objlist;
      objlist7 = force? objlist6;
      checkMissing(objlist7);
      return objlist7;
    };
    r20 = dyn print1(p7);
    check L156() else D15();
  L168():
    goto L17(r29);
  L175():
    goto L19(r35);
  L178():
    n7 = force? n6;
    checkMissing(n7);
    rep_int1 = ldf `rep.int` in base;
    r38 = dyn rep_int1(NA_LGL, n7);
    check L179() else D26();
  L180():
    n8 = ld n;
    check L182() else D27();
  L181():
    r39 = dyn base5(NA_LGL, <sym n>);
    goto L21(r39);
  D15():
    deopt 44 [r20];
  D26():
    deopt 92 [r38];
  D27():
    deopt 97 [n8];
  L22(r43):
    st DIMS = r43;
    sym7 = ldf `rep.int`;
    base7 = ldf `rep.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L188() else L189();
  L156():
    goto L14();
  L179():
    goto L20(r38);
  L182():
    n9 = force? n8;
    checkMissing(n9);
    rep_int2 = ldf `rep.int` in base;
    r41 = dyn rep_int2(NA_LGL, n9);
    check L183() else D28();
  L184():
    n10 = ld n;
    check L186() else D29();
  L185():
    r42 = dyn base6(NA_LGL, <sym n>);
    goto L22(r42);
  D28():
    deopt 100 [r41];
  D29():
    deopt 105 [n10];
  L23(r46):
    st IsRoot = r46;
    sym8 = ldf `rep.int`;
    base8 = ldf `rep.int` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L192() else L193();
  L183():
    goto L21(r41);
  L186():
    n11 = force? n10;
    checkMissing(n11);
    rep_int3 = ldf `rep.int` in base;
    r44 = dyn rep_int3(NA_LGL, n11);
    check L187() else D30();
  L188():
    n12 = ld n;
    check L190() else D31();
  L189():
    r45 = dyn base7(TRUE, <sym n>);
    goto L23(r45);
  D30():
    deopt 108 [r44];
  D31():
    deopt 113 [n12];
  L24(r49):
    st Container = r49;
    sym9 = ldf `rep.int`;
    base9 = ldf `rep.int` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L196() else L197();
  L187():
    goto L22(r44);
  L190():
    n13 = force? n12;
    checkMissing(n13);
    rep_int4 = ldf `rep.int` in base;
    r47 = dyn rep_int4(TRUE, n13);
    check L191() else D32();
  L192():
    n14 = ld n;
    check L194() else D33();
  L193():
    r48 = dyn base8(FALSE, <sym n>);
    goto L24(r48);
  D32():
    deopt 116 [r47];
  D33():
    deopt 121 [n14];
  L25(r52):
    st ItemsPerContainer = r52;
    sym10 = ldf `rep.int`;
    base10 = ldf `rep.int` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L200() else L201();
  L191():
    goto L23(r47);
  L194():
    n15 = force? n14;
    checkMissing(n15);
    rep_int5 = ldf `rep.int` in base;
    r50 = dyn rep_int5(FALSE, n15);
    check L195() else D34();
  L196():
    n16 = ld n;
    check L198() else D35();
  L197():
    r51 = dyn base9(0.0, <sym n>);
    goto L25(r51);
  D34():
    deopt 124 [r50];
  D35():
    deopt 129 [n16];
  L26(r55):
    st ParentID = r55;
    objlist10 = ld objlist;
    check L204() else D39();
  L195():
    goto L24(r50);
  L198():
    n17 = force? n16;
    checkMissing(n17);
    rep_int6 = ldf `rep.int` in base;
    r53 = dyn rep_int6(0.0, n17);
    check L199() else D36();
  L200():
    n18 = ld n;
    check L202() else D37();
  L201():
    r54 = dyn base10(<lang `-`(1.0)>, <sym n>);
    goto L26(r54);
  D36():
    deopt 132 [r53];
  D37():
    deopt 138 [n18];
  D39():
    deopt 143 [objlist10];
  L199():
    goto L25(r53);
  L202():
    n19 = force? n18;
    checkMissing(n19);
    rep_int7 = ldf `rep.int` in base;
    r56 = dyn rep_int7(-1.0, n19);
    check L203() else D38();
  L204():
    objlist11 = force? objlist10;
    checkMissing(objlist11);
    s = toForSeq(objlist11);
    l = length(s);
    i = 0;
    goto L27(i);
  D38():
    deopt 141 [r56];
  L27(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L205() else L116();
  L203():
    goto L26(r56);
  L116():
    x = `[[`(s, i2, NULL, TRUE);
    st objNam = x;
    N = ld N;
    check L206() else D40();
  L205():
    debugMe7 = ld debugMe;
    check L531() else D181();
  D40():
    deopt 145 [i2, N];
  D181():
    deopt 678 [debugMe7];
  L206():
    N1 = force? N;
    checkMissing(N1);
    r57 = `+`(N1, 1);
    st N = r57;
    debugMe3 = ld debugMe;
    check L207() else D41();
  L531():
    debugMe8 = force? debugMe7;
    checkMissing(debugMe8);
    c96 = `as.logical`(debugMe8);
    if c96 then L532() else L117();
  D41():
    deopt 150 [i2, debugMe3];
  L117():
    goto L118();
  L118():
    sym48 = ldf c;
    base48 = ldf c in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L536() else L537();
  L207():
    debugMe4 = force? debugMe3;
    checkMissing(debugMe4);
    c6 = `as.logical`(debugMe4);
    if c6 then L208() else L28();
  L532():
    cat5 = ldf cat;
    check L533() else D182();
  D182():
    deopt 681 [];
  L28():
    goto L29(i2);
  L29(i7):
    get = ldf get;
    check L212() else D44();
  L119(r279):
    st Container = r279;
    sym50 = ldf c;
    base50 = ldf c in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L545() else L546();
  L208():
    cat3 = ldf cat;
    check L209() else D42();
  L533():
    r276 = dyn cat5(" __end {for}\n ");
    check L534() else D183();
  L536():
    Container = ld Container;
    check L538() else D184();
  L537():
    r278 = dyn base48(<sym Container>, <lang rep.int(FALSE, `-`(M, N))>);
    goto L119(r278);
  D42():
    deopt 153 [i2];
  D44():
    deopt 162 [i7];
  D183():
    deopt 683 [r276];
  D184():
    deopt 688 [Container];
  L121(r286):
    st IsRoot = r286;
    sym52 = ldf c;
    base52 = ldf c in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L554() else L555();
  L209():
    p8 = prom<V +>{
      N2 = ld N;
      N3 = force? N2;
      checkMissing(N3);
      return N3;
    };
    p9 = prom<V +>{
      objNam = ld objNam;
      objNam1 = force? objNam;
      checkMissing(objNam1);
      return objNam1;
    };
    r60 = dyn cat3("  ", p8, ":", p9);
    check L210() else D43();
  L212():
    p10 = prom<V +>{
      objNam2 = ld objNam;
      objNam3 = force? objNam2;
      checkMissing(objNam3);
      return objNam3;
    };
    p11 = prom<V +>{
      envir5 = ld envir;
      envir6 = force? envir5;
      checkMissing(envir6);
      return envir6;
    };
    r64 = dyn get[, envir](p10, p11);
    check L213() else D45();
  L534():
    goto L118();
  L538():
    Container1 = force? Container;
    checkMissing(Container1);
    sym49 = ldf `rep.int`;
    base49 = ldf `rep.int` in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L539() else L540();
  L545():
    IsRoot = ld IsRoot;
    check L547() else D189();
  L546():
    r285 = dyn base50(<sym IsRoot>, <lang rep.int(FALSE, `-`(M, N))>);
    goto L121(r285);
  D43():
    deopt 158 [i2, r60];
  D45():
    deopt 166 [i7, r64];
  D189():
    deopt 704 [IsRoot];
  L120(r281):
    c97 = ldf c in base;
    r284 = dyn c97(Container1, r281);
    check L544() else D188();
  L123(r293):
    st ItemsPerContainer = r293;
    sym54 = ldf `is.null`;
    base54 = ldf `is.null` in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L563() else L564();
  L210():
    goto L29(i2);
  L213():
    st obj = r64;
    str1 = ldf str1;
    check L214() else D46();
  L539():
    M18 = ld M;
    check L541() else D185();
  L540():
    r280 = dyn base49(FALSE, <lang `-`(M, N)>);
    goto L120(r280);
  L547():
    IsRoot1 = force? IsRoot;
    checkMissing(IsRoot1);
    sym51 = ldf `rep.int`;
    base51 = ldf `rep.int` in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L548() else L549();
  L554():
    ItemsPerContainer = ld ItemsPerContainer;
    check L556() else D194();
  L555():
    r292 = dyn base52(<sym ItemsPerContainer>, <lang rep.int(0.0, `-`(M, N))>);
    goto L123(r292);
  D46():
    deopt 169 [i7];
  D185():
    deopt 693 [M18];
  D188():
    deopt 700 [r284];
  D194():
    deopt 720 [ItemsPerContainer];
  L122(r288):
    c98 = ldf c in base;
    r291 = dyn c98(IsRoot1, r288);
    check L553() else D193();
  L125(r300):
    c101 = `as.logical`(r300);
    if c101 then L566() else L126();
  L214():
    p12 = prom<V +>{
      obj = ld obj;
      obj1 = force? obj;
      checkMissing(obj1);
      return obj1;
    };
    r66 = dyn str1(p12);
    check L215() else D47();
  L541():
    M19 = force? M18;
    checkMissing(M19);
    N48 = ld N;
    check L542() else D186();
  L544():
    goto L119(r284);
  L548():
    M20 = ld M;
    check L550() else D190();
  L549():
    r287 = dyn base51(FALSE, <lang `-`(M, N)>);
    goto L122(r287);
  L556():
    ItemsPerContainer1 = force? ItemsPerContainer;
    checkMissing(ItemsPerContainer1);
    sym53 = ldf `rep.int`;
    base53 = ldf `rep.int` in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L557() else L558();
  L563():
    main1 = ld main;
    check L565() else D199();
  L564():
    r299 = dyn base54(<sym main>);
    goto L125(r299);
  D47():
    deopt 171 [i7, r66];
  D186():
    deopt 694 [M19, N48];
  D190():
    deopt 709 [M20];
  D193():
    deopt 716 [r291];
  D199():
    deopt 735 [main1];
  L124(r295):
    c99 = ldf c in base;
    r298 = dyn c99(ItemsPerContainer1, r295);
    check L562() else D198();
  L126():
    goto L127();
  L127():
    sym56 = ldf `is.null`;
    base56 = ldf `is.null` in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L570() else L571();
  L215():
    st sOb = r66;
    debugMe5 = ld debugMe;
    check L216() else D48();
  L542():
    N49 = force? N48;
    checkMissing(N49);
    r282 = `-`(M19, N49);
    rep_int9 = ldf `rep.int` in base;
    r283 = dyn rep_int9(FALSE, r282);
    check L543() else D187();
  L550():
    M21 = force? M20;
    checkMissing(M21);
    N50 = ld N;
    check L551() else D191();
  L553():
    goto L121(r291);
  L557():
    M22 = ld M;
    check L559() else D195();
  L558():
    r294 = dyn base53(0.0, <lang `-`(M, N)>);
    goto L124(r294);
  L565():
    main2 = force? main1;
    checkMissing(main2);
    c100 = `==`(main2, NULL);
    goto L125(c100);
  L566():
    paste6 = ldf paste;
    check L567() else D200();
  D48():
    deopt 173 [i7, debugMe5];
  D187():
    deopt 698 [r283];
  D191():
    deopt 710 [M21, N50];
  D195():
    deopt 725 [M22];
  D198():
    deopt 732 [r298];
  D200():
    deopt 739 [];
  L128(r310):
    c103 = `as.logical`(r310);
    if c103 then L573() else L129();
  L216():
    debugMe6 = force? debugMe5;
    checkMissing(debugMe6);
    c7 = `as.logical`(debugMe6);
    if c7 then L217() else L30();
  L543():
    goto L120(r283);
  L551():
    N51 = force? N50;
    checkMissing(N51);
    r289 = `-`(M21, N51);
    rep_int10 = ldf `rep.int` in base;
    r290 = dyn rep_int10(FALSE, r289);
    check L552() else D192();
  L559():
    M23 = force? M22;
    checkMissing(M23);
    N52 = ld N;
    check L560() else D196();
  L562():
    goto L123(r298);
  L567():
    p27 = prom<V +>{
      deparse1 = ldf deparse1;
      p26 = prom<V +>{
        sym55 = ldf substitute;
        base55 = ldf substitute in base;
        guard55 = `==`.4(sym55, base55);
        if guard55 then L1() else L2();
      L0(r302):
        return r302;
      L1():
        substitute = ldf substitute in base;
        r303 = dyn substitute(<sym envir>);
        goto L0(r303);
      L2():
        r301 = dyn base55(<sym envir>);
        goto L0(r301);
      };
      r305 = dyn deparse1(p26);
      return r305;
    };
    r307 = dyn paste6("R objects in", p27);
    check L568() else D201();
  L570():
    properties1 = ld properties;
    check L572() else D202();
  L571():
    r309 = dyn base56(<sym properties>);
    goto L128(r309);
  D192():
    deopt 714 [r290];
  D196():
    deopt 726 [M23, N52];
  D201():
    deopt 742 [r307];
  D202():
    deopt 747 [properties1];
  L30():
    goto L31(i7);
  L31(i10):
    N4 = ld N;
    check L221() else D51();
  L129():
    goto L130();
  L130():
    html1 = ld html;
    check L577() else D205();
  L217():
    cat4 = ldf cat;
    check L218() else D49();
  L552():
    goto L122(r290);
  L560():
    N53 = force? N52;
    checkMissing(N53);
    r296 = `-`(M23, N53);
    rep_int11 = ldf `rep.int` in base;
    r297 = dyn rep_int11(0.0, r296);
    check L561() else D197();
  L568():
    st main = r307;
    goto L127();
  L572():
    properties2 = force? properties1;
    checkMissing(properties2);
    c102 = `==`(properties2, NULL);
    goto L128(c102);
  L573():
    as_list = ldf `as.list`;
    check L574() else D203();
  D49():
    deopt 176 [i7];
  D51():
    deopt 185 [i10, N4];
  D197():
    deopt 730 [r297];
  D203():
    deopt 751 [];
  D205():
    deopt 757 [html1];
  L218():
    p13 = prom<V +>{
      sOb = ld sOb;
      sOb1 = force? sOb;
      checkMissing(sOb1);
      c8 = `is.object`(sOb1);
      if c8 then L1() else L2(sOb1);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("$", sOb1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(sOb3):
      r67 = `$`(sOb3, <sym type>);
      goto L0(r67);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    p14 = prom<V +>{
      sOb4 = ld sOb;
      sOb5 = force? sOb4;
      checkMissing(sOb5);
      c9 = `is.object`(sOb5);
      if c9 then L1() else L2(sOb5);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("$", sOb5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(sOb7):
      r69 = `$`(sOb7, <sym dim.field>);
      goto L0(r69);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    r71 = dyn cat4(", type=", p13, ",", p14, "\n");
    check L219() else D50();
  L221():
    N5 = force? N4;
    checkMissing(N5);
    l1 = ld IDS;
    c10 = `is.object`(l1);
    if c10 then L222() else L223(i10, N5, l1);
  L561():
    goto L124(r297);
  L574():
    p29 = prom<V +>{
      sym57 = ldf c;
      base57 = ldf c in base;
      guard57 = `==`.4(sym57, base57);
      if guard57 then L1() else L2();
    L0(r312):
      return r312;
    L1():
      format1 = ldf format;
      p28 = prom<V +>{
        Sys_time = ldf `Sys.time`;
        r313 = dyn Sys_time();
        return r313;
      };
      r315 = dyn format1(p28, "%Y-%b-%d %H:%M");
      r316 = clos inner2708337952;
      checkFun.0(r316);
      r317 = r316 as cls;
      r318 = dyn r317();
      c104 = ldf c in base;
      r319 = dyn c104(r315, r318);
      goto L0(r319);
    L2():
      r311 = dyn base57[date, ](<lang format(Sys.time(), "%Y-%b-%d %H:%M")>, <lang local({
          `<-`(si, Sys.info());
          `[`(si, c("user", "nodename", "sysname"))
        })>);
      goto L0(r311);
    };
    r321 = dyn as_list(p29);
    check L575() else D204();
  L577():
    html2 = force? html1;
    checkMissing(html2);
    c105 = `as.logical`(html2);
    if c105 then L578() else L131();
  D50():
    deopt 182 [i7, r71];
  D204():
    deopt 753 [r321];
  L32(i14, dx10):
    st IDS = dx10;
    objNam4 = ld objNam;
    check L226() else D53();
  L131():
    _Platform4 = ld `.Platform`;
    check L582() else D208();
  L219():
    goto L31(i7);
  L222():
    dr8 = tryDispatchBuiltin.0("[<-", l1, N5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L224() else L223(i10, N5, dr8);
  L223(i12, N7, l3):
    N10 = ld N;
    check L225() else D52();
  L575():
    st properties = r321;
    goto L130();
  L578():
    wsbrowser = ldf wsbrowser;
    check L579() else D206();
  D52():
    deopt 188 [i12, N7, l3, N5, N10];
  D53():
    deopt 192 [i14, objNam4];
  D206():
    deopt 760 [];
  D208():
    deopt 777 [_Platform4];
  L224():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L32(i10, dx9);
  L225():
    N11 = force? N10;
    ___ = ldf `[<-` in base;
    r73 = dyn ___(l3, N5, N11);
    goto L32(i12, r73);
  L226():
    objNam5 = force? objNam4;
    checkMissing(objNam5);
    l4 = ld NAMES;
    c11 = `is.object`(l4);
    if c11 then L227() else L228(i14, objNam5, l4);
  L579():
    p30 = prom<V +>{
      IDS6 = ld IDS;
      IDS7 = force? IDS6;
      checkMissing(IDS7);
      return IDS7;
    };
    p31 = prom<V +>{
      IsRoot2 = ld IsRoot;
      IsRoot3 = force? IsRoot2;
      checkMissing(IsRoot3);
      return IsRoot3;
    };
    p32 = prom<V +>{
      Container2 = ld Container;
      Container3 = force? Container2;
      checkMissing(Container3);
      return Container3;
    };
    p33 = prom<V +>{
      ItemsPerContainer2 = ld ItemsPerContainer;
      ItemsPerContainer3 = force? ItemsPerContainer2;
      checkMissing(ItemsPerContainer3);
      return ItemsPerContainer3;
    };
    p34 = prom<V +>{
      ParentID = ld ParentID;
      ParentID1 = force? ParentID;
      checkMissing(ParentID1);
      return ParentID1;
    };
    p35 = prom<V +>{
      NAMES6 = ld NAMES;
      NAMES7 = force? NAMES6;
      checkMissing(NAMES7);
      return NAMES7;
    };
    p36 = prom<V +>{
      TYPES6 = ld TYPES;
      TYPES7 = force? TYPES6;
      checkMissing(TYPES7);
      return TYPES7;
    };
    p37 = prom<V +>{
      DIMS6 = ld DIMS;
      DIMS7 = force? DIMS6;
      checkMissing(DIMS7);
      return DIMS7;
    };
    p38 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    p39 = prom<V +>{
      properties3 = ld properties;
      properties4 = force? properties3;
      checkMissing(properties4);
      return properties4;
    };
    p40 = prom<V +>{
      expanded1 = ld expanded;
      expanded2 = force? expanded1;
      checkMissing(expanded2);
      return expanded2;
    };
    r334 = dyn wsbrowser[, , , , , , , , kind, main, properties, ](p30, p31, p32, p33, p34, p35, p36, p37, "HTML", p38, p39, p40);
    check L580() else D207();
  L582():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c106 = `is.object`(_Platform5);
    if c106 then L584() else L585(_Platform5);
  D207():
    deopt 776 [r334];
  L33(i18, dx12):
    st NAMES = dx12;
    sOb8 = ld sOb;
    check L231() else D55();
  L227():
    dr10 = tryDispatchBuiltin.0("[<-", l4, objNam5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L229() else L228(i14, objNam5, dr10);
  L228(i16, objNam7, l6):
    N12 = ld N;
    check L230() else D54();
  L580():
    popenv;
    return r334;
  L583(dx82):
    r336 = `==`(dx82, "AQUA");
    c107 = `as.logical`(r336);
    if c107 then L587() else L132();
  L584():
    dr72 = tryDispatchBuiltin.1("$", _Platform5);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L586() else L585(dr72);
  L585(_Platform7):
    r335 = `$`(_Platform7, <sym GUI>);
    goto L583(r335);
  D54():
    deopt 195 [i16, objNam7, l6, objNam5, N12];
  D55():
    deopt 199 [i18, sOb8];
  L132():
    stop = ldf stop;
    check L593() else D213();
  L229():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L33(i14, dx11);
  L230():
    N13 = force? N12;
    ___1 = ldf `[<-` in base;
    r74 = dyn ___1(l6, objNam5, N13);
    goto L33(i16, r74);
  L231():
    sOb9 = force? sOb8;
    checkMissing(sOb9);
    c12 = `is.object`(sOb9);
    if c12 then L233() else L234(i18, sOb9);
  L586():
    dx81 = getTryDispatchBuiltinValue(dr72);
    goto L583(dx81);
  L587():
    get1 = ldf get;
    check L588() else D209();
  D209():
    deopt 783 [];
  D213():
    deopt 801 [];
  L232(i22, dx14):
    l7 = ld TYPES;
    c13 = `is.object`(l7);
    if c13 then L236() else L237(i22, dx14, l7);
  L233():
    dr12 = tryDispatchBuiltin.1("$", sOb9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L235() else L234(i18, dr12);
  L234(i20, sOb11):
    r75 = `$`(sOb11, <sym type>);
    goto L232(i20, r75);
  L588():
    p41 = prom<V +>{
      sym58 = ldf `as.environment`;
      base58 = ldf `as.environment` in base;
      guard58 = `==`.4(sym58, base58);
      if guard58 then L1() else L2();
    L0(r338):
      return r338;
    L1():
      as_environment = ldf `as.environment` in base;
      r339 = dyn as_environment("tools:RGUI");
      goto L0(r339);
    L2():
      r337 = dyn base58("tools:RGUI");
      goto L0(r337);
    };
    r341 = dyn get1[, envir]("wsbrowser", p41);
    check L589() else D210();
  L593():
    r360 = dyn stop("only 'html = TRUE' is supported on this platform");
    check L594() else D214();
  D210():
    deopt 787 [r341];
  D214():
    deopt 803 [r360];
  L34(i26, dx20):
    st TYPES = dx20;
    sOb12 = ld sOb;
    check L240() else D57();
  L235():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L232(i18, dx13);
  L236():
    dr14 = tryDispatchBuiltin.0("[<-", l7, dx14);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L238() else L237(i22, dx14, dr14);
  L237(i24, dx16, l9):
    N14 = ld N;
    check L239() else D56();
  L589():
    st awsbrowser = r341;
    awsbrowser = ldf awsbrowser;
    check L590() else D211();
  L594():
    popenv;
    return r360;
  D56():
    deopt 203 [i24, dx16, l9, dx14, N14];
  D57():
    deopt 207 [i26, sOb12];
  D211():
    deopt 790 [];
  L238():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L34(i22, dx18);
  L239():
    N15 = force? N14;
    ___2 = ldf `[<-` in base;
    r76 = dyn ___2(l9, dx14, N15);
    goto L34(i24, r76);
  L240():
    sOb13 = force? sOb12;
    checkMissing(sOb13);
    c14 = `is.object`(sOb13);
    if c14 then L242() else L243(i26, sOb13);
  L590():
    p42 = prom<V +>{
      sym59 = ldf `as.integer`;
      base59 = ldf `as.integer` in base;
      guard59 = `==`.4(sym59, base59);
      if guard59 then L1() else L2();
    L0(r343):
      return r343;
    L1():
      IDS8 = ld IDS;
      IDS9 = force? IDS8;
      checkMissing(IDS9);
      as_integer = ldf `as.integer` in base;
      r344 = dyn as_integer(IDS9);
      goto L0(r344);
    L2():
      r342 = dyn base59(<sym IDS>);
      goto L0(r342);
    };
    p43 = prom<V +>{
      IsRoot4 = ld IsRoot;
      IsRoot5 = force? IsRoot4;
      checkMissing(IsRoot5);
      return IsRoot5;
    };
    p44 = prom<V +>{
      Container4 = ld Container;
      Container5 = force? Container4;
      checkMissing(Container5);
      return Container5;
    };
    p45 = prom<V +>{
      sym60 = ldf `as.integer`;
      base60 = ldf `as.integer` in base;
      guard60 = `==`.4(sym60, base60);
      if guard60 then L1() else L2();
    L0(r349):
      return r349;
    L1():
      ItemsPerContainer4 = ld ItemsPerContainer;
      ItemsPerContainer5 = force? ItemsPerContainer4;
      checkMissing(ItemsPerContainer5);
      as_integer1 = ldf `as.integer` in base;
      r350 = dyn as_integer1(ItemsPerContainer5);
      goto L0(r350);
    L2():
      r348 = dyn base60(<sym ItemsPerContainer>);
      goto L0(r348);
    };
    p46 = prom<V +>{
      sym61 = ldf `as.integer`;
      base61 = ldf `as.integer` in base;
      guard61 = `==`.4(sym61, base61);
      if guard61 then L1() else L2();
    L0(r353):
      return r353;
    L1():
      ParentID2 = ld ParentID;
      ParentID3 = force? ParentID2;
      checkMissing(ParentID3);
      as_integer2 = ldf `as.integer` in base;
      r354 = dyn as_integer2(ParentID3);
      goto L0(r354);
    L2():
      r352 = dyn base61(<sym ParentID>);
      goto L0(r352);
    };
    p47 = prom<V +>{
      NAMES8 = ld NAMES;
      NAMES9 = force? NAMES8;
      checkMissing(NAMES9);
      return NAMES9;
    };
    p48 = prom<V +>{
      TYPES8 = ld TYPES;
      TYPES9 = force? TYPES8;
      checkMissing(TYPES9);
      return TYPES9;
    };
    p49 = prom<V +>{
      DIMS8 = ld DIMS;
      DIMS9 = force? DIMS8;
      checkMissing(DIMS9);
      return DIMS9;
    };
    r359 = dyn awsbrowser(p42, p43, p44, p45, p46, p47, p48, p49);
    check L591() else D212();
  D212():
    deopt 799 [r359];
  L241(i30, dx22):
    l10 = ld DIMS;
    c15 = `is.object`(l10);
    if c15 then L245() else L246(i30, dx22, l10);
  L242():
    dr16 = tryDispatchBuiltin.1("$", sOb13);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L244() else L243(i26, dr16);
  L243(i28, sOb15):
    r77 = `$`(sOb15, <sym dim.field>);
    goto L241(i28, r77);
  L591():
    popenv;
    return r359;
  L35(i34, dx28):
    st DIMS = dx28;
    sym11 = ldf `is.recursive`;
    base11 = ldf `is.recursive` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L249() else L250();
  L244():
    dx21 = getTryDispatchBuiltinValue(dr16);
    goto L241(i26, dx21);
  L245():
    dr18 = tryDispatchBuiltin.0("[<-", l10, dx22);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L247() else L246(i30, dx22, dr18);
  L246(i32, dx24, l12):
    N16 = ld N;
    check L248() else D58();
  D58():
    deopt 211 [i32, dx24, l12, dx22, N16];
  L36(i37, r80):
    c16 = `as.logical`(r80);
    if c16 then L253() else L37(i37, c16);
  L247():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L35(i30, dx26);
  L248():
    N17 = force? N16;
    ___3 = ldf `[<-` in base;
    r78 = dyn ___3(l12, dx22, N17);
    goto L35(i32, r78);
  L249():
    obj2 = ld obj;
    check L251() else D59();
  L250():
    r79 = dyn base11(<sym obj>);
    goto L36(i34, r79);
  D59():
    deopt 217 [i34, obj2];
  L37(i39, c18):
    c25 = `as.logical`(c18);
    if c25 then L259() else L39(i39, c25);
  L251():
    obj3 = force? obj2;
    checkMissing(obj3);
    is_recursive = ldf `is.recursive` in base;
    r81 = dyn is_recursive(obj3);
    check L252() else D60();
  L253():
    sym12 = ldf `is.function`;
    base12 = ldf `is.function` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L254() else L255();
  D60():
    deopt 220 [i34, r81];
  L38(i42, c21, r83):
    r85 = `!`(r83);
    c22 = `as.logical`(r85);
    c23 = `&&`(c21, c22);
    goto L37(i42, c23);
  L39(i45, c27):
    c34 = `as.logical`(c27);
    if c34 then L265() else L41(i45, c34);
  L252():
    goto L36(i34, r81);
  L254():
    obj4 = ld obj;
    check L256() else D61();
  L255():
    r82 = dyn base12(<sym obj>);
    goto L38(i37, c16, r82);
  L259():
    sym13 = ldf `is.environment`;
    base13 = ldf `is.environment` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L260() else L261();
  D61():
    deopt 223 [i37, c16, obj4];
  L40(i48, c30, r87):
    r89 = `!`(r87);
    c31 = `as.logical`(r89);
    c32 = `&&`(c30, c31);
    goto L39(i48, c32);
  L41(i51, c36):
    c43 = `as.logical`(c36);
    if c43 then L271() else L43();
  L256():
    obj5 = force? obj4;
    checkMissing(obj5);
    is_function = ldf `is.function` in base;
    r84 = dyn is_function(obj5);
    check L257() else D62();
  L260():
    obj6 = ld obj;
    check L262() else D63();
  L261():
    r86 = dyn base13(<sym obj>);
    goto L40(i39, c25, r86);
  L265():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L266() else L267();
  D62():
    deopt 226 [i37, c16, r84];
  D63():
    deopt 231 [i39, c25, obj6];
  L42(i54, c39, r91):
    st lg = r91;
    c40 = `as.logical`(r91);
    c41 = `&&`(c39, c40);
    goto L41(i54, c41);
  L43():
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L348() else L349();
  L62(i171):
    goto L27(i171);
  L257():
    goto L38(i37, c16, r84);
  L262():
    obj7 = force? obj6;
    checkMissing(obj7);
    is_environment = ldf `is.environment` in base;
    r88 = dyn is_environment(obj7);
    check L263() else D64();
  L266():
    obj8 = ld obj;
    check L268() else D65();
  L267():
    r90 = dyn base14(<sym obj>);
    goto L42(i45, c34, r90);
  L271():
    l13 = ld Container;
    c44 = `is.object`(l13);
    if c44 then L272() else L273(i51, TRUE, l13);
  D64():
    deopt 234 [i39, c25, r88];
  D65():
    deopt 239 [i45, c34, obj8];
  L44(i61, dx30):
    st Container = dx30;
    lg = ld lg;
    check L276() else D68();
  L63(i175, r142):
    r146 = `!`(r142);
    c62 = `as.logical`(r146);
    if c62 then L354() else L65();
  L263():
    goto L40(i39, c25, r88);
  L268():
    obj9 = force? obj8;
    checkMissing(obj9);
    length2 = ldf length in base;
    r92 = dyn length2(obj9);
    check L269() else D66();
  L272():
    dr20 = tryDispatchBuiltin.0("[<-", l13, TRUE);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L274() else L273(i51, TRUE, dr20);
  L273(i59, r94, l15):
    N18 = ld N;
    check L275() else D67();
  L348():
    sym22 = ldf class;
    base22 = ldf class in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L350() else L351();
  L349():
    r141 = dyn base21(<lang class(obj)>);
    goto L63(i51, r141);
  D66():
    deopt 242 [i45, c34, r92];
  D67():
    deopt 248 [i59, r94, l15, TRUE, N18];
  D68():
    deopt 252 [i61, lg];
  L64(i178, r144):
    c61 = `==`(r144, NULL);
    goto L63(i178, c61);
  L65():
    goto L62(i175);
  L269():
    goto L42(i45, c34, r92);
  L274():
    dx29 = getTryDispatchBuiltinValue(dr20);
    goto L44(i51, dx29);
  L275():
    N19 = force? N18;
    ___4 = ldf `[<-` in base;
    r97 = dyn ___4(l15, TRUE, N19);
    goto L44(i59, r97);
  L276():
    lg1 = force? lg;
    checkMissing(lg1);
    l16 = ld ItemsPerContainer;
    c45 = `is.object`(l16);
    if c45 then L277() else L278(i61, lg1, l16);
  L350():
    obj16 = ld obj;
    check L352() else D99();
  L351():
    r143 = dyn base22(<sym obj>);
    goto L64(i51, r143);
  L354():
    sym23 = ldf inherits;
    base23 = ldf inherits in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L355() else L356();
  D99():
    deopt 367 [i51, obj16];
  L45(i65, dx32):
    st ItemsPerContainer = dx32;
    sym15 = ldf names;
    base15 = ldf names in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L281() else L282();
  L66(i183, r148):
    c63 = `as.logical`(r148);
    if c63 then L359() else L67();
  L277():
    dr22 = tryDispatchBuiltin.0("[<-", l16, lg1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L279() else L278(i61, lg1, dr22);
  L278(i63, lg3, l18):
    N20 = ld N;
    check L280() else D69();
  L352():
    obj17 = force? obj16;
    checkMissing(obj17);
    class = ldf class in base;
    r145 = dyn class(obj17);
    check L353() else D100();
  L355():
    obj18 = ld obj;
    check L357() else D101();
  L356():
    r147 = dyn base23(<sym obj>, "table");
    goto L66(i175, r147);
  D69():
    deopt 255 [i63, lg3, l18, lg1, N20];
  D100():
    deopt 370 [i51, r145];
  D101():
    deopt 375 [i175, obj18];
  L46(i68, r100):
    st nm = r100;
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L285() else L286();
  L67():
    sym39 = ldf inherits;
    base39 = ldf inherits in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L466() else L467();
  L99(i347, i348):
    goto L62(i347);
  L279():
    dx31 = getTryDispatchBuiltinValue(dr22);
    goto L45(i61, dx31);
  L280():
    N21 = force? N20;
    ___5 = ldf `[<-` in base;
    r98 = dyn ___5(l18, lg1, N21);
    goto L45(i63, r98);
  L281():
    obj10 = ld obj;
    check L283() else D70();
  L282():
    r99 = dyn base15(<sym obj>);
    goto L46(i65, r99);
  L353():
    goto L64(i51, r145);
  L357():
    obj19 = force? obj18;
    checkMissing(obj19);
    inherits = ldf inherits in base;
    r149 = dyn inherits(obj19, "table", FALSE);
    check L358() else D102();
  L359():
    sym24 = ldf attr;
    base24 = ldf attr in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L360() else L361();
  D70():
    deopt 261 [i65, obj10];
  D102():
    deopt 380 [i175, r149];
  L47(i71, r103):
    c47 = `as.logical`(r103);
    if c47 then L288() else L48();
  L68(i188, r151):
    st `obj.nms` = r151;
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L364() else L365();
  L100(i351, r230):
    c83 = `as.logical`(r230);
    if c83 then L470() else L101();
  L283():
    obj11 = force? obj10;
    checkMissing(obj11);
    names = ldf names in base;
    r101 = dyn names(obj11);
    check L284() else D71();
  L285():
    nm = ld nm;
    check L287() else D72();
  L286():
    r102 = dyn base16(<sym nm>);
    goto L47(i68, r102);
  L358():
    goto L66(i175, r149);
  L360():
    obj20 = ld obj;
    check L362() else D103();
  L361():
    r150 = dyn base24(<sym obj>, "dimnames");
    goto L68(i183, r150);
  L466():
    obj22 = ld obj;
    check L468() else D151();
  L467():
    r229 = dyn base39(<sym obj>, "mts");
    goto L100(i183, r229);
  D71():
    deopt 264 [i65, r101];
  D72():
    deopt 267 [i68, nm];
  D103():
    deopt 383 [i183, obj20];
  D151():
    deopt 562 [i183, obj22];
  L48():
    goto L49(i71);
  L49(i74):
    lg8 = ld lg;
    check L292() else D75();
  L69(i191, r154):
    st lg = r154;
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L368() else L369();
  L101():
    goto L99(i351, NULL);
  L284():
    goto L46(i65, r101);
  L287():
    nm1 = force? nm;
    checkMissing(nm1);
    c46 = `==`(nm1, NULL);
    goto L47(i68, c46);
  L288():
    paste0 = ldf paste0;
    check L289() else D73();
  L362():
    obj21 = force? obj20;
    checkMissing(obj21);
    attr = ldf attr in base;
    r152 = dyn attr(obj21, "dimnames");
    check L363() else D104();
  L364():
    obj_nms = ld `obj.nms`;
    check L366() else D105();
  L365():
    r153 = dyn base25(<sym obj.nms>);
    goto L69(i188, r153);
  L468():
    obj23 = force? obj22;
    checkMissing(obj23);
    inherits1 = ldf inherits in base;
    r231 = dyn inherits1(obj23, "mts", FALSE);
    check L469() else D152();
  L470():
    sym40 = ldf dimnames;
    base40 = ldf dimnames in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L471() else L472();
  D73():
    deopt 271 [i71];
  D75():
    deopt 280 [i74, 1, lg8];
  D104():
    deopt 387 [i183, r152];
  D105():
    deopt 391 [i188, obj_nms];
  D152():
    deopt 567 [i183, r231];
  L70(i194, r157):
    r162 = `>`(r157, 0.0);
    c64 = `as.logical`(r162);
    if c64 then L375() else L72();
  L102(i356, r233):
    c84 = `is.object`(r233);
    if c84 then L475() else L476(i356, r233);
  L289():
    p16 = prom<V +>{
      format = ldf format;
      p15 = prom<V +>{
        lg6 = ld lg;
        lg7 = force? lg6;
        checkMissing(lg7);
        r104 = `:`(1, lg7);
        return r104;
      };
      r106 = dyn format(p15);
      return r106;
    };
    r108 = dyn paste0("[[", p16, "]]");
    check L290() else D74();
  L292():
    lg9 = force? lg8;
    checkMissing(lg9);
    r110 = `:`(1, lg9);
    s1 = toForSeq(r110);
    l19 = length(s1);
    i75 = 0;
    goto L50(i74, i75);
  L363():
    goto L68(i183, r152);
  L366():
    obj_nms1 = force? obj_nms;
    checkMissing(obj_nms1);
    length3 = ldf length in base;
    r155 = dyn length3(obj_nms1);
    check L367() else D106();
  L368():
    sym27 = ldf names;
    base27 = ldf names in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L370() else L371();
  L369():
    r156 = dyn base26(<lang names(obj.nms)>);
    goto L70(i191, r156);
  L469():
    goto L100(i183, r231);
  L471():
    obj24 = ld obj;
    check L473() else D153();
  L472():
    r232 = dyn base40(<sym obj>);
    goto L102(i351, r232);
  D74():
    deopt 275 [i71, r108];
  D106():
    deopt 394 [i188, r155];
  D153():
    deopt 570 [i351, obj24];
  L50(i76, i77):
    i78 = `+`.1(i77, 1);
    c48 = `<`.1(l19, i78);
    if c48 then L293() else L61();
  L71(i197, r159):
    length4 = ldf length in base;
    r161 = dyn length4(r159);
    check L374() else D109();
  L72():
    sym29 = ldf `rep.int`;
    base29 = ldf `rep.int` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L381() else L382();
  L74(i203):
    l26 = ld Container;
    c65 = `is.object`(l26);
    if c65 then L385() else L386(i203, TRUE, l26);
  L103(i360, dx68):
    st nm = dx68;
    sym41 = ldf length;
    base41 = ldf length in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L478() else L479();
  L290():
    st nm = r108;
    goto L49(i71);
  L367():
    goto L69(i188, r155);
  L370():
    obj_nms2 = ld `obj.nms`;
    check L372() else D107();
  L371():
    r158 = dyn base27(<sym obj.nms>);
    goto L71(i191, r158);
  L375():
    sym28 = ldf names;
    base28 = ldf names in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L376() else L377();
  L473():
    obj25 = force? obj24;
    checkMissing(obj25);
    dimnames = ldf dimnames in base;
    r234 = dyn dimnames(obj25);
    check L474() else D154();
  L475():
    dr58 = tryDispatchBuiltin.1("[[", r233);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L477() else L476(i356, dr58);
  L476(i358, r236):
    __10 = ldf `[[` in base;
    r237 = dyn __10(r236, 2);
    goto L103(i358, r237);
  D107():
    deopt 400 [i191, obj_nms2];
  D109():
    deopt 405 [i197, r161];
  D154():
    deopt 573 [i351, r234];
  L61():
    x1 = `[[`(s1, i78, NULL, TRUE);
    st i = x1;
    M = ld M;
    check L294() else D76();
  L73(i202, r164):
    st nm = r164;
    goto L74(i202);
  L75(i206, r168):
    st nm = r168;
    goto L74(i206);
  L76(i210, dx48):
    st Container = dx48;
    lg12 = ld lg;
    check L389() else D115();
  L104(i363, r239):
    st lg = r239;
    l40 = ld Container;
    c85 = `is.object`(l40);
    if c85 then L482() else L483(i363, TRUE, l40);
  L293():
    goto L62(i76);
  L372():
    obj_nms3 = force? obj_nms2;
    checkMissing(obj_nms3);
    names1 = ldf names in base;
    r160 = dyn names1(obj_nms3);
    check L373() else D108();
  L374():
    goto L70(i197, r161);
  L376():
    obj_nms4 = ld `obj.nms`;
    check L378() else D110();
  L377():
    r163 = dyn base28(<sym obj.nms>);
    goto L73(i194, r163);
  L381():
    lg10 = ld lg;
    check L383() else D112();
  L382():
    r167 = dyn base29("", <sym lg>);
    goto L75(i194, r167);
  L385():
    dr38 = tryDispatchBuiltin.0("[<-", l26, TRUE);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L387() else L386(i203, TRUE, dr38);
  L386(i208, r171, l28):
    N28 = ld N;
    check L388() else D114();
  L474():
    goto L102(i351, r234);
  L477():
    dx67 = getTryDispatchBuiltinValue(dr58);
    goto L103(i356, dx67);
  L478():
    nm18 = ld nm;
    check L480() else D155();
  L479():
    r238 = dyn base41(<sym nm>);
    goto L104(i360, r238);
  D76():
    deopt 283 [i76, i78, M];
  D108():
    deopt 403 [i191, r160];
  D110():
    deopt 410 [i194, obj_nms4];
  D112():
    deopt 418 [i194, lg10];
  D114():
    deopt 426 [i208, r171, l28, TRUE, N28];
  D115():
    deopt 430 [i210, lg12];
  D155():
    deopt 580 [i360, nm18];
  L105(i367, dx70):
    st Container = dx70;
    lg20 = ld lg;
    check L486() else D158();
  L294():
    M1 = force? M;
    checkMissing(M1);
    r111 = `+`(M1, 1.0);
    st M = r111;
    N22 = ld N;
    check L295() else D77();
  L373():
    goto L71(i191, r160);
  L378():
    obj_nms5 = force? obj_nms4;
    checkMissing(obj_nms5);
    names2 = ldf names in base;
    r165 = dyn names2(obj_nms5);
    check L379() else D111();
  L383():
    lg11 = force? lg10;
    checkMissing(lg11);
    rep_int8 = ldf `rep.int` in base;
    r169 = dyn rep_int8("", lg11);
    check L384() else D113();
  L387():
    dx47 = getTryDispatchBuiltinValue(dr38);
    goto L76(i203, dx47);
  L388():
    N29 = force? N28;
    ___8 = ldf `[<-` in base;
    r174 = dyn ___8(l28, TRUE, N29);
    goto L76(i208, r174);
  L389():
    lg13 = force? lg12;
    checkMissing(lg13);
    l29 = ld ItemsPerContainer;
    c66 = `is.object`(l29);
    if c66 then L390() else L391(i210, lg13, l29);
  L480():
    nm19 = force? nm18;
    checkMissing(nm19);
    length7 = ldf length in base;
    r240 = dyn length7(nm19);
    check L481() else D156();
  L482():
    dr60 = tryDispatchBuiltin.0("[<-", l40, TRUE);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L484() else L483(i363, TRUE, dr60);
  L483(i365, r242, l42):
    N38 = ld N;
    check L485() else D157();
  D77():
    deopt 288 [i76, i78, N22];
  D111():
    deopt 413 [i194, r165];
  D113():
    deopt 421 [i194, r169];
  D156():
    deopt 583 [i360, r240];
  D157():
    deopt 588 [i365, r242, l42, TRUE, N38];
  D158():
    deopt 592 [i367, lg20];
  L77(i214, dx50):
    st ItemsPerContainer = dx50;
    sym30 = ldf seq_len;
    base30 = ldf seq_len in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L394() else L395();
  L295():
    N23 = force? N22;
    checkMissing(N23);
    l20 = ld ParentID;
    c49 = `is.object`(l20);
    if c49 then L296() else L297(i76, i78, N23, l20);
  L379():
    goto L73(i194, r165);
  L384():
    goto L75(i194, r169);
  L390():
    dr40 = tryDispatchBuiltin.0("[<-", l29, lg13);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L392() else L391(i210, lg13, dr40);
  L391(i212, lg15, l31):
    N30 = ld N;
    check L393() else D116();
  L481():
    goto L104(i360, r240);
  L484():
    dx69 = getTryDispatchBuiltinValue(dr60);
    goto L105(i363, dx69);
  L485():
    N39 = force? N38;
    ___12 = ldf `[<-` in base;
    r245 = dyn ___12(l42, TRUE, N39);
    goto L105(i365, r245);
  L486():
    lg21 = force? lg20;
    checkMissing(lg21);
    l43 = ld ItemsPerContainer;
    c86 = `is.object`(l43);
    if c86 then L487() else L488(i367, lg21, l43);
  D116():
    deopt 433 [i212, lg15, l31, lg13, N30];
  L51(i89, i90, dx34):
    st ParentID = dx34;
    nm2 = ld nm;
    check L300() else D79();
  L78(i217, r177):
    s2 = toForSeq(r177);
    l32 = length(s2);
    i218 = 0;
    goto L79(i217, i218);
  L106(i371, dx72):
    st ItemsPerContainer = dx72;
    sym42 = ldf seq_len;
    base42 = ldf seq_len in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L491() else L492();
  L296():
    dr24 = tryDispatchBuiltin.0("[<-", l20, N23);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L298() else L297(i76, i78, N23, dr24);
  L297(i85, i86, N25, l22):
    M2 = ld M;
    check L299() else D78();
  L392():
    dx49 = getTryDispatchBuiltinValue(dr40);
    goto L77(i210, dx49);
  L393():
    N31 = force? N30;
    ___9 = ldf `[<-` in base;
    r175 = dyn ___9(l31, lg13, N31);
    goto L77(i212, r175);
  L394():
    lg18 = ld lg;
    check L396() else D117();
  L395():
    r176 = dyn base30(<sym lg>);
    goto L78(i214, r176);
  L487():
    dr62 = tryDispatchBuiltin.0("[<-", l43, lg21);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L489() else L488(i367, lg21, dr62);
  L488(i369, lg23, l45):
    N40 = ld N;
    check L490() else D159();
  D78():
    deopt 291 [i85, i86, N25, l22, N23, M2];
  D79():
    deopt 295 [i89, i90, nm2];
  D117():
    deopt 438 [i214, lg18];
  D159():
    deopt 595 [i369, lg23, l45, lg21, N40];
  L79(i219, i220):
    i221 = `+`.1(i220, 1);
    c67 = `<`.1(l32, i221);
    if c67 then L397() else L98();
  L107(i374, r248):
    s4 = toForSeq(r248);
    l46 = length(s4);
    i375 = 0;
    goto L108(i374, i375);
  L298():
    dx33 = getTryDispatchBuiltinValue(dr24);
    goto L51(i76, i78, dx33);
  L299():
    M3 = force? M2;
    ___6 = ldf `[<-` in base;
    r112 = dyn ___6(l22, N23, M3);
    goto L51(i85, i86, r112);
  L300():
    nm3 = force? nm2;
    checkMissing(nm3);
    c50 = `is.object`(nm3);
    if c50 then L301() else L302(i89, i90, nm3);
  L396():
    lg19 = force? lg18;
    checkMissing(lg19);
    r178 = seq_len(lg19);
    goto L78(i214, r178);
  L489():
    dx71 = getTryDispatchBuiltinValue(dr62);
    goto L106(i367, dx71);
  L490():
    N41 = force? N40;
    ___13 = ldf `[<-` in base;
    r246 = dyn ___13(l45, lg21, N41);
    goto L106(i369, r246);
  L491():
    lg26 = ld lg;
    check L493() else D160();
  L492():
    r247 = dyn base42(<sym lg>);
    goto L107(i371, r247);
  D160():
    deopt 600 [i371, lg26];
  L52(i97, i98, dx36):
    r114 = `==`(dx36, "");
    c51 = `as.logical`(r114);
    if c51 then L305() else L53();
  L98():
    x2 = `[[`(s2, i221, NULL, TRUE);
    st i = x2;
    M6 = ld M;
    check L398() else D118();
  L108(i376, i377):
    i378 = `+`.1(i377, 1);
    c87 = `<`.1(l46, i378);
    if c87 then L494() else L115();
  L301():
    dr26 = tryDispatchBuiltin.1("[", nm3);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L303() else L302(i89, i90, dr26);
  L302(i93, i94, nm5):
    i99 = ld i;
    check L304() else D80();
  L397():
    goto L99(i219, i221);
  L493():
    lg27 = force? lg26;
    checkMissing(lg27);
    r249 = seq_len(lg27);
    goto L107(i371, r249);
  D80():
    deopt 297 [i93, i94, nm5, i99];
  D118():
    deopt 441 [i219, i221, M6];
  L53():
    goto L55(i97, i98);
  L55(i117, i118):
    str2 = ldf str1;
    check L313() else D84();
  L115():
    x4 = `[[`(s4, i378, NULL, TRUE);
    st i = x4;
    M12 = ld M;
    check L495() else D161();
  L303():
    dx35 = getTryDispatchBuiltinValue(dr26);
    goto L52(i89, i90, dx35);
  L304():
    i100 = force? i99;
    __1 = ldf `[` in base;
    r113 = dyn __1(nm5, i100);
    goto L52(i93, i94, r113);
  L305():
    paste1 = ldf paste0;
    check L306() else D81();
  L398():
    M7 = force? M6;
    checkMissing(M7);
    r179 = `+`(M7, 1);
    st M = r179;
    N32 = ld N;
    check L399() else D119();
  L494():
    goto L99(i376, i378);
  D81():
    deopt 303 [i97, i98];
  D84():
    deopt 316 [i117, i118];
  D119():
    deopt 446 [i219, i221, N32];
  D161():
    deopt 603 [i376, i378, M12];
  L306():
    p17 = prom<V +>{
      i105 = ld i;
      i106 = force? i105;
      checkMissing(i106);
      return i106;
    };
    r116 = dyn paste1("[[", p17, "]]");
    check L307() else D82();
  L313():
    p18 = prom<V +>{
      obj12 = ld obj;
      obj13 = force? obj12;
      checkMissing(obj13);
      c53 = `is.object`(obj13);
      if c53 then L1() else L2(obj13);
    L0(dx40):
      return dx40;
    L1():
      dr30 = tryDispatchBuiltin.1("[[", obj13);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(obj15):
      i119 = ld i;
      i120 = force? i119;
      __2 = ldf `[[` in base;
      r123 = dyn __2(obj15, i120);
      goto L0(r123);
    L3():
      dx39 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx39);
    };
    r125 = dyn str2(p18);
    check L314() else D85();
  L399():
    N33 = force? N32;
    checkMissing(N33);
    l33 = ld ParentID;
    c68 = `is.object`(l33);
    if c68 then L400() else L401(i219, i221, N33, l33);
  L495():
    M13 = force? M12;
    checkMissing(M13);
    r250 = `+`(M13, 1);
    st M = r250;
    N42 = ld N;
    check L496() else D162();
  D82():
    deopt 307 [i97, i98, r116];
  D85():
    deopt 318 [i117, i118, r125];
  D162():
    deopt 608 [i376, i378, N42];
  L80(i232, i233, dx52):
    st ParentID = dx52;
    nm10 = ld nm;
    check L404() else D121();
  L307():
    l23 = ld nm;
    c52 = `is.object`(l23);
    if c52 then L308() else L309(i97, i98, r116, l23);
  L314():
    st `s.l` = r125;
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L315() else L316();
  L400():
    dr42 = tryDispatchBuiltin.0("[<-", l33, N33);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L402() else L401(i219, i221, N33, dr42);
  L401(i228, i229, N35, l35):
    M8 = ld M;
    check L403() else D120();
  L496():
    N43 = force? N42;
    checkMissing(N43);
    l47 = ld ParentID;
    c88 = `is.object`(l47);
    if c88 then L497() else L498(i376, i378, N43, l47);
  D120():
    deopt 449 [i228, i229, N35, l35, N33, M8];
  D121():
    deopt 453 [i232, i233, nm10];
  L54(i113, i114, r120, dx38):
    st nm = dx38;
    goto L55(i113, i114);
  L56(i125, i126, r127):
    st IDS = r127;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L320() else L321();
  L109(i389, i390, dx74):
    st ParentID = dx74;
    mode1 = ldf mode;
    check L501() else D164();
  L308():
    dr28 = tryDispatchBuiltin.0("[<-", l23, r116);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L310() else L309(i97, i98, r116, dr28);
  L309(i109, i110, r118, l25):
    i115 = ld i;
    check L311() else D83();
  L315():
    IDS = ld IDS;
    check L317() else D86();
  L316():
    r126 = dyn base17(<sym IDS>, <sym M>);
    goto L56(i117, i118, r126);
  L402():
    dx51 = getTryDispatchBuiltinValue(dr42);
    goto L80(i219, i221, dx51);
  L403():
    M9 = force? M8;
    ___10 = ldf `[<-` in base;
    r180 = dyn ___10(l35, N33, M9);
    goto L80(i228, i229, r180);
  L404():
    nm11 = force? nm10;
    checkMissing(nm11);
    c69 = `is.object`(nm11);
    if c69 then L405() else L406(i232, i233, nm11);
  L497():
    dr64 = tryDispatchBuiltin.0("[<-", l47, N43);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L499() else L498(i376, i378, N43, dr64);
  L498(i385, i386, N45, l49):
    M14 = ld M;
    check L500() else D163();
  D83():
    deopt 309 [i109, i110, r118, l25, r116, i115];
  D86():
    deopt 322 [i117, i118, IDS];
  D163():
    deopt 611 [i385, i386, N45, l49, N43, M14];
  D164():
    deopt 616 [i389, i390];
  L57(i131, i132, r130):
    st NAMES = r130;
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L329() else L330();
  L81(i240, i241, dx54):
    r182 = `==`(dx54, "");
    c70 = `as.logical`(r182);
    if c70 then L409() else L82();
  L310():
    dx37 = getTryDispatchBuiltinValue(dr28);
    goto L54(i97, i98, r116, dx37);
  L311():
    i116 = force? i115;
    ___7 = ldf `[<-` in base;
    r121 = dyn ___7(l25, r116, i116);
    goto L54(i109, i110, r118, r121);
  L317():
    IDS1 = force? IDS;
    checkMissing(IDS1);
    M4 = ld M;
    check L318() else D87();
  L320():
    NAMES = ld NAMES;
    check L322() else D89();
  L321():
    r129 = dyn base18(<sym NAMES>, <lang `[`(nm, i)>);
    goto L57(i125, i126, r129);
  L405():
    dr44 = tryDispatchBuiltin.1("[", nm11);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L407() else L406(i232, i233, dr44);
  L406(i236, i237, nm13):
    i242 = ld i;
    check L408() else D122();
  L499():
    dx73 = getTryDispatchBuiltinValue(dr64);
    goto L109(i376, i378, dx73);
  L500():
    M15 = force? M14;
    ___14 = ldf `[<-` in base;
    r251 = dyn ___14(l49, N43, M15);
    goto L109(i385, i386, r251);
  L501():
    p24 = prom<V +>{
      obj26 = ld obj;
      obj27 = force? obj26;
      checkMissing(obj27);
      c89 = `is.object`(obj27);
      if c89 then L1() else L2(obj27);
    L0(dx76):
      return dx76;
    L1():
      dr66 = tryDispatchBuiltin.1("[[", obj27);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L3() else L2(dr66);
    L2(obj29):
      i391 = ld i;
      i392 = force? i391;
      __11 = ldf `[[` in base;
      r252 = dyn __11(obj29, i392);
      goto L0(r252);
    L3():
      dx75 = getTryDispatchBuiltinValue(dr66);
      goto L0(dx75);
    };
    r254 = dyn mode1(p24);
    check L502() else D165();
  D87():
    deopt 324 [i117, i118, M4];
  D89():
    deopt 331 [i125, i126, NAMES];
  D122():
    deopt 455 [i236, i237, nm13, i242];
  D165():
    deopt 618 [i389, i390, r254];
  L59(i147, i148, r134):
    st TYPES = r134;
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L338() else L339();
  L82():
    goto L84(i240, i241);
  L84(i260, i261):
    mode = ldf mode;
    check L417() else D126();
  L318():
    M5 = force? M4;
    checkMissing(M5);
    c54 = ldf c in base;
    r128 = dyn c54(IDS1, M5);
    check L319() else D88();
  L322():
    NAMES1 = force? NAMES;
    checkMissing(NAMES1);
    nm6 = ld nm;
    check L323() else D90();
  L329():
    TYPES = ld TYPES;
    check L331() else D93();
  L330():
    r133 = dyn base19(<sym TYPES>, <lang `$`(s.l, type)>);
    goto L59(i131, i132, r133);
  L407():
    dx53 = getTryDispatchBuiltinValue(dr44);
    goto L81(i232, i233, dx53);
  L408():
    i243 = force? i242;
    __4 = ldf `[` in base;
    r181 = dyn __4(nm13, i243);
    goto L81(i236, i237, r181);
  L409():
    paste2 = ldf paste0;
    check L410() else D123();
  L502():
    st `md.l` = r254;
    paste5 = ldf paste;
    check L503() else D166();
  D88():
    deopt 327 [i117, i118, r128];
  D90():
    deopt 333 [i125, i126, nm6];
  D93():
    deopt 343 [i131, i132, TYPES];
  D123():
    deopt 461 [i240, i241];
  D126():
    deopt 474 [i260, i261];
  D166():
    deopt 621 [i389, i390];
  L60(i161, i162, r138):
    st DIMS = r138;
    goto L50(i161, i162);
  L319():
    goto L56(i117, i118, r128);
  L323():
    nm7 = force? nm6;
    checkMissing(nm7);
    c55 = `is.object`(nm7);
    if c55 then L324() else L325(i125, i126, nm7);
  L331():
    TYPES1 = force? TYPES;
    checkMissing(TYPES1);
    s_l = ld `s.l`;
    check L332() else D94();
  L338():
    DIMS = ld DIMS;
    check L340() else D96();
  L339():
    r137 = dyn base20(<sym DIMS>, <lang `$`(s.l, dim.field)>);
    goto L60(i147, i148, r137);
  L410():
    p19 = prom<V +>{
      i248 = ld i;
      i249 = force? i248;
      checkMissing(i249);
      return i249;
    };
    r184 = dyn paste2("[[", p19, "]]");
    check L411() else D124();
  L417():
    p20 = prom<V +>{
      obj_nms6 = ld `obj.nms`;
      obj_nms7 = force? obj_nms6;
      checkMissing(obj_nms7);
      c72 = `is.object`(obj_nms7);
      if c72 then L1() else L2(obj_nms7);
    L0(dx58):
      return dx58;
    L1():
      dr48 = tryDispatchBuiltin.1("[[", obj_nms7);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(obj_nms9):
      i262 = ld i;
      i263 = force? i262;
      __5 = ldf `[[` in base;
      r191 = dyn __5(obj_nms9, i263);
      goto L0(r191);
    L3():
      dx57 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx57);
    };
    r193 = dyn mode(p20);
    check L418() else D127();
  L503():
    p25 = prom<V +>{
      sym43 = ldf dim;
      base43 = ldf dim in base;
      guard43 = `==`.4(sym43, base43);
      if guard43 then L2() else L3();
    L0(r256):
      c90 = `is.object`(r256);
      if c90 then L4() else L5(r256);
    L2():
      obj30 = ld obj;
      obj31 = force? obj30;
      checkMissing(obj31);
      dim1 = ldf dim in base;
      r257 = dyn dim1(obj31);
      goto L0(r257);
    L3():
      r255 = dyn base43(<sym obj>);
      goto L0(r255);
    L1(dx78):
      return dx78;
    L4():
      dr68 = tryDispatchBuiltin.1("[", r256);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L6() else L5(dr68);
    L5(r259):
      __12 = ldf `[` in base;
      r260 = dyn __12(r259, 1);
      goto L1(r260);
    L6():
      dx77 = getTryDispatchBuiltinValue(dr68);
      goto L1(dx77);
    };
    r262 = dyn paste5("length:", p25);
    check L504() else D167();
  D94():
    deopt 345 [i131, i132, s_l];
  D96():
    deopt 353 [i147, i148, DIMS];
  D124():
    deopt 465 [i240, i241, r184];
  D127():
    deopt 476 [i260, i261, r193];
  D167():
    deopt 624 [i389, i390, r262];
  L58(i139, i140, dx42):
    c56 = ldf c in base;
    r132 = dyn c56(NAMES1, dx42);
    check L328() else D92();
  L324():
    dr32 = tryDispatchBuiltin.1("[", nm7);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L326() else L325(i125, i126, dr32);
  L325(i135, i136, nm9):
    i141 = ld i;
    check L327() else D91();
  L332():
    s_l1 = force? s_l;
    checkMissing(s_l1);
    c57 = `is.object`(s_l1);
    if c57 then L334() else L335(i131, i132, s_l1);
  L340():
    DIMS1 = force? DIMS;
    checkMissing(DIMS1);
    s_l4 = ld `s.l`;
    check L341() else D97();
  L411():
    l36 = ld nm;
    c71 = `is.object`(l36);
    if c71 then L412() else L413(i240, i241, r184, l36);
  L418():
    st `md.l` = r193;
    sym31 = ldf dim;
    base31 = ldf dim in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L419() else L420();
  L504():
    st `dim.field.l` = r262;
    st `md.l` = "ts";
    sym44 = ldf c;
    base44 = ldf c in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L505() else L506();
  D91():
    deopt 335 [i135, i136, nm9, i141];
  D92():
    deopt 339 [i139, i140, r132];
  D97():
    deopt 355 [i147, i148, s_l4];
  L83(i256, i257, r188, dx56):
    st nm = dx56;
    goto L84(i256, i257);
  L85(i268, i269, r195):
    st `objdim.l` = r195;
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L427() else L428();
  L110(i397, i398, r264):
    st IDS = r264;
    sym45 = ldf c;
    base45 = ldf c in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L510() else L511();
  L326():
    dx41 = getTryDispatchBuiltinValue(dr32);
    goto L58(i125, i126, dx41);
  L327():
    i142 = force? i141;
    __3 = ldf `[` in base;
    r131 = dyn __3(nm9, i142);
    goto L58(i135, i136, r131);
  L328():
    goto L57(i139, i140, r132);
  L333(i155, i156, dx44):
    c58 = ldf c in base;
    r136 = dyn c58(TYPES1, dx44);
    check L337() else D95();
  L334():
    dr34 = tryDispatchBuiltin.1("$", s_l1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L336() else L335(i131, i132, dr34);
  L335(i151, i152, s_l3):
    r135 = `$`(s_l3, <sym type>);
    goto L333(i151, i152, r135);
  L341():
    s_l5 = force? s_l4;
    checkMissing(s_l5);
    c59 = `is.object`(s_l5);
    if c59 then L343() else L344(i147, i148, s_l5);
  L412():
    dr46 = tryDispatchBuiltin.0("[<-", l36, r184);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L414() else L413(i240, i241, r184, dr46);
  L413(i252, i253, r186, l38):
    i258 = ld i;
    check L415() else D125();
  L419():
    obj_nms10 = ld `obj.nms`;
    check L421() else D128();
  L420():
    r194 = dyn base31(<lang `[[`(obj.nms, i)>);
    goto L85(i260, i261, r194);
  L505():
    IDS4 = ld IDS;
    check L507() else D168();
  L506():
    r263 = dyn base44(<sym IDS>, <sym M>);
    goto L110(i389, i390, r263);
  D95():
    deopt 349 [i155, i156, r136];
  D125():
    deopt 467 [i252, i253, r186, l38, r184, i258];
  D128():
    deopt 480 [i260, i261, obj_nms10];
  D168():
    deopt 631 [i389, i390, IDS4];
  L87(i284, i285, r199):
    r201 = `==`(r199, 0);
    c74 = `as.logical`(r201);
    if c74 then L431() else L88();
  L111(i403, i404, r267):
    st NAMES = r267;
    sym46 = ldf c;
    base46 = ldf c in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L519() else L520();
  L336():
    dx43 = getTryDispatchBuiltinValue(dr34);
    goto L333(i131, i132, dx43);
  L337():
    goto L59(i155, i156, r136);
  L342(i169, i170, dx46):
    c60 = ldf c in base;
    r140 = dyn c60(DIMS1, dx46);
    check L346() else D98();
  L343():
    dr36 = tryDispatchBuiltin.1("$", s_l5);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L345() else L344(i147, i148, dr36);
  L344(i165, i166, s_l7):
    r139 = `$`(s_l7, <sym dim.field>);
    goto L342(i165, i166, r139);
  L414():
    dx55 = getTryDispatchBuiltinValue(dr46);
    goto L83(i240, i241, r184, dx55);
  L415():
    i259 = force? i258;
    ___11 = ldf `[<-` in base;
    r189 = dyn ___11(l38, r184, i259);
    goto L83(i252, i253, r186, r189);
  L421():
    obj_nms11 = force? obj_nms10;
    checkMissing(obj_nms11);
    c73 = `is.object`(obj_nms11);
    if c73 then L422() else L423(i260, i261, obj_nms11);
  L427():
    objdim_l = ld `objdim.l`;
    check L429() else D131();
  L428():
    r198 = dyn base32(<sym objdim.l>);
    goto L87(i268, i269, r198);
  L507():
    IDS5 = force? IDS4;
    checkMissing(IDS5);
    M16 = ld M;
    check L508() else D169();
  L510():
    NAMES4 = ld NAMES;
    check L512() else D171();
  L511():
    r266 = dyn base45(<sym NAMES>, <lang `[`(nm, i)>);
    goto L111(i397, i398, r266);
  D98():
    deopt 359 [i169, i170, r140];
  D131():
    deopt 490 [i268, i269, objdim_l];
  D169():
    deopt 633 [i389, i390, M16];
  D171():
    deopt 640 [i397, i398, NAMES4];
  L86(i276, i277, dx60):
    dim = ldf dim in base;
    r197 = dyn dim(dx60);
    check L426() else D130();
  L88():
    st `dim.field.l` = "dim:";
    sym34 = ldf seq_along;
    base34 = ldf seq_along in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L435() else L436();
  L89(i292, i293):
    sym35 = ldf c;
    base35 = ldf c in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L441() else L442();
  L113(i419, i420, r271):
    st TYPES = r271;
    sym47 = ldf c;
    base47 = ldf c in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L524() else L525();
  L345():
    dx45 = getTryDispatchBuiltinValue(dr36);
    goto L342(i147, i148, dx45);
  L346():
    goto L60(i169, i170, r140);
  L422():
    dr50 = tryDispatchBuiltin.1("[[", obj_nms11);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L424() else L423(i260, i261, dr50);
  L423(i272, i273, obj_nms13):
    i278 = ld i;
    check L425() else D129();
  L429():
    objdim_l1 = force? objdim_l;
    checkMissing(objdim_l1);
    length5 = ldf length in base;
    r200 = dyn length5(objdim_l1);
    check L430() else D132();
  L431():
    paste3 = ldf paste;
    check L432() else D133();
  L508():
    M17 = force? M16;
    checkMissing(M17);
    c91 = ldf c in base;
    r265 = dyn c91(IDS5, M17);
    check L509() else D170();
  L512():
    NAMES5 = force? NAMES4;
    checkMissing(NAMES5);
    nm20 = ld nm;
    check L513() else D172();
  L519():
    TYPES4 = ld TYPES;
    check L521() else D175();
  L520():
    r270 = dyn base46(<sym TYPES>, <sym md.l>);
    goto L113(i403, i404, r270);
  D129():
    deopt 482 [i272, i273, obj_nms13, i278];
  D130():
    deopt 486 [i276, i277, r197];
  D132():
    deopt 493 [i268, i269, r200];
  D133():
    deopt 497 [i284, i285];
  D170():
    deopt 636 [i389, i390, r265];
  D172():
    deopt 642 [i397, i398, nm20];
  D175():
    deopt 652 [i403, i404, TYPES4];
  L90(i298, i299, r210):
    s3 = toForSeq(r210);
    l39 = length(s3);
    i300 = 0;
    goto L91(i298, i299, i300);
  L93(i317, i318, r217):
    st IDS = r217;
    sym36 = ldf c;
    base36 = ldf c in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L446() else L447();
  L114(i425, i426, r274):
    st DIMS = r274;
    goto L108(i425, i426);
  L424():
    dx59 = getTryDispatchBuiltinValue(dr50);
    goto L86(i260, i261, dx59);
  L425():
    i279 = force? i278;
    __6 = ldf `[[` in base;
    r196 = dyn __6(obj_nms13, i279);
    goto L86(i272, i273, r196);
  L426():
    goto L85(i276, i277, r197);
  L430():
    goto L87(i268, i269, r200);
  L432():
    p21 = prom<V +>{
      sym33 = ldf length;
      base33 = ldf length in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L2() else L3();
    L0(r203):
      return r203;
    L2():
      obj_nms14 = ld `obj.nms`;
      obj_nms15 = force? obj_nms14;
      checkMissing(obj_nms15);
      c75 = `is.object`(obj_nms15);
      if c75 then L4() else L5(obj_nms15);
    L3():
      r202 = dyn base33(<lang `[[`(obj.nms, i)>);
      goto L0(r202);
    L1(dx62):
      length6 = ldf length in base;
      r205 = dyn length6(dx62);
      goto L0(r205);
    L4():
      dr52 = tryDispatchBuiltin.1("[[", obj_nms15);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L6() else L5(dr52);
    L5(obj_nms17):
      i290 = ld i;
      i291 = force? i290;
      __7 = ldf `[[` in base;
      r204 = dyn __7(obj_nms17, i291);
      goto L1(r204);
    L6():
      dx61 = getTryDispatchBuiltinValue(dr52);
      goto L1(dx61);
    };
    r207 = dyn paste3("length:", p21);
    check L433() else D134();
  L435():
    objdim_l2 = ld `objdim.l`;
    check L437() else D135();
  L436():
    r209 = dyn base34(<sym objdim.l>);
    goto L90(i284, i285, r209);
  L441():
    IDS2 = ld IDS;
    check L443() else D138();
  L442():
    r216 = dyn base35(<sym IDS>, <sym M>);
    goto L93(i292, i293, r216);
  L509():
    goto L110(i389, i390, r265);
  L513():
    nm21 = force? nm20;
    checkMissing(nm21);
    c92 = `is.object`(nm21);
    if c92 then L514() else L515(i397, i398, nm21);
  L521():
    TYPES5 = force? TYPES4;
    checkMissing(TYPES5);
    md_l2 = ld `md.l`;
    check L522() else D176();
  L524():
    DIMS4 = ld DIMS;
    check L526() else D178();
  L525():
    r273 = dyn base47(<sym DIMS>, <sym dim.field.l>);
    goto L114(i419, i420, r273);
  D134():
    deopt 500 [i284, i285, r207];
  D135():
    deopt 506 [i284, i285, objdim_l2];
  D138():
    deopt 520 [i292, i293, IDS2];
  D176():
    deopt 654 [i403, i404, md_l2];
  D178():
    deopt 661 [i419, i420, DIMS4];
  L91(i301, i302, i303):
    i304 = `+`.1(i303, 1);
    c76 = `<`.1(l39, i304);
    if c76 then L438() else L92();
  L94(i323, i324, r220):
    st NAMES = r220;
    sym37 = ldf c;
    base37 = ldf c in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L455() else L456();
  L112(i411, i412, dx80):
    c93 = ldf c in base;
    r269 = dyn c93(NAMES5, dx80);
    check L518() else D174();
  L433():
    st `dim.field.l` = r207;
    goto L89(i284, i285);
  L437():
    objdim_l3 = force? objdim_l2;
    checkMissing(objdim_l3);
    r211 = seq_along(objdim_l3);
    goto L90(i284, i285, r211);
  L443():
    IDS3 = force? IDS2;
    checkMissing(IDS3);
    M10 = ld M;
    check L444() else D139();
  L446():
    NAMES2 = ld NAMES;
    check L448() else D141();
  L447():
    r219 = dyn base36(<sym NAMES>, <lang `[`(nm, i)>);
    goto L94(i317, i318, r219);
  L514():
    dr70 = tryDispatchBuiltin.1("[", nm21);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L516() else L515(i397, i398, dr70);
  L515(i407, i408, nm23):
    i413 = ld i;
    check L517() else D173();
  L522():
    md_l3 = force? md_l2;
    checkMissing(md_l3);
    c94 = ldf c in base;
    r272 = dyn c94(TYPES5, md_l3);
    check L523() else D177();
  L526():
    DIMS5 = force? DIMS4;
    checkMissing(DIMS5);
    dim_field_l4 = ld `dim.field.l`;
    check L527() else D179();
  D139():
    deopt 522 [i292, i293, M10];
  D141():
    deopt 529 [i317, i318, NAMES2];
  D173():
    deopt 644 [i407, i408, nm23, i413];
  D174():
    deopt 648 [i411, i412, r269];
  D177():
    deopt 657 [i403, i404, r272];
  D179():
    deopt 663 [i419, i420, dim_field_l4];
  L92():
    x3 = `[[`(s3, i304, NULL, TRUE);
    st j = x3;
    paste4 = ldf paste;
    check L439() else D136();
  L96(i339, i340, r224):
    st TYPES = r224;
    sym38 = ldf c;
    base38 = ldf c in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L460() else L461();
  L438():
    goto L89(i301, i302);
  L444():
    M11 = force? M10;
    checkMissing(M11);
    c78 = ldf c in base;
    r218 = dyn c78(IDS3, M11);
    check L445() else D140();
  L448():
    NAMES3 = force? NAMES2;
    checkMissing(NAMES3);
    nm14 = ld nm;
    check L449() else D142();
  L455():
    TYPES2 = ld TYPES;
    check L457() else D145();
  L456():
    r223 = dyn base37(<sym TYPES>, <sym md.l>);
    goto L96(i323, i324, r223);
  L516():
    dx79 = getTryDispatchBuiltinValue(dr70);
    goto L112(i397, i398, dx79);
  L517():
    i414 = force? i413;
    __13 = ldf `[` in base;
    r268 = dyn __13(nm23, i414);
    goto L112(i407, i408, r268);
  L518():
    goto L111(i411, i412, r269);
  L523():
    goto L113(i403, i404, r272);
  L527():
    dim_field_l5 = force? dim_field_l4;
    checkMissing(dim_field_l5);
    c95 = ldf c in base;
    r275 = dyn c95(DIMS5, dim_field_l5);
    check L528() else D180();
  D136():
    deopt 510 [i301, i302, i304];
  D140():
    deopt 525 [i292, i293, r218];
  D142():
    deopt 531 [i317, i318, nm14];
  D145():
    deopt 541 [i323, i324, TYPES2];
  D180():
    deopt 666 [i419, i420, r275];
  L97(i345, i346, r227):
    st DIMS = r227;
    goto L79(i345, i346);
  L439():
    p22 = prom<V +>{
      dim_field_l = ld `dim.field.l`;
      dim_field_l1 = force? dim_field_l;
      checkMissing(dim_field_l1);
      return dim_field_l1;
    };
    p23 = prom<V +>{
      objdim_l4 = ld `objdim.l`;
      objdim_l5 = force? objdim_l4;
      checkMissing(objdim_l5);
      c77 = `is.object`(objdim_l5);
      if c77 then L1() else L2(objdim_l5);
    L0(dx64):
      return dx64;
    L1():
      dr54 = tryDispatchBuiltin.1("[", objdim_l5);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(objdim_l7):
      i311 = ld i;
      i312 = force? i311;
      __8 = ldf `[` in base;
      r213 = dyn __8(objdim_l7, i312);
      goto L0(r213);
    L3():
      dx63 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx63);
    };
    r215 = dyn paste4(p22, p23);
    check L440() else D137();
  L445():
    goto L93(i292, i293, r218);
  L449():
    nm15 = force? nm14;
    checkMissing(nm15);
    c79 = `is.object`(nm15);
    if c79 then L450() else L451(i317, i318, nm15);
  L457():
    TYPES3 = force? TYPES2;
    checkMissing(TYPES3);
    md_l = ld `md.l`;
    check L458() else D146();
  L460():
    DIMS2 = ld DIMS;
    check L462() else D148();
  L461():
    r226 = dyn base38(<sym DIMS>, <sym dim.field.l>);
    goto L97(i339, i340, r226);
  L528():
    goto L114(i419, i420, r275);
  D137():
    deopt 513 [i301, i302, i304, r215];
  D146():
    deopt 543 [i323, i324, md_l];
  D148():
    deopt 550 [i339, i340, DIMS2];
  L95(i331, i332, dx66):
    c80 = ldf c in base;
    r222 = dyn c80(NAMES3, dx66);
    check L454() else D144();
  L440():
    st `dim.field.l` = r215;
    goto L91(i301, i302, i304);
  L450():
    dr56 = tryDispatchBuiltin.1("[", nm15);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L452() else L451(i317, i318, dr56);
  L451(i327, i328, nm17):
    i333 = ld i;
    check L453() else D143();
  L458():
    md_l1 = force? md_l;
    checkMissing(md_l1);
    c81 = ldf c in base;
    r225 = dyn c81(TYPES3, md_l1);
    check L459() else D147();
  L462():
    DIMS3 = force? DIMS2;
    checkMissing(DIMS3);
    dim_field_l2 = ld `dim.field.l`;
    check L463() else D149();
  D143():
    deopt 533 [i327, i328, nm17, i333];
  D144():
    deopt 537 [i331, i332, r222];
  D147():
    deopt 546 [i323, i324, r225];
  D149():
    deopt 552 [i339, i340, dim_field_l2];
  L452():
    dx65 = getTryDispatchBuiltinValue(dr56);
    goto L95(i317, i318, dx65);
  L453():
    i334 = force? i333;
    __9 = ldf `[` in base;
    r221 = dyn __9(nm17, i334);
    goto L95(i327, i328, r221);
  L454():
    goto L94(i331, i332, r222);
  L459():
    goto L96(i323, i324, r225);
  L463():
    dim_field_l3 = force? dim_field_l2;
    checkMissing(dim_field_l3);
    c82 = ldf c in base;
    r228 = dyn c82(DIMS3, dim_field_l3);
    check L464() else D150();
  D150():
    deopt 555 [i339, i340, r228];
  L464():
    goto L97(i339, i340, r228);
  }
}
fun inner1912617395(obj) {
  (reg obj:*) -+> V { var obj:*, reg mode:cls, reg obj1:*, reg obj2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg obj3:*, reg obj4:V, reg length:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg obj5:*, reg obj6:V, reg dim:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg objdim:*, reg objdim1:V, reg length1:cls, reg r10:V, reg r11:V, reg c:L, reg paste:cls, reg lg:*, reg lg1:V, reg p1:p(V +), reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg objdim2:*, reg objdim3:V, reg r17:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg paste1:cls, reg dim_field:*, reg dim_field1:V, reg p2:p(V +), reg objdim4:*, reg objdim5:V, reg c2:L, reg objdim7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg obj7:*, reg obj8:V, reg is_matrix:cls, reg r24:V, reg c3:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg obj9:*, reg obj10:V, reg oldClass:cls, reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg obj_class:*, reg obj_class1:V, reg c4:V, reg r30:V, reg c5:L, reg obj_class2:*, reg obj_class3:V, reg c6:L, reg obj_class5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r31:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg r33:V, reg obj11:*, reg obj12:V, reg inherits:cls, reg r34:V, reg c7:L, reg paste2:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg levels:cls, reg obj13:*, reg obj14:V, reg p4:p(V +), reg r38:V, reg length2:cls, reg r39:V, reg p5:p(V +), reg r41:V, reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg md:*, reg md1:V, reg dim_field2:*, reg dim_field3:V, reg list:cls, reg r46:V |
    mkenv;
    st obj = obj;
    mode = ldf mode;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    p = prom<V +>{
      obj1 = ld obj;
      obj2 = force? obj1;
      checkMissing(obj2);
      return obj2;
    };
    r1 = dyn mode(p);
    check L20() else D1();
  D1():
    deopt 3 [r1];
  L20():
    st md = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L0(r3):
    st lg = r3;
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L21():
    obj3 = ld obj;
    check L23() else D2();
  L22():
    r2 = dyn base(<sym obj>);
    goto L0(r2);
  D2():
    deopt 7 [obj3];
  L1(r6):
    st objdim = r6;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L23():
    obj4 = force? obj3;
    checkMissing(obj4);
    length = ldf length in base;
    r4 = dyn length(obj4);
    check L24() else D3();
  L25():
    obj5 = ld obj;
    check L27() else D4();
  L26():
    r5 = dyn base1(<sym obj>);
    goto L1(r5);
  D3():
    deopt 10 [r4];
  D4():
    deopt 14 [obj5];
  L2(r9):
    r11 = `==`(r9, 0);
    c = `as.logical`(r11);
    if c then L33() else L3();
  L24():
    goto L0(r4);
  L27():
    obj6 = force? obj5;
    checkMissing(obj6);
    dim = ldf dim in base;
    r7 = dyn dim(obj6);
    check L28() else D5();
  L29():
    objdim = ld objdim;
    check L31() else D6();
  L30():
    r8 = dyn base2(<sym objdim>);
    goto L2(r8);
  D5():
    deopt 17 [r7];
  D6():
    deopt 21 [objdim];
  L3():
    st `dim.field` = "dim:";
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L4():
    sym5 = ldf oldClass;
    base5 = ldf oldClass in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L49() else L50();
  L28():
    goto L1(r7);
  L31():
    objdim1 = force? objdim;
    checkMissing(objdim1);
    length1 = ldf length in base;
    r10 = dyn length1(objdim1);
    check L32() else D7();
  L33():
    paste = ldf paste;
    check L34() else D8();
  D7():
    deopt 24 [r10];
  D8():
    deopt 28 [];
  L5(r16):
    s = toForSeq(r16);
    l = length(s);
    i = 0;
    goto L6(i);
  L10(r26):
    st `obj.class` = r26;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L53() else L54();
  L32():
    goto L2(r10);
  L34():
    p1 = prom<V +>{
      lg = ld lg;
      lg1 = force? lg;
      checkMissing(lg1);
      return lg1;
    };
    r13 = dyn paste("length:", p1);
    check L35() else D9();
  L37():
    objdim2 = ld objdim;
    check L39() else D10();
  L38():
    r15 = dyn base3(<sym objdim>);
    goto L5(r15);
  L49():
    obj9 = ld obj;
    check L51() else D15();
  L50():
    r25 = dyn base5(<sym obj>);
    goto L10(r25);
  D9():
    deopt 31 [r13];
  D10():
    deopt 37 [objdim2];
  D15():
    deopt 62 [obj9];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L40() else L7();
  L11(r29):
    r30 = `!`(r29);
    c5 = `as.logical`(r30);
    if c5 then L56() else L12();
  L35():
    st `dim.field` = r13;
    goto L4();
  L39():
    objdim3 = force? objdim2;
    checkMissing(objdim3);
    r17 = seq_along(objdim3);
    goto L5(r17);
  L51():
    obj10 = force? obj9;
    checkMissing(obj10);
    oldClass = ldf oldClass in base;
    r27 = dyn oldClass(obj10);
    check L52() else D16();
  L53():
    obj_class = ld `obj.class`;
    check L55() else D17();
  L54():
    r28 = dyn base6(<sym obj.class>);
    goto L11(r28);
  D16():
    deopt 65 [r27];
  D17():
    deopt 68 [obj_class];
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    paste1 = ldf paste;
    check L41() else D11();
  L12():
    goto L17();
  L17():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L70() else L71();
  L40():
    sym4 = ldf `is.matrix`;
    base4 = ldf `is.matrix` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L52():
    goto L10(r27);
  L55():
    obj_class1 = force? obj_class;
    checkMissing(obj_class1);
    c4 = `==`(obj_class1, NULL);
    goto L11(c4);
  L56():
    obj_class2 = ld `obj.class`;
    check L57() else D18();
  D11():
    deopt 41 [i2];
  D18():
    deopt 72 [obj_class2];
  L8(r23):
    c3 = `as.logical`(r23);
    if c3 then L47() else L9();
  L18(r45):
    popenv;
    return r45;
  L41():
    p2 = prom<V +>{
      dim_field = ld `dim.field`;
      dim_field1 = force? dim_field;
      checkMissing(dim_field1);
      return dim_field1;
    };
    p3 = prom<V +>{
      objdim4 = ld objdim;
      objdim5 = force? objdim4;
      checkMissing(objdim5);
      c2 = `is.object`(objdim5);
      if c2 then L1() else L2(objdim5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", objdim5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(objdim7):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[` in base;
      r19 = dyn __(objdim7, i6);
      goto L0(r19);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r21 = dyn paste1(p2, p3);
    check L42() else D12();
  L43():
    obj7 = ld obj;
    check L45() else D13();
  L44():
    r22 = dyn base4(<sym obj>);
    goto L8(r22);
  L57():
    obj_class3 = force? obj_class2;
    checkMissing(obj_class3);
    c6 = `is.object`(obj_class3);
    if c6 then L58() else L59(obj_class3);
  L70():
    md = ld md;
    check L72() else D23();
  L71():
    r44 = dyn base9[type, `dim.field`](<sym md>, <sym dim.field>);
    goto L18(r44);
  D12():
    deopt 44 [i2, r21];
  D13():
    deopt 51 [obj7];
  D23():
    deopt 98 [md];
  L9():
    goto L4();
  L13(dx3):
    st md = dx3;
    sym7 = ldf inherits;
    base7 = ldf inherits in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L61() else L62();
  L42():
    st `dim.field` = r21;
    goto L6(i2);
  L45():
    obj8 = force? obj7;
    checkMissing(obj8);
    is_matrix = ldf `is.matrix` in base;
    r24 = dyn is_matrix(obj8);
    check L46() else D14();
  L47():
    st md = "matrix";
    goto L4();
  L58():
    dr2 = tryDispatchBuiltin.1("[", obj_class3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L60() else L59(dr2);
  L59(obj_class5):
    __1 = ldf `[` in base;
    r31 = dyn __1(obj_class5, 1);
    goto L13(r31);
  L72():
    md1 = force? md;
    checkMissing(md1);
    dim_field2 = ld `dim.field`;
    check L73() else D24();
  D14():
    deopt 54 [r24];
  D24():
    deopt 101 [dim_field2];
  L14(r33):
    c7 = `as.logical`(r33);
    if c7 then L65() else L15();
  L46():
    goto L8(r24);
  L60():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L61():
    obj11 = ld obj;
    check L63() else D19();
  L62():
    r32 = dyn base7(<sym obj>, "factor");
    goto L14(r32);
  L73():
    dim_field3 = force? dim_field2;
    checkMissing(dim_field3);
    list = ldf list in base;
    r46 = dyn list(md1, dim_field3);
    check L74() else D25();
  D19():
    deopt 80 [obj11];
  D25():
    deopt 105 [r46];
  L15():
    goto L16(NULL);
  L16(r42):
    goto L17();
  L63():
    obj12 = force? obj11;
    checkMissing(obj12);
    inherits = ldf inherits in base;
    r34 = dyn inherits(obj12, "factor", FALSE);
    check L64() else D20();
  L65():
    paste2 = ldf paste;
    check L66() else D21();
  L74():
    goto L18(r46);
  D20():
    deopt 85 [r34];
  D21():
    deopt 87 [];
  L64():
    goto L14(r34);
  L66():
    p5 = prom<V +>{
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      levels = ldf levels;
      p4 = prom<V +>{
        obj13 = ld obj;
        obj14 = force? obj13;
        checkMissing(obj14);
        return obj14;
      };
      r38 = dyn levels(p4);
      length2 = ldf length in base;
      r39 = dyn length2(r38);
      goto L0(r39);
    L2():
      r35 = dyn base8(<lang levels(obj)>);
      goto L0(r35);
    };
    r41 = dyn paste2("levels:", p5);
    check L67() else D22();
  D22():
    deopt 90 [r41];
  L67():
    st `dim.field` = r41;
    goto L16(r41);
  }
}
fun inner2708337952() {
  () -+> V { reg Sys_info:cls, reg r:V, reg si:*, reg si1:V, reg c:L, reg si3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg si6:V, reg r2:V, reg c1:cls, reg r3:V, reg __:cls, reg r4:V |
    mkenv;
    Sys_info = ldf `Sys.info`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn Sys_info();
    check L3() else D1();
  D1():
    deopt 2 [r];
  L3():
    st si = r;
    si = ld si;
    check L4() else D2();
  D2():
    deopt 4 [si];
  L4():
    si1 = force? si;
    checkMissing(si1);
    c = `is.object`(si1);
    if c then L5() else L6(si1);
  L0(dx1):
    popenv;
    return dx1;
  L5():
    dr = tryDispatchBuiltin.1("[", si1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(si3):
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(si6, r2):
    __ = ldf `[` in base;
    r4 = dyn __(si6, r2);
    goto L0(r4);
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    c1 = ldf c in base;
    r3 = dyn c1("user", "nodename", "sysname");
    check L10() else D3();
  L9():
    r1 = dyn base("user", "nodename", "sysname");
    goto L1(si3, r1);
  D3():
    deopt 12 [si3, r3];
  L10():
    goto L1(si3, r3);
  }
}