fun main() {
  () -+> V { reg r:cls, reg loglin:cls, reg HairEyeColor:*, reg HairEyeColor1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg c2:cls, reg r12:V, reg list:cls, reg r13:V, reg p1:p(V +), reg r15:V, reg fm:*, reg fm1:V, reg pchisq:cls, reg fm2:*, reg fm3:V, reg c3:L, reg fm5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r16:V, reg p2:p(V +), reg fm6:*, reg fm7:V, reg c4:L, reg fm9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r18:V, reg p3:p(V +), reg r20:V, reg r21:V |
    mkenv;
    r = clos inner3507135248;
    st loglin = r;
    loglin = ldf loglin;
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
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L4() else L5();
    L0(r3):
      return r3;
    L4():
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L6() else L7();
    L5():
      r2 = dyn base(<lang c(1.0, 2.0)>, <lang c(1.0, 3.0)>, <lang c(2.0, 3.0)>);
      goto L0(r2);
    L1(r5):
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L8() else L9();
    L6():
      c = ldf c in base;
      r6 = dyn c(1.0, 2.0);
      goto L1(r6);
    L7():
      r4 = dyn base1(1.0, 2.0);
      goto L1(r4);
    L2(r8):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L10() else L11();
    L8():
      c1 = ldf c in base;
      r9 = dyn c1(1.0, 3.0);
      goto L2(r9);
    L9():
      r7 = dyn base2(1.0, 3.0);
      goto L2(r7);
    L3(r11):
      list = ldf list in base;
      r13 = dyn list(r5, r8, r11);
      goto L0(r13);
    L10():
      c2 = ldf c in base;
      r12 = dyn c2(2.0, 3.0);
      goto L3(r12);
    L11():
      r10 = dyn base3(2.0, 3.0);
      goto L3(r10);
    };
    r15 = dyn loglin(p, p1);
    check L1() else D1();
  D1():
    deopt 7 [r15];
  L1():
    st fm = r15;
    fm = ld fm;
    check L2() else D2();
  D2():
    deopt 9 [fm];
  L2():
    fm1 = force? fm;
    checkMissing(fm1);
    pchisq = ldf pchisq;
    check L3() else D3();
  D3():
    deopt 13 [1.0];
  L3():
    p2 = prom<V +>{
      fm2 = ld fm;
      fm3 = force? fm2;
      checkMissing(fm3);
      c3 = `is.object`(fm3);
      if c3 then L1() else L2(fm3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", fm3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(fm5):
      r16 = `$`(fm5, <sym lrt>);
      goto L0(r16);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      fm6 = ld fm;
      fm7 = force? fm6;
      checkMissing(fm7);
      c4 = `is.object`(fm7);
      if c4 then L1() else L2(fm7);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", fm7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(fm9):
      r18 = `$`(fm9, <sym df>);
      goto L0(r18);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r20 = dyn pchisq(p2, p3);
    check L4() else D4();
  D4():
    deopt 16 [1.0, r20];
  L4():
    r21 = `-`(1.0, r20);
    popenv;
    return r21;
  }
}
fun inner3507135248(table, margin, start, fit, eps, iter, param, print) {
  (reg table:*, reg margin:*, reg start:*, reg fit:*, reg eps:*, reg iter:*, reg param:*, reg print:*) -+> V { var table:*, var margin:*, var start:*, reg start_isMissing:L, reg start_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg p:p(V +), var fit:*, reg fit_isMissing:L, reg fit_orDefault:*, var eps:*, reg eps_isMissing:L, reg eps_orDefault:*, var iter:*, reg iter_isMissing:L, reg iter_orDefault:*, var param:*, reg param_isMissing:L, reg param_orDefault:*, var print:*, reg print_isMissing:L, reg print_orDefault:*, reg fit1:*, reg fit2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg table1:*, reg table2:V, reg dim:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg dtab:*, reg dtab1:V, reg length:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg margin1:*, reg margin2:V, reg length1:cls, reg r12:V, reg matrix:cls, reg nvar:*, reg nvar1:V, reg p1:p(V +), reg ncon:*, reg ncon1:V, reg p2:p(V +), reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg table3:*, reg table4:V, reg dimnames:cls, reg r20:V, reg names:cls, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg margin3:*, reg margin4:V, reg r24:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg margin5:*, reg margin6:V, reg c1:L, reg i6:I, reg margin8:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg k:*, reg k1:V, reg __:cls, reg r25:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r26:V, reg i11:I, reg r27:V, reg tmp:*, reg tmp1:V, reg c2:L, reg c3:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r28:V, reg i16:I, reg r29:V, reg tmp2:*, reg tmp3:V, reg varnames:*, reg varnames1:V, reg match:cls, reg r30:V, reg tmp4:*, reg tmp5:V, reg l1:*, reg c4:L, reg i18:I, reg tmp7:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i20:I, reg tmp9:V, reg dx3:V, reg k2:*, reg k3:V, reg ____:cls, reg r31:V, reg i21:I, reg sym9:cls, reg base9:cls, reg guard9:L, reg r32:V, reg i24:I, reg r33:V, reg tmp11:*, reg tmp12:V, reg is_numeric:cls, reg r34:V, reg r35:V, reg c5:L, reg i25:I, reg c6:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r36:V, reg i29:I, reg c10:L, reg r37:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r38:V, reg i32:I, reg c13:L, reg r39:V, reg tmp13:*, reg tmp14:V, reg is_na:cls, reg r40:V, reg tmp15:*, reg tmp16:V, reg r41:V, reg r42:V, reg any:cls, reg r43:V, reg c14:L, reg c15:V, reg c17:L, reg stop:cls, reg r44:V, reg i36:I, reg tmp17:*, reg tmp18:V, reg l4:*, reg c18:L, reg i38:I, reg tmp20:V, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i40:I, reg dx5:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r46:V, reg i43:I, reg tmp27:V, reg l9:*, reg tmp28:V, reg r47:V, reg tmp29:*, reg tmp30:V, reg r48:I, reg k4:*, reg k5:V, reg ___:cls, reg r49:V, reg nmar:*, reg nmar1:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r50:V, reg i46:I, reg nmar4:V, reg r51:V, reg dtab2:*, reg dtab3:V, reg c19:L, reg i48:I, reg nmar6:V, reg dtab5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i50:I, reg nmar8:V, reg dx7:V, reg tmp31:*, reg tmp32:V, reg __1:cls, reg r52:V, reg prod:cls, reg r53:V, reg r54:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r55:V, reg r56:V, reg table5:*, reg table6:V, reg length2:cls, reg r57:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r58:V, reg r59:V, reg start1:*, reg start2:V, reg length3:cls, reg r60:V, reg ntab:*, reg ntab1:V, reg r61:V, reg c20:L, reg stop1:cls, reg r62:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r64:V, reg r65:V, reg C_LogLin:*, reg C_LogLin1:V, reg dtab6:*, reg dtab7:V, reg conf:*, reg conf1:V, reg table7:*, reg table8:V, reg start3:*, reg start4:V, reg nmar9:*, reg nmar10:V, reg eps1:*, reg eps2:V, reg iter1:*, reg iter2:V, reg vargs:dots, reg r66:V, reg print1:*, reg print2:V, reg c21:L, reg cat:cls, reg z:*, reg z1:V, reg c22:L, reg z3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r67:V, reg p3:p(V +), reg z4:*, reg z5:V, reg c23:L, reg z7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r69:V, reg c24:L, reg dx13:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg z8:*, reg z9:V, reg c25:L, reg dx17:V, reg z11:V, reg dr14:V, reg dc7:L, reg dx19:V, reg dx20:V, reg dx21:V, reg r70:V, reg __2:cls, reg r71:V, reg p4:p(V +), reg r73:V, reg z12:*, reg z13:V, reg c26:L, reg z15:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg r75:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r76:V, reg r77:V, reg table9:*, reg table10:V, reg attributes:cls, reg r78:V, reg l10:*, reg attributes__:cls, reg r79:V, reg as_vector:cls, reg table11:*, reg table12:V, reg c27:L, reg table14:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg start5:*, reg start6:V, reg r80:V, reg __3:cls, reg r81:V, reg p5:p(V +), reg r83:V, reg as_vector1:cls, reg fit3:*, reg fit4:V, reg c28:L, reg fit6:V, reg dr20:V, reg dc10:L, reg dx26:V, reg dx27:V, reg start7:*, reg start8:V, reg r84:V, reg __4:cls, reg r85:V, reg p6:p(V +), reg r87:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r88:V, reg r89:V, reg observed:*, reg observed1:V, reg expected:*, reg expected1:V, reg r90:V, reg r91:V, reg expected2:*, reg expected3:V, reg r92:V, reg sum:cls, reg r93:V, reg as_vector2:cls, reg table15:*, reg table16:V, reg c29:L, reg table18:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg table19:*, reg table20:V, reg fit7:*, reg fit8:V, reg r94:V, reg r95:V, reg __5:cls, reg r96:V, reg p7:p(V +), reg r98:V, reg as_vector3:cls, reg fit9:*, reg fit10:V, reg c30:L, reg fit12:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg table21:*, reg table22:V, reg fit13:*, reg fit14:V, reg r99:V, reg r100:V, reg __6:cls, reg r101:V, reg p8:p(V +), reg r103:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r106:V, reg r107:R, reg r108:V, reg observed2:*, reg observed3:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r111:V, reg r112:R, reg observed6:V, reg r113:V, reg observed7:*, reg observed8:V, reg expected4:*, reg expected5:V, reg r114:V, reg r115:V, reg r116:V, reg sum1:cls, reg r117:V, reg r118:V, reg r119:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r120:V, reg r121:V, reg nvar2:*, reg nvar3:V, reg r122:V, reg rep_int:cls, reg r123:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r124:V, reg r125:V, reg margin9:*, reg margin10:V, reg r126:I, reg s1:V, reg l11:I, reg i51:I, reg i52:I, reg i53:I, reg c31:L, reg x1:V, reg subsets:cls, reg margin11:*, reg margin12:V, reg c32:L, reg margin14:V, reg dr26:V, reg dc13:L, reg dx32:V, reg dx33:V, reg k6:*, reg k7:V, reg __7:cls, reg r127:V, reg p9:p(V +), reg r129:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r130:V, reg i58:I, reg r131:V, reg terms:*, reg terms1:V, reg r132:I, reg s2:V, reg l12:I, reg i59:I, reg i60:I, reg i61:I, reg i62:I, reg c33:L, reg x2:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r133:V, reg i71:I, reg i72:I, reg r134:V, reg dtab8:*, reg dtab9:V, reg c34:L, reg i75:I, reg i76:I, reg dtab11:V, reg dr28:V, reg dc14:L, reg dx34:V, reg i79:I, reg i80:I, reg dx35:V, reg terms2:*, reg terms3:V, reg c35:L, reg i83:I, reg i84:I, reg dtab13:V, reg terms5:V, reg dr30:V, reg dc15:L, reg dx36:V, reg i87:I, reg i88:I, reg dtab15:V, reg dx37:V, reg j:*, reg j1:V, reg __8:cls, reg r135:V, reg __9:cls, reg r136:V, reg r137:V, reg prod1:cls, reg r138:V, reg l13:*, reg c36:L, reg i91:I, reg i92:I, reg r140:V, reg l15:*, reg dr32:V, reg dc16:L, reg dx38:V, reg i95:I, reg i96:I, reg dx39:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r147:V, reg i101:I, reg i102:I, reg r148:V, reg l18:*, reg r149:V, reg r150:V, reg terms6:*, reg terms7:V, reg c37:L, reg i105:I, reg i106:I, reg r154:V, reg l20:*, reg r155:V, reg r156:R, reg terms9:V, reg dr34:V, reg dc17:L, reg dx40:V, reg i109:I, reg i110:I, reg r160:V, reg l22:*, reg r161:V, reg r162:R, reg dx41:V, reg j2:*, reg j3:V, reg __10:cls, reg r163:V, reg r164:V, reg r165:V, reg sum2:cls, reg r166:V, reg ___1:cls, reg r167:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r168:V, reg r169:V, reg varnames2:*, reg varnames3:V, reg c38:V, reg r170:V, reg c39:L, reg c41:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r171:V, reg c44:L, reg r172:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r173:V, reg c47:L, reg r174:V, reg varnames4:*, reg varnames5:V, reg nzchar:cls, reg r175:V, reg all:cls, reg r176:V, reg c48:L, reg c49:V, reg c51:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r177:V, reg r178:V, reg margin15:*, reg margin16:V, reg r179:I, reg s3:V, reg l23:I, reg i111:I, reg i112:I, reg i113:I, reg c52:L, reg x3:V, reg varnames6:*, reg varnames7:V, reg c53:L, reg i117:I, reg varnames9:V, reg dr36:V, reg dc18:L, reg dx42:V, reg i119:I, reg dx43:V, reg margin17:*, reg margin18:V, reg c54:L, reg i121:I, reg varnames11:V, reg margin20:V, reg dr38:V, reg dc19:L, reg dx44:V, reg i123:I, reg varnames13:V, reg dx45:V, reg k8:*, reg k9:V, reg __11:cls, reg r180:V, reg __12:cls, reg r181:V, reg l24:*, reg c55:L, reg i125:I, reg dx47:V, reg l26:*, reg dr40:V, reg dc20:L, reg dx49:V, reg i127:I, reg dx51:V, reg k10:*, reg k11:V, reg ____1:cls, reg r182:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r183:V, reg r184:V, reg ntab2:*, reg ntab3:V, reg r185:V, reg as_character:cls, reg r186:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r187:V, reg r188:V, reg lrt:*, reg lrt1:V, reg pearson:*, reg pearson1:V, reg ntab4:*, reg ntab5:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r189:V, reg ntab8:V, reg r190:V, reg df:*, reg df1:V, reg sum3:cls, reg r191:V, reg r192:V, reg r193:V, reg margin21:*, reg margin22:V, reg list:cls, reg r194:V, reg rfit:*, reg rfit1:V, reg c56:L, reg fit15:*, reg fit16:V, reg l27:*, reg c57:L, reg fit18:V, reg l29:*, reg dr42:V, reg dc21:L, reg dx52:V, reg fit20:V, reg dx53:V, reg r195:V, reg param1:*, reg param2:V, reg c58:L, reg sym33:cls, reg base33:cls, reg guard33:L, reg r196:V, reg r197:V, reg fit22:*, reg fit23:V, reg r198:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r199:V, reg r200:V, reg df2:*, reg df3:V, reg r201:I, reg c59:L, reg r203:V, reg dr44:V, reg dc22:L, reg dx54:V, reg dx55:V, reg df4:*, reg df5:V, reg r204:V, reg __13:cls, reg r205:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r206:V, reg r207:V, reg terms10:*, reg terms11:V, reg length4:cls, reg r208:V, reg r209:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r210:V, reg r211:V, reg parlen:*, reg parlen1:V, reg list1:cls, reg r212:V, reg character:cls, reg parlen2:*, reg parlen3:V, reg p10:p(V +), reg r214:V, reg mean:cls, reg fit24:*, reg fit25:V, reg p11:p(V +), reg r216:V, reg l30:*, reg c60:L, reg r218:V, reg l32:*, reg dr46:V, reg dc23:L, reg dx56:V, reg dx57:V, reg ____2:cls, reg r221:V, reg l33:*, reg c61:L, reg r223:S, reg l35:*, reg dr48:V, reg dc24:L, reg dx58:V, reg dx59:V, reg ___2:cls, reg r226:V, reg fit26:*, reg fit27:V, reg parval:*, reg parval1:V, reg c62:L, reg fit29:V, reg parval3:V, reg dr50:V, reg dc25:L, reg dx60:V, reg fit31:V, reg dx61:V, reg __14:cls, reg r227:V, reg r228:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r229:V, reg r230:V, reg terms12:*, reg terms13:V, reg r231:V, reg any1:cls, reg r232:V, reg c63:L, reg cbind:cls, reg dyadic:*, reg dyadic1:V, reg p12:p(V +), reg terms14:*, reg terms15:V, reg __15:cls, reg r234:V, reg p13:p(V +), reg r236:V, reg terms16:*, reg terms17:V, reg ___3:cls, reg r237:V, reg dyadic2:*, reg dyadic3:V, reg c64:L, reg dyadic5:V, reg dr52:V, reg dc26:L, reg dx62:V, reg dx63:V, reg order:cls, reg rowSums:cls, reg dyadic6:*, reg dyadic7:V, reg p14:p(V +), reg r239:V, reg p15:p(V +), reg r241:V, reg __16:cls, reg r242:V, reg parlen4:*, reg parlen5:V, reg r243:V, reg s4:V, reg l36:I, reg i129:I, reg i130:I, reg i131:I, reg c65:L, reg x4:V, reg which:cls, reg dyadic8:*, reg dyadic9:V, reg c66:L, reg dr54:V, reg dc27:L, reg dx64:V, reg dx65:V, reg i134:*, reg i135:V, reg r244:V, reg __17:cls, reg r245:V, reg r246:V, reg p16:p(V +), reg r248:V, reg apply:cls, reg fit32:*, reg fit33:V, reg p17:p(V +), reg vars:*, reg vars1:V, reg p18:p(V +), reg mean1:*, reg mean2:V, reg p19:p(V +), reg r252:V, reg l37:*, reg c67:L, reg i137:I, reg r254:V, reg l39:*, reg dr56:V, reg dc28:L, reg dx66:V, reg i139:I, reg dx67:V, reg i140:*, reg i141:V, reg ____3:cls, reg r257:V, reg paste:cls, reg varnames14:*, reg varnames15:V, reg c68:L, reg varnames17:V, reg dr58:V, reg dc29:L, reg dx68:V, reg dx69:V, reg vars2:*, reg vars3:V, reg __18:cls, reg r258:V, reg p20:p(V +), reg r260:V, reg l40:*, reg c69:L, reg i143:I, reg r262:V, reg l42:*, reg dr60:V, reg dc30:L, reg dx70:V, reg i145:I, reg dx71:V, reg i146:*, reg i147:V, reg ___4:cls, reg r265:V, reg sweep:cls, reg fit34:*, reg fit35:V, reg p21:p(V +), reg vars4:*, reg vars5:V, reg p22:p(V +), reg parval4:*, reg parval5:V, reg c70:L, reg parval7:V, reg dr62:V, reg dc31:L, reg dx72:V, reg dx73:V, reg i148:*, reg i149:V, reg __19:cls, reg r268:V, reg p23:p(V +), reg r270:V, reg parnam:*, reg parnam1:V, reg l43:*, reg names__:cls, reg r271:V, reg parval8:*, reg parval9:V, reg l44:*, reg c71:L, reg parval11:V, reg l46:*, reg dr64:V, reg dc32:L, reg dx74:V, reg parval13:V, reg dx75:V, reg r272:V, reg y:*, reg y1:V |
    mkenv;
    st table = table;
    st margin = margin;
    start_isMissing = missing.0(start);
    if start_isMissing then L0() else L1(start);
  L0():
    p = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      rep = ldf rep in base;
      r2 = dyn rep(1.0, <lang length(table)>);
      goto L0(r2);
    L2():
      r = dyn base(1.0, <lang length(table)>);
      goto L0(r);
    };
    goto L1(p);
  L1(start_orDefault):
    st start = start_orDefault;
    fit_isMissing = missing.0(fit);
    if fit_isMissing then L2(FALSE) else L2(fit);
  L2(fit_orDefault):
    st fit = fit_orDefault;
    eps_isMissing = missing.0(eps);
    if eps_isMissing then L3(0.1) else L3(eps);
  L3(eps_orDefault):
    st eps = eps_orDefault;
    iter_isMissing = missing.0(iter);
    if iter_isMissing then L4(20) else L4(iter);
  L4(iter_orDefault):
    st iter = iter_orDefault;
    param_isMissing = missing.0(param);
    if param_isMissing then L5(FALSE) else L5(param);
  L5(param_orDefault):
    st param = param_orDefault;
    print_isMissing = missing.0(print);
    if print_isMissing then L6(TRUE) else L6(print);
  L6(print_orDefault):
    st print = print_orDefault;
    fit1 = ld fit;
    check L90() else D0();
  D0():
    deopt 0 [fit1];
  L90():
    fit2 = force? fit1;
    checkMissing(fit2);
    st rfit = fit2;
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L91() else L92();
  L7(r5):
    st dtab = r5;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L95() else L96();
  L91():
    table1 = ld table;
    check L93() else D1();
  L92():
    r4 = dyn base1(<sym table>);
    goto L7(r4);
  D1():
    deopt 5 [table1];
  L8(r8):
    st nvar = r8;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L99() else L100();
  L93():
    table2 = force? table1;
    checkMissing(table2);
    dim = ldf dim in base;
    r6 = dyn dim(table2);
    check L94() else D2();
  L95():
    dtab = ld dtab;
    check L97() else D3();
  L96():
    r7 = dyn base2(<sym dtab>);
    goto L8(r7);
  D2():
    deopt 8 [r6];
  D3():
    deopt 12 [dtab];
  L9(r11):
    st ncon = r11;
    matrix = ldf matrix;
    check L103() else D7();
  L94():
    goto L7(r6);
  L97():
    dtab1 = force? dtab;
    checkMissing(dtab1);
    length = ldf length in base;
    r9 = dyn length(dtab1);
    check L98() else D4();
  L99():
    margin1 = ld margin;
    check L101() else D5();
  L100():
    r10 = dyn base3(<sym margin>);
    goto L9(r10);
  D4():
    deopt 15 [r9];
  D5():
    deopt 19 [margin1];
  D7():
    deopt 25 [];
  L98():
    goto L8(r9);
  L101():
    margin2 = force? margin1;
    checkMissing(margin2);
    length1 = ldf length in base;
    r12 = dyn length1(margin2);
    check L102() else D6();
  L103():
    p1 = prom<V +>{
      nvar = ld nvar;
      nvar1 = force? nvar;
      checkMissing(nvar1);
      return nvar1;
    };
    p2 = prom<V +>{
      ncon = ld ncon;
      ncon1 = force? ncon;
      checkMissing(ncon1);
      return ncon1;
    };
    r15 = dyn matrix[, nrow, ncol](0, p1, p2);
    check L104() else D8();
  D6():
    deopt 22 [r12];
  D8():
    deopt 31 [r15];
  L102():
    goto L9(r12);
  L104():
    st conf = r15;
    st nmar = 0.0;
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L105() else L106();
  L10(r17):
    st varnames = r17;
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L112() else L113();
  L105():
    sym5 = ldf dimnames;
    base5 = ldf dimnames in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L107() else L108();
  L106():
    r16 = dyn base4(<lang dimnames(table)>);
    goto L10(r16);
  L11(r19):
    names = ldf names in base;
    r21 = dyn names(r19);
    check L111() else D11();
  L12(r23):
    s = toForSeq(r23);
    l = length(s);
    i = 0;
    goto L13(i);
  L107():
    table3 = ld table;
    check L109() else D9();
  L108():
    r18 = dyn base5(<sym table>);
    goto L11(r18);
  L112():
    margin3 = ld margin;
    check L114() else D12();
  L113():
    r22 = dyn base6(<sym margin>);
    goto L12(r22);
  D9():
    deopt 40 [table3];
  D11():
    deopt 45 [r21];
  D12():
    deopt 48 [margin3];
  L13(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L115() else L30();
  L109():
    table4 = force? table3;
    checkMissing(table4);
    dimnames = ldf dimnames in base;
    r20 = dyn dimnames(table4);
    check L110() else D10();
  L111():
    goto L10(r21);
  L114():
    margin4 = force? margin3;
    checkMissing(margin4);
    r24 = seq_along(margin4);
    goto L12(r24);
  D10():
    deopt 43 [r20];
  L30():
    x = `[[`(s, i2, NULL, TRUE);
    st k = x;
    margin5 = ld margin;
    check L116() else D13();
  L110():
    goto L11(r20);
  L115():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L171() else L172();
  D13():
    deopt 51 [i2, margin5];
  L31(r56):
    st ntab = r56;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L175() else L176();
  L116():
    margin6 = force? margin5;
    checkMissing(margin6);
    c1 = `is.object`(margin6);
    if c1 then L117() else L118(i2, margin6);
  L171():
    table5 = ld table;
    check L173() else D36();
  L172():
    r55 = dyn base14(<sym table>);
    goto L31(r55);
  D36():
    deopt 136 [table5];
  L14(i8, dx1):
    st tmp = dx1;
    sym7 = ldf `is.character`;
    base7 = ldf `is.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L121() else L122();
  L32(r59):
    ntab = ld ntab;
    check L179() else D40();
  L117():
    dr = tryDispatchBuiltin.1("[[", margin6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L119() else L118(i2, dr);
  L118(i6, margin8):
    k = ld k;
    check L120() else D14();
  L173():
    table6 = force? table5;
    checkMissing(table6);
    length2 = ldf length in base;
    r57 = dyn length2(table6);
    check L174() else D37();
  L175():
    start1 = ld start;
    check L177() else D38();
  L176():
    r58 = dyn base15(<sym start>);
    goto L32(r58);
  D14():
    deopt 53 [i6, margin8, k];
  D37():
    deopt 139 [r57];
  D38():
    deopt 143 [start1];
  D40():
    deopt 146 [r59, ntab];
  L15(i11, r27):
    c3 = `as.logical`(r27);
    if c3 then L124() else L16();
  L119():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(i2, dx);
  L120():
    k1 = force? k;
    __ = ldf `[[` in base;
    r25 = dyn __(margin8, k1);
    goto L14(i6, r25);
  L121():
    tmp = ld tmp;
    check L123() else D15();
  L122():
    r26 = dyn base7(<sym tmp>);
    goto L15(i8, r26);
  L174():
    goto L31(r57);
  L177():
    start2 = force? start1;
    checkMissing(start2);
    length3 = ldf length in base;
    r60 = dyn length3(start2);
    check L178() else D39();
  L179():
    ntab1 = force? ntab;
    checkMissing(ntab1);
    r61 = `!=`(r59, ntab1);
    c20 = `as.logical`(r61);
    if c20 then L180() else L33();
  D15():
    deopt 58 [i8, tmp];
  D39():
    deopt 146 [r60];
  L16():
    goto L19(i11);
  L19(i21):
    sym9 = ldf `is.numeric`;
    base9 = ldf `is.numeric` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L136() else L137();
  L33():
    goto L34();
  L34():
    sym16 = ldf `.Call`;
    base16 = ldf `.Call` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L184() else L185();
  L123():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    c2 = `is.character`(tmp1);
    goto L15(i8, c2);
  L124():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L125() else L126();
  L178():
    goto L32(r60);
  L180():
    stop1 = ldf stop;
    check L181() else D41();
  D41():
    deopt 150 [];
  L17(i16, r29):
    st tmp = r29;
    tmp4 = ld tmp;
    check L130() else D19();
  L20(i24, r33):
    r35 = `!`(r33);
    c5 = `as.logical`(r35);
    if c5 then L21(i24, c5) else L140();
  L35(r65):
    st z = r65;
    print1 = ld print;
    check L194() else D51();
  L125():
    tmp2 = ld tmp;
    check L127() else D16();
  L126():
    r28 = dyn base8(<sym tmp>, <sym varnames>);
    goto L17(i11, r28);
  L136():
    tmp11 = ld tmp;
    check L138() else D21();
  L137():
    r32 = dyn base9(<sym tmp>);
    goto L20(i21, r32);
  L181():
    r62 = dyn stop1("'start' and 'table' must be same length");
    check L182() else D42();
  L184():
    C_LogLin = ld C_LogLin;
    check L186() else D43();
  L185():
    r64 = dyn base16(<sym C_LogLin>, <sym dtab>, <sym conf>, <sym table>, <sym start>, <sym nmar>, <sym eps>, <sym iter>);
    goto L35(r64);
  D16():
    deopt 63 [i11, tmp2];
  D19():
    deopt 72 [i16, tmp4];
  D21():
    deopt 83 [i21, tmp11];
  D42():
    deopt 152 [r62];
  D43():
    deopt 156 [C_LogLin];
  D51():
    deopt 167 [print1];
  L21(i25, c6):
    c17 = `as.logical`(c6);
    if c17 then L150() else L24();
  L127():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    varnames = ld varnames;
    check L128() else D17();
  L130():
    tmp5 = force? tmp4;
    checkMissing(tmp5);
    l1 = ld margin;
    c4 = `is.object`(l1);
    if c4 then L131() else L132(i16, tmp5, l1);
  L138():
    tmp12 = force? tmp11;
    checkMissing(tmp12);
    is_numeric = ldf `is.numeric` in base;
    r34 = dyn is_numeric(tmp12);
    check L139() else D22();
  L140():
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L141() else L142();
  L182():
    goto L34();
  L186():
    C_LogLin1 = force? C_LogLin;
    checkMissing(C_LogLin1);
    dtab6 = ld dtab;
    check L187() else D44();
  L194():
    print2 = force? print1;
    checkMissing(print2);
    c21 = `as.logical`(print2);
    if c21 then L195() else L36();
  D17():
    deopt 65 [i11, varnames];
  D22():
    deopt 86 [i21, r34];
  D44():
    deopt 157 [C_LogLin1, dtab6];
  L18(i20, tmp9, dx3):
    st margin = dx3;
    goto L19(i20);
  L22(i29, c10, r37):
    c14 = `as.logical`(r37);
    c15 = `||`(c10, c14);
    goto L21(i29, c15);
  L24():
    goto L25(i25);
  L25(i36):
    tmp17 = ld tmp;
    check L154() else D29();
  L36():
    goto L37();
  L37():
    z12 = ld z;
    check L199() else D54();
  L128():
    varnames1 = force? varnames;
    checkMissing(varnames1);
    match = ldf match in base;
    r30 = dyn match(tmp3, varnames1, NA_INT, NULL);
    check L129() else D18();
  L131():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, tmp5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L133() else L132(i16, tmp5, dr2);
  L132(i18, tmp7, l3):
    k2 = ld k;
    check L134() else D20();
  L139():
    goto L20(i21, r34);
  L141():
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L143() else L144();
  L142():
    r36 = dyn base10(<lang `|`(is.na(tmp), `<=`(tmp, 0.0))>);
    goto L22(i24, c5, r36);
  L150():
    stop = ldf stop;
    check L151() else D27();
  L187():
    dtab7 = force? dtab6;
    checkMissing(dtab7);
    conf = ld conf;
    check L188() else D45();
  L195():
    cat = ldf cat;
    check L196() else D52();
  D18():
    deopt 70 [i11, r30];
  D20():
    deopt 75 [i18, tmp7, l3, tmp5, k2];
  D27():
    deopt 104 [i25];
  D29():
    deopt 109 [i36, tmp17];
  D45():
    deopt 158 [C_LogLin1, dtab7, conf];
  D52():
    deopt 170 [];
  D54():
    deopt 178 [z12];
  L23(i32, c13, r39):
    tmp15 = ld tmp;
    check L147() else D25();
  L129():
    goto L17(i11, r30);
  L133():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(i16, tmp5, dx2);
  L134():
    k3 = force? k2;
    ____ = ldf `[[<-` in base;
    r31 = dyn ____(l3, tmp5, k3);
    goto L18(i18, tmp7, r31);
  L143():
    tmp13 = ld tmp;
    check L145() else D23();
  L144():
    r38 = dyn base11(<sym tmp>);
    goto L23(i24, c5, r38);
  L151():
    r44 = dyn stop("'margin' must contain names or numbers corresponding to 'table'");
    check L152() else D28();
  L154():
    tmp18 = force? tmp17;
    checkMissing(tmp18);
    l4 = ld conf;
    c18 = `is.object`(l4);
    if c18 then L155() else L156(i36, tmp18, l4);
  L188():
    conf1 = force? conf;
    checkMissing(conf1);
    table7 = ld table;
    check L189() else D46();
  L196():
    p3 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c22 = `is.object`(z1);
      if c22 then L1() else L2(z1);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", z1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(z3):
      r67 = `$`(z3, <sym nlast>);
      goto L0(r67);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p4 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      c23 = `is.object`(z5);
      if c23 then L2() else L3(z5);
    L1(dx11):
      c24 = `is.object`(dx11);
      if c24 then L5() else L6(dx11);
    L2():
      dr10 = tryDispatchBuiltin.1("$", z5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(z7):
      r69 = `$`(z7, <sym dev>);
      goto L1(r69);
    L0(dx15):
      return dx15;
    L4():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx10);
    L5():
      dr12 = tryDispatchBuiltin.1("[", dx11);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx13):
      z8 = ld z;
      z9 = force? z8;
      checkMissing(z9);
      c25 = `is.object`(z9);
      if c25 then L9() else L10(dx13, z9);
    L7():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    L8(dx20, dx21):
      __2 = ldf `[` in base;
      r71 = dyn __2(dx20, dx21);
      goto L0(r71);
    L9():
      dr14 = tryDispatchBuiltin.1("$", z9);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L11() else L10(dx13, dr14);
    L10(dx17, z11):
      r70 = `$`(z11, <sym nlast>);
      goto L8(dx17, r70);
    L11():
      dx19 = getTryDispatchBuiltinValue(dr14);
      goto L8(dx13, dx19);
    };
    r73 = dyn cat(p3, "iterations: deviation", p4, "\n");
    check L197() else D53();
  L199():
    z13 = force? z12;
    checkMissing(z13);
    c26 = `is.object`(z13);
    if c26 then L201() else L202(z13);
  D23():
    deopt 92 [i24, c5, tmp13];
  D25():
    deopt 95 [i32, c13, r39, tmp15];
  D28():
    deopt 106 [i25, r44];
  D46():
    deopt 159 [C_LogLin1, dtab7, conf1, table7];
  D53():
    deopt 175 [r73];
  L26(i40, dx5):
    st conf = dx5;
    nmar = ld nmar;
    check L162() else D32();
  L145():
    tmp14 = force? tmp13;
    checkMissing(tmp14);
    is_na = ldf `is.na` in base;
    r40 = dyn is_na(tmp14);
    check L146() else D24();
  L147():
    tmp16 = force? tmp15;
    checkMissing(tmp16);
    r41 = `<=`(tmp16, 0.0);
    r42 = `||`(r39, r41);
    any = ldf any in base;
    r43 = dyn any(r42);
    check L148() else D26();
  L152():
    goto L25(i25);
  L155():
    dr4 = tryDispatchBuiltin.0("[<-", l4, tmp18);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L157() else L156(i36, tmp18, dr4);
  L156(i38, tmp20, l6):
    sym12 = ldf seq_along;
    base12 = ldf seq_along in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L158() else L159();
  L189():
    table8 = force? table7;
    checkMissing(table8);
    start3 = ld start;
    check L190() else D47();
  L197():
    goto L37();
  L200(dx23):
    st fit = dx23;
    sym17 = ldf attributes;
    base17 = ldf attributes in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L204() else L205();
  L201():
    dr16 = tryDispatchBuiltin.1("$", z13);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L203() else L202(dr16);
  L202(z15):
    r75 = `$`(z15, <sym fit>);
    goto L200(r75);
  D24():
    deopt 95 [i24, c5, r40];
  D26():
    deopt 101 [i32, c13, r43];
  D32():
    deopt 119 [i40, nmar];
  D47():
    deopt 160 [C_LogLin1, dtab7, conf1, table8, start3];
  L27(i43, tmp27, l9, tmp28, r47):
    k4 = ld k;
    check L161() else D31();
  L38(r77):
    l10 = ld fit;
    attributes__ = ldf `attributes<-`;
    check L208() else D57();
  L146():
    goto L23(i24, c5, r40);
  L148():
    goto L22(i32, c13, r43);
  L157():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L26(i36, dx4);
  L158():
    tmp29 = ld tmp;
    check L160() else D30();
  L159():
    r46 = dyn base12(<sym tmp>);
    goto L27(i38, tmp20, l6, tmp18, r46);
  L162():
    nmar1 = force? nmar;
    checkMissing(nmar1);
    sym13 = ldf prod;
    base13 = ldf prod in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L163() else L164();
  L190():
    start4 = force? start3;
    checkMissing(start4);
    nmar9 = ld nmar;
    check L191() else D48();
  L203():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L200(dx22);
  L204():
    table9 = ld table;
    check L206() else D55();
  L205():
    r76 = dyn base17(<sym table>);
    goto L38(r76);
  D30():
    deopt 113 [i38, tmp20, l6, tmp18, tmp29];
  D31():
    deopt 115 [i43, tmp27, l9, tmp28, r47, k4];
  D48():
    deopt 161 [C_LogLin1, dtab7, conf1, table8, start4, nmar9];
  D55():
    deopt 184 [table9];
  D57():
    deopt 189 [r77, l10, r77];
  L28(i46, nmar4, r51):
    r54 = `+`(nmar4, r51);
    st nmar = r54;
    goto L13(i46);
  L160():
    tmp30 = force? tmp29;
    checkMissing(tmp30);
    r48 = seq_along(tmp30);
    goto L27(i38, tmp20, l6, tmp18, r48);
  L161():
    k5 = force? k4;
    ___ = ldf `[<-` in base;
    r49 = dyn ___(l9, tmp28, r47, k5);
    goto L26(i43, r49);
  L163():
    dtab2 = ld dtab;
    check L165() else D33();
  L164():
    r50 = dyn base13(<lang `[`(dtab, tmp)>);
    goto L28(i40, nmar1, r50);
  L191():
    nmar10 = force? nmar9;
    checkMissing(nmar10);
    eps1 = ld eps;
    check L192() else D49();
  L206():
    table10 = force? table9;
    checkMissing(table10);
    attributes = ldf attributes in base;
    r78 = dyn attributes(table10);
    check L207() else D56();
  L208():
    r79 = dyn attributes__(l10, NULL, r77);
    check L209() else D58();
  D33():
    deopt 122 [i40, nmar1, dtab2];
  D49():
    deopt 162 [C_LogLin1, dtab7, conf1, table8, start4, nmar10, eps1];
  D56():
    deopt 187 [r78];
  D58():
    deopt 191 [r77, r79];
  L165():
    dtab3 = force? dtab2;
    checkMissing(dtab3);
    c19 = `is.object`(dtab3);
    if c19 then L166() else L167(i40, nmar1, dtab3);
  L192():
    eps2 = force? eps1;
    checkMissing(eps2);
    iter1 = ld iter;
    check L193() else D50();
  L207():
    goto L38(r78);
  L209():
    st fit = r79;
    as_vector = ldf `as.vector`;
    check L210() else D59();
  D50():
    deopt 163 [C_LogLin1, dtab7, conf1, table8, start4, nmar10, eps2, iter1];
  D59():
    deopt 194 [];
  L29(i50, nmar8, dx7):
    prod = ldf prod in base;
    r53 = dyn prod(dx7);
    check L170() else D35();
  L166():
    dr6 = tryDispatchBuiltin.1("[", dtab3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L168() else L167(i40, nmar1, dr6);
  L167(i48, nmar6, dtab5):
    tmp31 = ld tmp;
    check L169() else D34();
  L193():
    iter2 = force? iter1;
    checkMissing(iter2);
    vargs = dots[dtab7, conf1, table8, start4, nmar10, eps2, iter2];
    r66 = `.Call`(C_LogLin1, vargs, <missing>);
    goto L35(r66);
  L210():
    p5 = prom<V +>{
      table11 = ld table;
      table12 = force? table11;
      checkMissing(table12);
      c27 = `is.object`(table12);
      if c27 then L1() else L2(table12);
    L0(dx25):
      return dx25;
    L1():
      dr18 = tryDispatchBuiltin.1("[", table12);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(table14):
      start5 = ld start;
      start6 = force? start5;
      checkMissing(start6);
      r80 = `>`(start6, 0.0);
      __3 = ldf `[` in base;
      r81 = dyn __3(table14, r80);
      goto L0(r81);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx24);
    };
    r83 = dyn as_vector(p5);
    check L211() else D60();
  D34():
    deopt 124 [i48, nmar6, dtab5, tmp31];
  D35():
    deopt 128 [i50, nmar8, r53];
  D60():
    deopt 196 [r83];
  L168():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L29(i40, nmar1, dx6);
  L169():
    tmp32 = force? tmp31;
    __1 = ldf `[` in base;
    r52 = dyn __1(dtab5, tmp32);
    goto L29(i48, nmar6, r52);
  L170():
    goto L28(i50, nmar8, r53);
  L211():
    st observed = r83;
    as_vector1 = ldf `as.vector`;
    check L212() else D61();
  D61():
    deopt 199 [];
  L212():
    p6 = prom<V +>{
      fit3 = ld fit;
      fit4 = force? fit3;
      checkMissing(fit4);
      c28 = `is.object`(fit4);
      if c28 then L1() else L2(fit4);
    L0(dx27):
      return dx27;
    L1():
      dr20 = tryDispatchBuiltin.1("[", fit4);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(fit6):
      start7 = ld start;
      start8 = force? start7;
      checkMissing(start8);
      r84 = `>`(start8, 0.0);
      __4 = ldf `[` in base;
      r85 = dyn __4(fit6, r84);
      goto L0(r85);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx26);
    };
    r87 = dyn as_vector1(p6);
    check L213() else D62();
  D62():
    deopt 201 [r87];
  L213():
    st expected = r87;
    sym18 = ldf sum;
    base18 = ldf sum in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L214() else L215();
  L39(r89):
    st pearson = r89;
    as_vector2 = ldf `as.vector`;
    check L220() else D67();
  L214():
    observed = ld observed;
    check L216() else D63();
  L215():
    r88 = dyn base18(<lang `/`(`^`(`(`(`-`(observed, expected)), 2.0), expected)>);
    goto L39(r88);
  D63():
    deopt 205 [observed];
  D67():
    deopt 217 [];
  L216():
    observed1 = force? observed;
    checkMissing(observed1);
    expected = ld expected;
    check L217() else D64();
  L220():
    p7 = prom<V +>{
      table15 = ld table;
      table16 = force? table15;
      checkMissing(table16);
      c29 = `is.object`(table16);
      if c29 then L1() else L2(table16);
    L0(dx29):
      return dx29;
    L1():
      dr22 = tryDispatchBuiltin.1("[", table16);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(table18):
      table19 = ld table;
      table20 = force? table19;
      checkMissing(table20);
      fit7 = ld fit;
      fit8 = force? fit7;
      checkMissing(fit8);
      r94 = `*`(table20, fit8);
      r95 = `>`(r94, 0.0);
      __5 = ldf `[` in base;
      r96 = dyn __5(table18, r95);
      goto L0(r96);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx28);
    };
    r98 = dyn as_vector2(p7);
    check L221() else D68();
  D64():
    deopt 206 [observed1, expected];
  D68():
    deopt 219 [r98];
  L217():
    expected1 = force? expected;
    checkMissing(expected1);
    r90 = `-`(observed1, expected1);
    r91 = `^`(r90, 2.0);
    expected2 = ld expected;
    check L218() else D65();
  L221():
    st observed = r98;
    as_vector3 = ldf `as.vector`;
    check L222() else D69();
  D65():
    deopt 210 [r91, expected2];
  D69():
    deopt 222 [];
  L218():
    expected3 = force? expected2;
    checkMissing(expected3);
    r92 = `/`(r91, expected3);
    sum = ldf sum in base;
    r93 = dyn sum(r92);
    check L219() else D66();
  L222():
    p8 = prom<V +>{
      fit9 = ld fit;
      fit10 = force? fit9;
      checkMissing(fit10);
      c30 = `is.object`(fit10);
      if c30 then L1() else L2(fit10);
    L0(dx31):
      return dx31;
    L1():
      dr24 = tryDispatchBuiltin.1("[", fit10);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(fit12):
      table21 = ld table;
      table22 = force? table21;
      checkMissing(table22);
      fit13 = ld fit;
      fit14 = force? fit13;
      checkMissing(fit14);
      r99 = `*`(table22, fit14);
      r100 = `>`(r99, 0.0);
      __6 = ldf `[` in base;
      r101 = dyn __6(fit12, r100);
      goto L0(r101);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx30);
    };
    r103 = dyn as_vector3(p8);
    check L223() else D70();
  D66():
    deopt 214 [r93];
  D70():
    deopt 224 [r103];
  L219():
    goto L39(r93);
  L223():
    st expected = r103;
    sym19 = ldf sum;
    base19 = ldf sum in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L224() else L225();
  L40(r107, r108):
    r118 = `*`(r107, r108);
    st lrt = r118;
    r119 = clos inner2501545716;
    st subsets = r119;
    sym21 = ldf `rep.int`;
    base21 = ldf `rep.int` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L232() else L233();
  L224():
    observed2 = ld observed;
    check L226() else D71();
  L225():
    r106 = dyn base19(<lang `*`(observed, log(`/`(observed, expected)))>);
    goto L40(2.0, r106);
  D71():
    deopt 229 [2.0, observed2];
  L42(r121):
    st df = r121;
    sym22 = ldf seq_along;
    base22 = ldf seq_along in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L236() else L237();
  L226():
    observed3 = force? observed2;
    checkMissing(observed3);
    sym20 = ldf log;
    base20 = ldf log in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L227() else L228();
  L232():
    nvar2 = ld nvar;
    check L234() else D75();
  L233():
    r120 = dyn base21(0.0, <lang `^`(2.0, nvar)>);
    goto L42(r120);
  D75():
    deopt 248 [2.0, nvar2];
  L41(r112, observed6, r113):
    r116 = `*`(observed6, r113);
    sum1 = ldf sum in base;
    r117 = dyn sum1(r116);
    check L231() else D74();
  L43(r125):
    s1 = toForSeq(r125);
    l11 = length(s1);
    i51 = 0;
    goto L44(i51);
  L227():
    observed7 = ld observed;
    check L229() else D72();
  L228():
    r111 = dyn base20(<lang `/`(observed, expected)>);
    goto L41(2.0, observed3, r111);
  L234():
    nvar3 = force? nvar2;
    checkMissing(nvar3);
    r122 = `^`(2.0, nvar3);
    rep_int = ldf `rep.int` in base;
    r123 = dyn rep_int(0.0, r122);
    check L235() else D76();
  L236():
    margin9 = ld margin;
    check L238() else D77();
  L237():
    r124 = dyn base22(<sym margin>);
    goto L43(r124);
  D72():
    deopt 231 [2.0, observed3, observed7];
  D74():
    deopt 238 [r112, r117];
  D76():
    deopt 252 [r123];
  D77():
    deopt 255 [margin9];
  L44(i52):
    i53 = `+`.1(i52, 1);
    c31 = `<`.1(l11, i53);
    if c31 then L239() else L54();
  L229():
    observed8 = force? observed7;
    checkMissing(observed8);
    expected4 = ld expected;
    check L230() else D73();
  L231():
    goto L40(r112, r117);
  L235():
    goto L42(r123);
  L238():
    margin10 = force? margin9;
    checkMissing(margin10);
    r126 = seq_along(margin10);
    goto L43(r126);
  D73():
    deopt 232 [2.0, observed3, observed8, expected4];
  L54():
    x1 = `[[`(s1, i53, NULL, TRUE);
    st k = x1;
    subsets = ldf subsets;
    check L240() else D78();
  L230():
    expected5 = force? expected4;
    checkMissing(expected5);
    r114 = `/`(observed8, expected5);
    r115 = log(r114, 2.718281828459045);
    goto L41(2.0, observed3, r115);
  L239():
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L269() else L270();
  D78():
    deopt 259 [i53];
  L55(r169):
    r170 = `!`(r169);
    c39 = `as.logical`(r170);
    if c39 then L272() else L56(c39);
  L240():
    p9 = prom<V +>{
      margin11 = ld margin;
      margin12 = force? margin11;
      checkMissing(margin12);
      c32 = `is.object`(margin12);
      if c32 then L1() else L2(margin12);
    L0(dx33):
      return dx33;
    L1():
      dr26 = tryDispatchBuiltin.1("[[", margin12);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(margin14):
      k6 = ld k;
      k7 = force? k6;
      __7 = ldf `[[` in base;
      r127 = dyn __7(margin14, k7);
      goto L0(r127);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx32);
    };
    r129 = dyn subsets(p9);
    check L241() else D79();
  L269():
    varnames2 = ld varnames;
    check L271() else D88();
  L270():
    r168 = dyn base26(<sym varnames>);
    goto L55(r168);
  D79():
    deopt 261 [i53, r129];
  D88():
    deopt 304 [varnames2];
  L56(c41):
    c51 = `as.logical`(c41);
    if c51 then L281() else L59();
  L241():
    st terms = r129;
    sym23 = ldf seq_along;
    base23 = ldf seq_along in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L242() else L243();
  L271():
    varnames3 = force? varnames2;
    checkMissing(varnames3);
    c38 = `==`(varnames3, NULL);
    goto L55(c38);
  L272():
    sym27 = ldf all;
    base27 = ldf all in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L273() else L274();
  L45(i58, r131):
    s2 = toForSeq(r131);
    l12 = length(s2);
    i59 = 0;
    goto L46(i58, i59);
  L57(c44, r172):
    c48 = `as.logical`(r172);
    c49 = `&&`(c44, c48);
    goto L56(c49);
  L59():
    sym30 = ldf `as.character`;
    base30 = ldf `as.character` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L300() else L301();
  L66():
    sym31 = ldf list;
    base31 = ldf list in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L304() else L305();
  L242():
    terms = ld terms;
    check L244() else D80();
  L243():
    r130 = dyn base23(<sym terms>);
    goto L45(i53, r130);
  L273():
    sym28 = ldf nzchar;
    base28 = ldf nzchar in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L275() else L276();
  L274():
    r171 = dyn base27(<lang nzchar(varnames)>);
    goto L57(c39, r171);
  L281():
    sym29 = ldf seq_along;
    base29 = ldf seq_along in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L282() else L283();
  D80():
    deopt 264 [i53, terms];
  L46(i60, i61):
    i62 = `+`.1(i61, 1);
    c33 = `<`.1(l12, i62);
    if c33 then L245() else L53();
  L58(c47, r174):
    all = ldf all in base;
    r176 = dyn all(r174);
    check L279() else D91();
  L60(r178):
    s3 = toForSeq(r178);
    l23 = length(s3);
    i111 = 0;
    goto L61(i111);
  L67(r184):
    st varnames = r184;
    goto L66();
  L68(r188):
    st y = r188;
    rfit = ld rfit;
    check L315() else D106();
  L244():
    terms1 = force? terms;
    checkMissing(terms1);
    r132 = seq_along(terms1);
    goto L45(i53, r132);
  L275():
    varnames4 = ld varnames;
    check L277() else D89();
  L276():
    r173 = dyn base28(<sym varnames>);
    goto L58(c39, r173);
  L282():
    margin15 = ld margin;
    check L284() else D92();
  L283():
    r177 = dyn base29(<sym margin>);
    goto L60(r177);
  L300():
    ntab2 = ld ntab;
    check L302() else D97();
  L301():
    r183 = dyn base30(<lang `:`(1.0, ntab)>);
    goto L67(r183);
  L304():
    lrt = ld lrt;
    check L306() else D99();
  L305():
    r187 = dyn base31[lrt, pearson, df, margin](<sym lrt>, <sym pearson>, <lang `-`(`-`(ntab, sum(df)), 1.0)>, <sym margin>);
    goto L68(r187);
  D89():
    deopt 312 [c39, varnames4];
  D91():
    deopt 317 [c47, r176];
  D92():
    deopt 320 [margin15];
  D97():
    deopt 342 [1.0, ntab2];
  D99():
    deopt 350 [lrt];
  D106():
    deopt 373 [rfit];
  L53():
    x2 = `[[`(s2, i62, NULL, TRUE);
    st j = x2;
    sym24 = ldf prod;
    base24 = ldf prod in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L246() else L247();
  L61(i112):
    i113 = `+`.1(i112, 1);
    c52 = `<`.1(l23, i113);
    if c52 then L285() else L65();
  L245():
    goto L44(i60);
  L277():
    varnames5 = force? varnames4;
    checkMissing(varnames5);
    nzchar = ldf nzchar in base;
    r175 = dyn nzchar(varnames5);
    check L278() else D90();
  L279():
    goto L57(c47, r176);
  L284():
    margin16 = force? margin15;
    checkMissing(margin16);
    r179 = seq_along(margin16);
    goto L60(r179);
  L302():
    ntab3 = force? ntab2;
    checkMissing(ntab3);
    r185 = `:`(1.0, ntab3);
    as_character = ldf `as.character` in base;
    r186 = dyn as_character(r185);
    check L303() else D98();
  L306():
    lrt1 = force? lrt;
    checkMissing(lrt1);
    pearson = ld pearson;
    check L307() else D100();
  L315():
    rfit1 = force? rfit;
    checkMissing(rfit1);
    c56 = `as.logical`(rfit1);
    if c56 then L316() else L70();
  D90():
    deopt 315 [c39, r175];
  D98():
    deopt 346 [r186];
  D100():
    deopt 353 [pearson];
  L47(i71, i72, r134):
    l13 = ld df;
    c36 = `is.object`(l13);
    if c36 then L258() else L259(i71, i72, r134, l13);
  L65():
    x3 = `[[`(s3, i113, NULL, TRUE);
    st k = x3;
    varnames6 = ld varnames;
    check L286() else D93();
  L70():
    goto L71();
  L71():
    param1 = ld param;
    check L323() else D108();
  L246():
    dtab8 = ld dtab;
    check L248() else D81();
  L247():
    r133 = dyn base24(<lang `-`(`[`(dtab, `[[`(terms, j)), 1.0)>);
    goto L47(i60, i62, r133);
  L278():
    goto L58(c39, r175);
  L285():
    goto L66();
  L303():
    goto L67(r186);
  L307():
    pearson1 = force? pearson;
    checkMissing(pearson1);
    ntab4 = ld ntab;
    check L308() else D101();
  L316():
    fit15 = ld fit;
    check L317() else D107();
  D81():
    deopt 269 [i60, i62, dtab8];
  D93():
    deopt 323 [i113, varnames6];
  D101():
    deopt 356 [ntab4];
  D107():
    deopt 375 [fit15];
  D108():
    deopt 382 [param1];
  L50(i95, i96, dx39):
    st df = dx39;
    goto L46(i95, i96);
  L248():
    dtab9 = force? dtab8;
    checkMissing(dtab9);
    c34 = `is.object`(dtab9);
    if c34 then L249() else L250(i60, i62, dtab9);
  L258():
    dr32 = tryDispatchBuiltin.0("[<-", l13, r134);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L260() else L259(i71, i72, r134, dr32);
  L259(i91, i92, r140, l15):
    sym25 = ldf sum;
    base25 = ldf sum in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L261() else L262();
  L286():
    varnames7 = force? varnames6;
    checkMissing(varnames7);
    c53 = `is.object`(varnames7);
    if c53 then L287() else L288(i113, varnames7);
  L308():
    ntab5 = force? ntab4;
    checkMissing(ntab5);
    sym32 = ldf sum;
    base32 = ldf sum in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L309() else L310();
  L317():
    fit16 = force? fit15;
    checkMissing(fit16);
    l27 = ld y;
    c57 = `is.object`(l27);
    if c57 then L319() else L320(fit16, l27);
  L323():
    param2 = force? param1;
    checkMissing(param2);
    c58 = `as.logical`(param2);
    if c58 then L324() else L72();
  L48(i79, i80, dx35):
    r137 = `-`(dx35, 1.0);
    prod1 = ldf prod in base;
    r138 = dyn prod1(r137);
    check L257() else D84();
  L51(i101, i102, r148, l18, r149, r150):
    ___1 = ldf `[<-` in base;
    r167 = dyn ___1(l18, r149, r150);
    goto L50(i101, i102, r167);
  L62(i119, dx43):
    l24 = ld margin;
    c55 = `is.object`(l24);
    if c55 then L295() else L296(i119, dx43, l24);
  L69(ntab8, r190):
    r192 = `-`(ntab8, r190);
    r193 = `-`(r192, 1.0);
    margin21 = ld margin;
    check L313() else D104();
  L72():
    goto L89();
  L89():
    y = ld y;
    check L401() else D146();
  L249():
    dr28 = tryDispatchBuiltin.1("[", dtab9);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L251() else L250(i60, i62, dr28);
  L250(i75, i76, dtab11):
    terms2 = ld terms;
    check L252() else D82();
  L260():
    dx38 = getTryDispatchBuiltinValue(dr32);
    goto L50(i71, i72, dx38);
  L261():
    terms6 = ld terms;
    check L263() else D85();
  L262():
    r147 = dyn base25(<lang `^`(2.0, `(`(`-`(`[[`(terms, j), 1.0)))>);
    goto L51(i91, i92, r140, l15, r134, r147);
  L287():
    dr36 = tryDispatchBuiltin.1("[", varnames7);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L289() else L288(i113, dr36);
  L288(i117, varnames9):
    margin17 = ld margin;
    check L290() else D94();
  L309():
    df = ld df;
    check L311() else D102();
  L310():
    r189 = dyn base32(<sym df>);
    goto L69(ntab5, r189);
  L318(fit20, dx53):
    st y = dx53;
    goto L71();
  L319():
    dr42 = tryDispatchBuiltin.0("$<-", l27, fit16);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L321() else L320(fit16, dr42);
  L320(fit18, l29):
    r195 = `$<-`(l29, <sym fit>, fit16);
    goto L318(fit18, r195);
  L324():
    sym33 = ldf log;
    base33 = ldf log in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L325() else L326();
  D82():
    deopt 271 [i75, i76, dtab11, terms2];
  D84():
    deopt 280 [i79, i80, r138];
  D85():
    deopt 285 [i91, i92, r140, l15, r134, 2.0, terms6];
  D94():
    deopt 325 [i117, varnames9, margin17];
  D102():
    deopt 359 [ntab5, df];
  D104():
    deopt 367 [margin21];
  D146():
    deopt 540 [y];
  L64(i127, dx51):
    st margin = dx51;
    goto L61(i127);
  L73(r197):
    st fit = r197;
    sym34 = ldf seq_along;
    base34 = ldf seq_along in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L328() else L329();
  L251():
    dx34 = getTryDispatchBuiltinValue(dr28);
    goto L48(i60, i62, dx34);
  L252():
    terms3 = force? terms2;
    checkMissing(terms3);
    c35 = `is.object`(terms3);
    if c35 then L253() else L254(i75, i76, dtab11, terms3);
  L257():
    goto L47(i79, i80, r138);
  L263():
    terms7 = force? terms6;
    checkMissing(terms7);
    c37 = `is.object`(terms7);
    if c37 then L264() else L265(i91, i92, r140, l15, r134, 2.0, terms7);
  L289():
    dx42 = getTryDispatchBuiltinValue(dr36);
    goto L62(i113, dx42);
  L290():
    margin18 = force? margin17;
    checkMissing(margin18);
    c54 = `is.object`(margin18);
    if c54 then L291() else L292(i117, varnames9, margin18);
  L295():
    dr40 = tryDispatchBuiltin.0("[[<-", l24, dx43);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L297() else L296(i119, dx43, dr40);
  L296(i125, dx47, l26):
    k10 = ld k;
    check L298() else D96();
  L311():
    df1 = force? df;
    checkMissing(df1);
    sum3 = ldf sum in base;
    r191 = dyn sum3(df1);
    check L312() else D103();
  L313():
    margin22 = force? margin21;
    checkMissing(margin22);
    list = ldf list in base;
    r194 = dyn list(lrt1, pearson1, r193, margin22);
    check L314() else D105();
  L321():
    dx52 = getTryDispatchBuiltinValue(dr42);
    goto L318(fit16, dx52);
  L325():
    fit22 = ld fit;
    check L327() else D109();
  L326():
    r196 = dyn base33(<sym fit>);
    goto L73(r196);
  L401():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D96():
    deopt 332 [i125, dx47, l26, dx43, k10];
  D103():
    deopt 362 [ntab5, r191];
  D105():
    deopt 371 [r194];
  D109():
    deopt 385 [fit22];
  L49(i87, i88, dtab15, dx37):
    __9 = ldf `[` in base;
    r136 = dyn __9(dtab15, dx37);
    goto L48(i87, i88, r136);
  L52(i109, i110, r160, l22, r161, r162, dx41):
    r164 = `-`(dx41, 1.0);
    r165 = `^`(r162, r164);
    sum2 = ldf sum in base;
    r166 = dyn sum2(r165);
    check L268() else D87();
  L63(i123, varnames13, dx45):
    __12 = ldf `[` in base;
    r181 = dyn __12(varnames13, dx45);
    goto L62(i123, r181);
  L74(r200):
    c59 = `is.object`(r200);
    if c59 then L331() else L332(r200);
  L253():
    dr30 = tryDispatchBuiltin.1("[[", terms3);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L255() else L254(i75, i76, dtab11, dr30);
  L254(i83, i84, dtab13, terms5):
    j = ld j;
    check L256() else D83();
  L264():
    dr34 = tryDispatchBuiltin.1("[[", terms7);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L266() else L265(i91, i92, r140, l15, r134, 2.0, dr34);
  L265(i105, i106, r154, l20, r155, r156, terms9):
    j2 = ld j;
    check L267() else D86();
  L291():
    dr38 = tryDispatchBuiltin.1("[[", margin18);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L293() else L292(i117, varnames9, dr38);
  L292(i121, varnames11, margin20):
    k8 = ld k;
    check L294() else D95();
  L297():
    dx49 = getTryDispatchBuiltinValue(dr40);
    goto L64(i119, dx49);
  L298():
    k11 = force? k10;
    ____1 = ldf `[[<-` in base;
    r182 = dyn ____1(l26, dx43, k11);
    goto L64(i125, r182);
  L312():
    goto L69(ntab5, r191);
  L314():
    goto L68(r194);
  L327():
    fit23 = force? fit22;
    checkMissing(fit23);
    r198 = log(fit23, 2.718281828459045);
    goto L73(r198);
  L328():
    df2 = ld df;
    check L330() else D110();
  L329():
    r199 = dyn base34(<sym df>);
    goto L74(r199);
  D83():
    deopt 273 [i83, i84, dtab13, terms5, j];
  D86():
    deopt 287 [i105, i106, r154, l20, r155, r156, terms9, j2];
  D87():
    deopt 294 [i109, i110, r160, l22, r161, r166];
  D95():
    deopt 327 [i121, varnames11, margin20, k8];
  D110():
    deopt 390 [df2];
  L75(dx55):
    st terms = dx55;
    sym35 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L335() else L336();
  L255():
    dx36 = getTryDispatchBuiltinValue(dr30);
    goto L49(i75, i76, dtab11, dx36);
  L256():
    j1 = force? j;
    __8 = ldf `[[` in base;
    r135 = dyn __8(terms5, j1);
    goto L49(i83, i84, dtab13, r135);
  L266():
    dx40 = getTryDispatchBuiltinValue(dr34);
    goto L52(i91, i92, r140, l15, r134, 2.0, dx40);
  L267():
    j3 = force? j2;
    __10 = ldf `[[` in base;
    r163 = dyn __10(terms9, j3);
    goto L52(i105, i106, r154, l20, r155, r156, r163);
  L268():
    goto L51(i109, i110, r160, l22, r161, r166);
  L293():
    dx44 = getTryDispatchBuiltinValue(dr38);
    goto L63(i117, varnames9, dx44);
  L294():
    k9 = force? k8;
    __11 = ldf `[[` in base;
    r180 = dyn __11(margin20, k9);
    goto L63(i121, varnames11, r180);
  L330():
    df3 = force? df2;
    checkMissing(df3);
    r201 = seq_along(df3);
    goto L74(r201);
  L331():
    dr44 = tryDispatchBuiltin.1("[", r200);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L333() else L332(dr44);
  L332(r203):
    df4 = ld df;
    check L334() else D111();
  D111():
    deopt 393 [r203, df4];
  L76(r207):
    r209 = `+`(r207, 1.0);
    st parlen = r209;
    sym36 = ldf list;
    base36 = ldf list in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L339() else L340();
  L333():
    dx54 = getTryDispatchBuiltinValue(dr44);
    goto L75(dx54);
  L334():
    df5 = force? df4;
    checkMissing(df5);
    r204 = `>`(df5, 0.0);
    __13 = ldf `[` in base;
    r205 = dyn __13(r203, r204);
    goto L75(r205);
  L335():
    terms10 = ld terms;
    check L337() else D112();
  L336():
    r206 = dyn base35(<sym terms>);
    goto L76(r206);
  D112():
    deopt 401 [terms10];
  L77(r211):
    st parval = r211;
    character = ldf character;
    check L343() else D116();
  L337():
    terms11 = force? terms10;
    checkMissing(terms11);
    length4 = ldf length in base;
    r208 = dyn length4(terms11);
    check L338() else D113();
  L339():
    parlen = ld parlen;
    check L341() else D114();
  L340():
    r210 = dyn base36(<sym parlen>);
    goto L77(r210);
  D113():
    deopt 404 [r208];
  D114():
    deopt 410 [parlen];
  D116():
    deopt 416 [];
  L338():
    goto L76(r208);
  L341():
    parlen1 = force? parlen;
    checkMissing(parlen1);
    list1 = ldf list in base;
    r212 = dyn list1(parlen1);
    check L342() else D115();
  L343():
    p10 = prom<V +>{
      parlen2 = ld parlen;
      parlen3 = force? parlen2;
      checkMissing(parlen3);
      return parlen3;
    };
    r214 = dyn character(p10);
    check L344() else D117();
  D115():
    deopt 413 [r212];
  D117():
    deopt 418 [r214];
  L342():
    goto L77(r212);
  L344():
    st parnam = r214;
    mean = ldf mean;
    check L345() else D118();
  D118():
    deopt 421 [];
  L345():
    p11 = prom<V +>{
      fit24 = ld fit;
      fit25 = force? fit24;
      checkMissing(fit25);
      return fit25;
    };
    r216 = dyn mean(p11);
    check L346() else D119();
  D119():
    deopt 423 [r216];
  L346():
    l30 = ld parval;
    c60 = `is.object`(l30);
    if c60 then L347() else L348(r216, l30);
  L78(dx57):
    st parval = dx57;
    l33 = ld parnam;
    c61 = `is.object`(l33);
    if c61 then L350() else L351("(Intercept)", l33);
  L347():
    dr46 = tryDispatchBuiltin.0("[[<-", l30, r216);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L349() else L348(r216, dr46);
  L348(r218, l32):
    ____2 = ldf `[[<-` in base;
    r221 = dyn ____2(l32, r216, 1);
    goto L78(r221);
  L79(dx59):
    st parnam = dx59;
    fit26 = ld fit;
    check L353() else D120();
  L349():
    dx56 = getTryDispatchBuiltinValue(dr46);
    goto L78(dx56);
  L350():
    dr48 = tryDispatchBuiltin.0("[<-", l33, "(Intercept)");
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L352() else L351("(Intercept)", dr48);
  L351(r223, l35):
    ___2 = ldf `[<-` in base;
    r226 = dyn ___2(l35, "(Intercept)", 1);
    goto L79(r226);
  D120():
    deopt 436 [fit26];
  L352():
    dx58 = getTryDispatchBuiltinValue(dr48);
    goto L79(dx58);
  L353():
    fit27 = force? fit26;
    checkMissing(fit27);
    parval = ld parval;
    check L354() else D121();
  D121():
    deopt 437 [fit27, parval];
  L354():
    parval1 = force? parval;
    checkMissing(parval1);
    c62 = `is.object`(parval1);
    if c62 then L355() else L356(fit27, parval1);
  L80(fit31, dx61):
    r228 = `-`(fit31, dx61);
    st fit = r228;
    st dyadic = NULL;
    goto L83();
  L355():
    dr50 = tryDispatchBuiltin.1("[[", parval1);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L357() else L356(fit27, dr50);
  L356(fit29, parval3):
    __14 = ldf `[[` in base;
    r227 = dyn __14(parval3, 1);
    goto L80(fit29, r227);
  L83():
    sym37 = ldf any;
    base37 = ldf any in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L358() else L359();
  L357():
    dx60 = getTryDispatchBuiltinValue(dr50);
    goto L80(fit27, dx60);
  L81(r230):
    c63 = `as.logical`(r230);
    if c63 then L362() else L82();
  L358():
    terms12 = ld terms;
    check L360() else D122();
  L359():
    r229 = dyn base37(<lang `>`(terms, 0.0)>);
    goto L81(r229);
  D122():
    deopt 449 [terms12];
  L82():
    dyadic2 = ld dyadic;
    check L368() else D128();
  L360():
    terms13 = force? terms12;
    checkMissing(terms13);
    r231 = `>`(terms13, 0.0);
    any1 = ldf any in base;
    r232 = dyn any1(r231);
    check L361() else D123();
  L362():
    cbind = ldf cbind;
    check L363() else D124();
  D123():
    deopt 454 [r232];
  D124():
    deopt 456 [];
  D128():
    deopt 471 [dyadic2];
  L361():
    goto L81(r232);
  L363():
    p12 = prom<V +>{
      dyadic = ld dyadic;
      dyadic1 = force? dyadic;
      checkMissing(dyadic1);
      return dyadic1;
    };
    p13 = prom<V +>{
      terms14 = ld terms;
      terms15 = force? terms14;
      checkMissing(terms15);
      __15 = ldf `%%` in base;
      r234 = dyn __15(terms15, 2.0);
      return r234;
    };
    r236 = dyn cbind(p12, p13);
    check L364() else D125();
  L368():
    dyadic3 = force? dyadic2;
    checkMissing(dyadic3);
    c64 = `is.object`(dyadic3);
    if c64 then L369() else L370(dyadic3);
  D125():
    deopt 459 [r236];
  L84(dx63):
    st dyadic = dx63;
    parlen4 = ld parlen;
    check L374() else D131();
  L364():
    st dyadic = r236;
    terms16 = ld terms;
    check L365() else D126();
  L369():
    dr52 = tryDispatchBuiltin.1("[", dyadic3);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L371() else L370(dr52);
  L370(dyadic5):
    order = ldf order;
    check L372() else D129();
  D126():
    deopt 462 [terms16];
  D129():
    deopt 474 [dyadic5];
  D131():
    deopt 484 [2.0, parlen4];
  L365():
    terms17 = force? terms16;
    checkMissing(terms17);
    ___3 = ldf `%/%` in base;
    r237 = dyn ___3(terms17, 2.0);
    check L366() else D127();
  L371():
    dx62 = getTryDispatchBuiltinValue(dr52);
    goto L84(dx62);
  L372():
    p15 = prom<V +>{
      rowSums = ldf rowSums;
      p14 = prom<V +>{
        dyadic6 = ld dyadic;
        dyadic7 = force? dyadic6;
        checkMissing(dyadic7);
        return dyadic7;
      };
      r239 = dyn rowSums(p14);
      return r239;
    };
    r241 = dyn order(p15);
    check L373() else D130();
  L374():
    parlen5 = force? parlen4;
    checkMissing(parlen5);
    r243 = `:`(2.0, parlen5);
    s4 = toForSeq(r243);
    l36 = length(s4);
    i129 = 0;
    goto L85(i129);
  D127():
    deopt 466 [r237];
  D130():
    deopt 476 [dyadic5, r241];
  L85(i130):
    i131 = `+`.1(i130, 1);
    c65 = `<`.1(l36, i131);
    if c65 then L375() else L88();
  L366():
    st terms = r237;
    goto L83();
  L373():
    __16 = ldf `[` in base;
    r242 = dyn __16(dyadic3, r241, <missing>, FALSE);
    goto L84(r242);
  L88():
    x4 = `[[`(s4, i131, NULL, TRUE);
    st i = x4;
    which = ldf which;
    check L376() else D132();
  L375():
    parnam = ld parnam;
    check L392() else D142();
  D132():
    deopt 488 [i131];
  D142():
    deopt 526 [parnam];
  L376():
    p16 = prom<V +>{
      dyadic8 = ld dyadic;
      dyadic9 = force? dyadic8;
      checkMissing(dyadic9);
      c66 = `is.object`(dyadic9);
      if c66 then L1() else L2();
    L0(dx65):
      r246 = `>`(dx65, 0.0);
      return r246;
    L1():
      dr54 = tryDispatchBuiltin.1("[", dyadic9);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2();
    L2():
      i134 = ld i;
      i135 = force? i134;
      checkMissing(i135);
      r244 = `-`(i135, 1.0);
      __17 = ldf `[` in base;
      r245 = dyn __17(dyadic9, r244, <missing>);
      goto L0(r245);
    L3():
      dx64 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx64);
    };
    r248 = dyn which(p16);
    check L377() else D133();
  L392():
    parnam1 = force? parnam;
    checkMissing(parnam1);
    l43 = ld parval;
    names__ = ldf `names<-`;
    check L393() else D143();
  D133():
    deopt 490 [i131, r248];
  D143():
    deopt 529 [parnam1, l43, parnam1];
  L377():
    st vars = r248;
    apply = ldf apply;
    check L378() else D134();
  L393():
    r271 = dyn names__(l43, NULL, parnam1);
    check L394() else D144();
  D134():
    deopt 493 [i131];
  D144():
    deopt 531 [parnam1, r271];
  L378():
    p17 = prom<V +>{
      fit32 = ld fit;
      fit33 = force? fit32;
      checkMissing(fit33);
      return fit33;
    };
    p18 = prom<V +>{
      vars = ld vars;
      vars1 = force? vars;
      checkMissing(vars1);
      return vars1;
    };
    p19 = prom<V +>{
      mean1 = ld mean;
      mean2 = force? mean1;
      checkMissing(mean2);
      return mean2;
    };
    r252 = dyn apply(p17, p18, p19);
    check L379() else D135();
  L394():
    st parval = r271;
    parval8 = ld parval;
    check L395() else D145();
  D135():
    deopt 497 [i131, r252];
  D145():
    deopt 533 [parval8];
  L379():
    l37 = ld parval;
    c67 = `is.object`(l37);
    if c67 then L380() else L381(i131, r252, l37);
  L395():
    parval9 = force? parval8;
    checkMissing(parval9);
    l44 = ld y;
    c71 = `is.object`(l44);
    if c71 then L397() else L398(parval9, l44);
  L86(i139, dx67):
    st parval = dx67;
    paste = ldf paste;
    check L384() else D137();
  L380():
    dr56 = tryDispatchBuiltin.0("[[<-", l37, r252);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L382() else L381(i131, r252, dr56);
  L381(i137, r254, l39):
    i140 = ld i;
    check L383() else D136();
  L396(parval13, dx75):
    st y = dx75;
    goto L89();
  L397():
    dr64 = tryDispatchBuiltin.0("$<-", l44, parval9);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L399() else L398(parval9, dr64);
  L398(parval11, l46):
    r272 = `$<-`(l46, <sym param>, parval9);
    goto L396(parval11, r272);
  D136():
    deopt 499 [i137, r254, l39, r252, i140];
  D137():
    deopt 504 [i139];
  L382():
    dx66 = getTryDispatchBuiltinValue(dr56);
    goto L86(i131, dx66);
  L383():
    i141 = force? i140;
    ____3 = ldf `[[<-` in base;
    r257 = dyn ____3(l39, r252, i141);
    goto L86(i137, r257);
  L384():
    p20 = prom<V +>{
      varnames14 = ld varnames;
      varnames15 = force? varnames14;
      checkMissing(varnames15);
      c68 = `is.object`(varnames15);
      if c68 then L1() else L2(varnames15);
    L0(dx69):
      return dx69;
    L1():
      dr58 = tryDispatchBuiltin.1("[", varnames15);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(varnames17):
      vars2 = ld vars;
      vars3 = force? vars2;
      __18 = ldf `[` in base;
      r258 = dyn __18(varnames17, vars3);
      goto L0(r258);
    L3():
      dx68 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx68);
    };
    r260 = dyn paste[, collapse](p20, ".");
    check L385() else D138();
  L399():
    dx74 = getTryDispatchBuiltinValue(dr64);
    goto L396(parval9, dx74);
  D138():
    deopt 508 [i139, r260];
  L385():
    l40 = ld parnam;
    c69 = `is.object`(l40);
    if c69 then L386() else L387(i139, r260, l40);
  L87(i145, dx71):
    st parnam = dx71;
    sweep = ldf sweep;
    check L390() else D140();
  L386():
    dr60 = tryDispatchBuiltin.0("[<-", l40, r260);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L388() else L387(i139, r260, dr60);
  L387(i143, r262, l42):
    i146 = ld i;
    check L389() else D139();
  D139():
    deopt 510 [i143, r262, l42, r260, i146];
  D140():
    deopt 515 [i145];
  L388():
    dx70 = getTryDispatchBuiltinValue(dr60);
    goto L87(i139, dx70);
  L389():
    i147 = force? i146;
    ___4 = ldf `[<-` in base;
    r265 = dyn ___4(l42, r260, i147);
    goto L87(i143, r265);
  L390():
    p21 = prom<V +>{
      fit34 = ld fit;
      fit35 = force? fit34;
      checkMissing(fit35);
      return fit35;
    };
    p22 = prom<V +>{
      vars4 = ld vars;
      vars5 = force? vars4;
      checkMissing(vars5);
      return vars5;
    };
    p23 = prom<V +>{
      parval4 = ld parval;
      parval5 = force? parval4;
      checkMissing(parval5);
      c70 = `is.object`(parval5);
      if c70 then L1() else L2(parval5);
    L0(dx73):
      return dx73;
    L1():
      dr62 = tryDispatchBuiltin.1("[[", parval5);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L3() else L2(dr62);
    L2(parval7):
      i148 = ld i;
      i149 = force? i148;
      __19 = ldf `[[` in base;
      r268 = dyn __19(parval7, i149);
      goto L0(r268);
    L3():
      dx72 = getTryDispatchBuiltinValue(dr62);
      goto L0(dx72);
    };
    r270 = dyn sweep[, , , `check.margin`](p21, p22, p23, FALSE);
    check L391() else D141();
  D141():
    deopt 521 [i145, r270];
  L391():
    st fit = r270;
    goto L85(i145);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg mode:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r5:V, reg vector:cls, reg r6:V, reg list:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg r10:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg i7:I, reg r12:V, reg y:*, reg y1:V, reg lapply:cls, reg y2:*, reg y3:V, reg p1:p(V +), reg c1:*, reg c2:V, reg p2:p(V +), reg x6:*, reg x7:V, reg c3:L, reg x9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i8:*, reg i9:V, reg __:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg c4:cls, reg r18:V, reg y4:*, reg y5:V, reg c5:L, reg y7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r19:V |
    mkenv;
    st x = x;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st y = r1;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L7():
    sym1 = ldf vector;
    base1 = ldf vector in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L8():
    r = dyn base(<lang vector(mode(x), length=0.0)>);
    goto L0(r);
  L1(r3):
    list = ldf list in base;
    r7 = dyn list(r3);
    check L14() else D3();
  L2(r9):
    s = toForSeq(r9);
    l = length(s);
    i = 0;
    goto L3(i);
  L9():
    mode = ldf mode;
    check L11() else D0();
  L10():
    r2 = dyn base1[, length](<lang mode(x)>, 0.0);
    goto L1(r2);
  L15():
    x3 = ld x;
    check L17() else D4();
  L16():
    r8 = dyn base2(<sym x>);
    goto L2(r8);
  D0():
    deopt 5 [];
  D3():
    deopt 12 [r7];
  D4():
    deopt 15 [x3];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L18() else L5();
  L11():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn mode(p);
    check L12() else D1();
  L14():
    goto L0(r7);
  L17():
    x4 = force? x3;
    checkMissing(x4);
    r10 = seq_along(x4);
    goto L2(r10);
  D1():
    deopt 7 [r5];
  L5():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L12():
    vector = ldf vector in base;
    r6 = dyn vector(r5, 0.0);
    check L13() else D2();
  L18():
    y4 = ld y;
    check L25() else D9();
  D2():
    deopt 10 [r6];
  D9():
    deopt 34 [y4];
  L4(i7, r12):
    st y = r12;
    goto L3(i7);
  L13():
    goto L1(r6);
  L19():
    y = ld y;
    check L21() else D5();
  L20():
    r11 = dyn base3(<sym y>, <lang lapply(y, c, `[`(x, i))>);
    goto L4(i2, r11);
  L25():
    y5 = force? y4;
    checkMissing(y5);
    c5 = `is.object`(y5);
    if c5 then L26() else L27(y5);
  D5():
    deopt 20 [i2, y];
  L6(dx3):
    popenv;
    return dx3;
  L21():
    y1 = force? y;
    checkMissing(y1);
    lapply = ldf lapply;
    check L22() else D6();
  L26():
    dr2 = tryDispatchBuiltin.1("[", y5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(y7):
    __1 = ldf `[` in base;
    r19 = dyn __1(y7, -1);
    goto L6(r19);
  D6():
    deopt 23 [i2];
  L22():
    p1 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p2 = prom<V +>{
      c1 = ld c;
      c2 = force? c1;
      checkMissing(c2);
      return c2;
    };
    p3 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      c3 = `is.object`(x7);
      if c3 then L1() else L2(x7);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x9):
      i8 = ld i;
      i9 = force? i8;
      __ = ldf `[` in base;
      r15 = dyn __(x9, i9);
      goto L0(r15);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r17 = dyn lapply(p1, p2, p3);
    check L23() else D7();
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  D7():
    deopt 27 [i2, r17];
  L23():
    c4 = ldf c in base;
    r18 = dyn c4(y1, r17);
    check L24() else D8();
  D8():
    deopt 29 [i2, r18];
  L24():
    goto L4(i2, r18);
  }
}