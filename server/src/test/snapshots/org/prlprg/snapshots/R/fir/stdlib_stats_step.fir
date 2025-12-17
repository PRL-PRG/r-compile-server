fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3968209770;
    st step = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3968209770(object, scope, scale, direction, trace, keep, steps, k, `...`) {
  (reg object:*, reg scope:*, reg scale:*, reg direction:*, reg trace:*, reg keep:*, reg steps:*, reg k:*, reg ddd:dots) -+> V { var object:*, var scope:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var direction:*, reg direction_isMissing:L, reg direction_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var trace:*, reg trace_isMissing:L, reg trace_orDefault:*, var keep:*, reg keep_isMissing:L, reg keep_orDefault:*, var steps:*, reg steps_isMissing:L, reg steps_orDefault:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var `...`:dots?, reg r4:cls, reg r5:cls, reg r6:cls, reg r7:cls, reg terms:cls, reg object1:*, reg object2:V, reg p1:p(V +), reg r9:V, reg Terms:*, reg Terms1:V, reg l:*, reg c1:L, reg Terms3:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg Terms5:V, reg dx1:V, reg r10:V, reg l3:*, reg c2:L, reg Terms8:V, reg l6:*, reg Terms9:V, reg l7:*, reg dr2:V, reg dc1:L, reg dx2:V, reg Terms12:V, reg l9:*, reg Terms13:V, reg dx3:V, reg r11:V, reg c3:L, reg Terms15:V, reg l11:*, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg Terms17:V, reg l13:*, reg dx7:V, reg r12:V, reg c4:L, reg Terms19:V, reg l15:*, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg missing:cls, reg r16:V, reg match_arg:cls, reg direction1:*, reg direction2:V, reg p2:p(V +), reg r18:V, reg direction3:*, reg direction4:V, reg r19:V, reg direction5:*, reg direction6:V, reg r20:V, reg r21:V, reg direction7:*, reg direction8:V, reg r22:V, reg direction9:*, reg direction10:V, reg r23:V, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg missing1:cls, reg r27:V, reg c5:L, reg numeric:cls, reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg Terms22:*, reg Terms23:V, reg attr:cls, reg r31:V, reg md:*, reg md1:V, reg c6:L, reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg scope1:*, reg scope2:V, reg is_list:cls, reg r36:V, reg c7:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg scope3:*, reg scope4:V, reg c8:L, reg scope6:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r39:V, reg c9:V, reg r40:V, reg c10:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg terms1:cls, reg update_formula:cls, reg object3:*, reg object4:V, reg p3:p(V +), reg fdrop:*, reg fdrop1:V, reg p4:p(V +), reg r45:V, reg p5:p(V +), reg r47:V, reg attr1:cls, reg r48:V, reg r49:V, reg numeric1:cls, reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg scope7:*, reg scope8:V, reg c11:L, reg scope10:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r53:V, reg c12:V, reg r54:V, reg c13:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg terms2:cls, reg update_formula1:cls, reg object5:*, reg object6:V, reg p6:p(V +), reg fadd:*, reg fadd1:V, reg p7:p(V +), reg r59:V, reg p8:p(V +), reg r61:V, reg attr2:cls, reg r62:V, reg r63:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg r65:V, reg scope11:*, reg scope12:V, reg c14:V, reg r66:V, reg c15:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg terms3:cls, reg update_formula2:cls, reg object7:*, reg object8:V, reg p9:p(V +), reg scope13:*, reg scope14:V, reg p10:p(V +), reg r71:V, reg p11:p(V +), reg r73:V, reg attr3:cls, reg r74:V, reg r75:V, reg numeric2:cls, reg r76:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r77:V, reg r78:V, reg steps1:*, reg steps2:V, reg vector:cls, reg r79:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r80:V, reg r81:V, reg keep1:*, reg keep2:V, reg c16:V, reg r82:V, reg c17:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r83:V, reg r84:V, reg steps3:*, reg steps4:V, reg vector1:cls, reg r85:V, reg nobs:cls, reg object9:*, reg object10:V, reg p12:p(V +), reg r88:V, reg object11:*, reg object12:V, reg extractAIC:cls, reg fit:*, reg fit1:V, reg p13:p(V +), reg scale1:*, reg scale2:V, reg p14:p(V +), reg k1:*, reg k2:V, reg p15:p(V +), reg ddd1:dots?, reg r92:V, reg bAIC:*, reg bAIC1:V, reg c18:L, reg bAIC3:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg __:cls, reg r93:V, reg bAIC4:*, reg bAIC5:V, reg c19:L, reg bAIC7:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg __1:cls, reg r94:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r95:V, reg r96:V, reg bAIC8:*, reg bAIC9:V, reg is_na:cls, reg r97:V, reg c20:L, reg stop:cls, reg r98:V, reg bAIC10:*, reg bAIC11:V, reg r100:V, reg c21:L, reg stop1:cls, reg r101:V, reg trace1:*, reg trace2:V, reg c22:L, reg cat:cls, reg format:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r103:V, reg r104:V, reg round:cls, reg r105:V, reg p16:p(V +), reg r107:V, reg p17:p(V +), reg cut_string:cls, reg deparse:cls, reg formula:cls, reg fit2:*, reg fit3:V, reg p18:p(V +), reg r110:V, reg p19:p(V +), reg r112:V, reg p20:p(V +), reg r114:V, reg p21:p(V +), reg r116:V, reg flush_console:cls, reg r117:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r119:V, reg r120:V, reg mydeviance:cls, reg fit4:*, reg fit5:V, reg p22:p(V +), reg r122:V, reg n:*, reg n1:V, reg edf:*, reg edf1:V, reg r123:V, reg bAIC12:*, reg bAIC13:V, reg list:cls, reg r124:V, reg l16:*, reg c23:L, reg r126:V, reg l18:*, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg nm:*, reg nm1:V, reg ____:cls, reg r129:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r130:V, reg r131:V, reg keep3:*, reg keep4:V, reg c24:V, reg r132:V, reg c25:L, reg keep5:cls, reg fit6:*, reg fit7:V, reg p23:p(V +), reg bAIC14:*, reg bAIC15:V, reg p24:p(V +), reg r135:V, reg l19:*, reg c26:L, reg r137:V, reg l21:*, reg dr18:V, reg dc9:L, reg dx20:V, reg r139:V, reg dx21:V, reg nm2:*, reg nm3:V, reg ____1:cls, reg r140:V, reg steps5:*, reg steps6:V, reg r142:V, reg c27:L, reg steps7:*, reg steps8:V, reg r143:V, reg bAIC16:*, reg bAIC17:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r144:V, reg r145:V, reg Terms24:*, reg Terms25:V, reg attr4:cls, reg r146:V, reg factor_scope:cls, reg ffac:*, reg ffac1:V, reg p25:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r148:V, reg r149:V, reg fadd2:*, reg fadd3:V, reg fdrop2:*, reg fdrop3:V, reg list1:cls, reg r150:V, reg p26:p(V +), reg r152:V, reg backward:*, reg backward1:V, reg c28:L, reg c30:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r153:V, reg c33:L, reg r154:V, reg scope15:*, reg scope16:V, reg c34:L, reg c36:L, reg scope18:V, reg dr20:V, reg dc10:L, reg dx22:V, reg c38:L, reg dx23:V, reg r155:V, reg length:cls, reg r156:V, reg c39:L, reg c40:V, reg c42:L, reg drop1:cls, reg fit8:*, reg fit9:V, reg p27:p(V +), reg scope19:*, reg scope20:V, reg c43:L, reg scope22:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg r158:V, reg p28:p(V +), reg scale3:*, reg scale4:V, reg p29:p(V +), reg trace3:*, reg trace4:V, reg p30:p(V +), reg k3:*, reg k4:V, reg p31:p(V +), reg ddd2:dots?, reg r163:V, reg row_names:cls, reg aod:*, reg aod1:V, reg p32:p(V +), reg r165:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r166:V, reg r167:V, reg rn:*, reg rn1:V, reg c44:L, reg rn3:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg __2:cls, reg r168:V, reg paste:cls, reg rn4:*, reg rn5:V, reg c45:L, reg rn7:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg __3:cls, reg r169:V, reg p33:p(V +), reg r171:V, reg c46:cls, reg r172:V, reg l22:*, reg row_names__:cls, reg r173:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r174:V, reg r175:V, reg aod2:*, reg aod3:V, reg c47:L, reg aod5:V, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg r176:V, reg r177:V, reg any:cls, reg r178:V, reg c48:L, reg aod6:*, reg aod7:V, reg c49:L, reg aod9:V, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg r179:V, reg r180:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r183:V, reg r184:V, reg r185:V, reg aod10:*, reg aod11:V, reg c50:L, reg r187:V, reg aod13:V, reg dr32:V, reg dc16:L, reg dx34:V, reg r189:V, reg dx35:V, reg r190:V, reg is_na1:cls, reg r191:V, reg r192:V, reg r193:V, reg rev:cls, reg rownames:cls, reg aod14:*, reg aod15:V, reg p34:p(V +), reg r195:V, reg c51:L, reg r197:V, reg dr34:V, reg dc17:L, reg dx36:V, reg dx37:V, reg zdf:*, reg zdf1:V, reg __4:cls, reg r198:V, reg p35:p(V +), reg r200:V, reg c52:L, reg r202:V, reg dr36:V, reg dc18:L, reg dx38:V, reg dx39:V, reg __5:cls, reg r203:V, reg dx40:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r204:V, reg r205:V, reg change:*, reg change1:V, reg c53:V, reg c54:L, reg forward:*, reg forward1:V, reg c55:L, reg c57:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r206:V, reg c60:L, reg r207:V, reg scope23:*, reg scope24:V, reg c61:L, reg c63:L, reg scope26:V, reg dr38:V, reg dc19:L, reg dx42:V, reg c65:L, reg dx43:V, reg r208:V, reg length1:cls, reg r209:V, reg c66:L, reg c67:V, reg c69:L, reg add1:cls, reg fit10:*, reg fit11:V, reg p36:p(V +), reg scope27:*, reg scope28:V, reg c70:L, reg scope30:V, reg dr40:V, reg dc20:L, reg dx44:V, reg dx45:V, reg r211:V, reg p37:p(V +), reg scale5:*, reg scale6:V, reg p38:p(V +), reg trace5:*, reg trace6:V, reg p39:p(V +), reg k5:*, reg k6:V, reg p40:p(V +), reg ddd3:dots?, reg r216:V, reg row_names1:cls, reg aodf:*, reg aodf1:V, reg p41:p(V +), reg r218:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r219:V, reg r220:V, reg rn8:*, reg rn9:V, reg c71:L, reg rn11:V, reg dr42:V, reg dc21:L, reg dx46:V, reg dx47:V, reg __6:cls, reg r221:V, reg paste1:cls, reg rn12:*, reg rn13:V, reg c72:L, reg rn15:V, reg dr44:V, reg dc22:L, reg dx48:V, reg dx49:V, reg __7:cls, reg r222:V, reg p42:p(V +), reg r224:V, reg c73:cls, reg r225:V, reg l23:*, reg row_names__1:cls, reg r226:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r227:V, reg r228:V, reg aod16:*, reg aod17:V, reg c74:V, reg c75:L, reg aodf2:*, reg aodf3:V, reg aodf4:V, reg rbind:cls, reg aod18:*, reg aod19:V, reg p43:p(V +), reg aodf5:*, reg aodf6:V, reg c76:L, reg dr46:V, reg dc23:L, reg dx50:V, reg dx51:V, reg __8:cls, reg r230:V, reg p44:p(V +), reg r232:V, reg l24:*, reg attr__:cls, reg r233:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r234:V, reg r235:V, reg aod20:*, reg aod21:V, reg c77:L, reg aod23:V, reg dr48:V, reg dc24:L, reg dx52:V, reg dx53:V, reg r236:V, reg c78:V, reg r237:V, reg c79:L, reg aod24:*, reg aod25:V, reg c80:L, reg aod27:V, reg dr50:V, reg dc25:L, reg dx54:V, reg dx55:V, reg r238:V, reg r239:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r242:V, reg r243:V, reg r244:V, reg aod28:*, reg aod29:V, reg c81:L, reg r246:V, reg aod31:V, reg dr52:V, reg dc26:L, reg dx56:V, reg r248:V, reg dx57:V, reg r249:V, reg is_na2:cls, reg r250:V, reg r251:V, reg r252:V, reg aod32:*, reg aod33:V, reg c82:L, reg aod35:V, reg dr54:V, reg dc27:L, reg dx58:V, reg dx59:V, reg nzdf:*, reg nzdf1:V, reg __9:cls, reg r253:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r254:V, reg r255:V, reg aod36:*, reg aod37:V, reg c83:V, reg c84:L, reg c85:V, reg ncol:cls, reg aod38:*, reg aod39:V, reg p45:p(V +), reg r257:V, reg r258:V, reg c87:L, reg c88:V, reg c90:L, reg sym31:cls, reg base31:cls, reg guard31:L, reg r260:V, reg r261:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r262:V, reg r263:V, reg c91:cls, reg r264:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r265:V, reg r266:V, reg aod40:*, reg aod41:V, reg names:cls, reg r267:V, reg match:cls, reg r268:V, reg nc:*, reg nc1:V, reg c92:L, reg nc3:V, reg dr56:V, reg dc28:L, reg dx60:V, reg dx61:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r269:V, reg nc6:V, reg r270:V, reg nc7:*, reg nc8:V, reg is_na3:cls, reg r271:V, reg r272:V, reg __10:cls, reg r273:V, reg c93:L, reg dx63:V, reg dr58:V, reg dc29:L, reg dx64:V, reg dx65:V, reg __11:cls, reg r274:V, reg order:cls, reg aod42:*, reg aod43:V, reg c94:L, reg dr60:V, reg dc30:L, reg dx66:V, reg dx67:V, reg nc9:*, reg nc10:V, reg __12:cls, reg r275:V, reg p46:p(V +), reg r277:V, reg trace7:*, reg trace8:V, reg c95:L, reg print:cls, reg aod46:*, reg aod47:V, reg c96:L, reg dr62:V, reg dc31:L, reg dx68:V, reg dx69:V, reg o:*, reg o1:V, reg __13:cls, reg r278:V, reg p47:p(V +), reg r280:V, reg o2:*, reg o3:V, reg c97:L, reg o5:V, reg dr64:V, reg dc32:L, reg dx70:V, reg dx71:V, reg __14:cls, reg r282:V, reg r283:V, reg c98:L, reg rownames1:cls, reg aod50:*, reg aod51:V, reg p48:p(V +), reg r286:V, reg c99:L, reg r288:V, reg dr66:V, reg dc33:L, reg dx72:V, reg dx73:V, reg o6:*, reg o7:V, reg c100:L, reg r290:V, reg o9:V, reg dr68:V, reg dc34:L, reg dx74:V, reg r292:V, reg dx75:V, reg __15:cls, reg r293:V, reg __16:cls, reg r294:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r295:V, reg r296:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r297:V, reg r298:V, reg aod52:*, reg aod53:V, reg names1:cls, reg r299:V, reg match1:cls, reg r300:V, reg r301:V, reg update:cls, reg fit12:*, reg fit13:V, reg p49:p(V +), reg paste2:cls, reg change2:*, reg change3:V, reg p50:p(V +), reg r304:V, reg p51:p(V +), reg r306:V, reg eval_parent:cls, reg fit14:*, reg fit15:V, reg p52:p(V +), reg r308:V, reg nobs1:cls, reg fit16:*, reg fit17:V, reg p53:p(V +), reg r310:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r311:V, reg r312:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r313:V, reg r314:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r315:V, reg r316:V, reg n2:*, reg n3:V, reg nnew:*, reg nnew1:V, reg c101:cls, reg r317:V, reg is_finite:cls, reg r318:V, reg all:cls, reg r319:V, reg c102:L, reg c104:V, reg nnew2:*, reg nnew3:V, reg n4:*, reg n5:V, reg r320:V, reg c105:L, reg c106:V, reg c108:L, reg stop2:cls, reg r321:V, reg terms4:cls, reg fit18:*, reg fit19:V, reg p54:p(V +), reg r324:V, reg extractAIC1:cls, reg fit20:*, reg fit21:V, reg p55:p(V +), reg scale7:*, reg scale8:V, reg p56:p(V +), reg k7:*, reg k8:V, reg p57:p(V +), reg ddd4:dots?, reg r328:V, reg bAIC18:*, reg bAIC19:V, reg c109:L, reg bAIC21:V, reg dr70:V, reg dc35:L, reg dx77:V, reg dx78:V, reg __17:cls, reg r329:V, reg bAIC22:*, reg bAIC23:V, reg c110:L, reg bAIC25:V, reg dr72:V, reg dc36:L, reg dx79:V, reg dx80:V, reg __18:cls, reg r330:V, reg trace9:*, reg trace10:V, reg c111:L, reg cat1:cls, reg format1:cls, reg sym40:cls, reg base40:cls, reg guard40:L, reg r331:V, reg r332:V, reg round1:cls, reg r333:V, reg p58:p(V +), reg r335:V, reg p59:p(V +), reg cut_string1:cls, reg deparse1:cls, reg formula1:cls, reg fit22:*, reg fit23:V, reg p60:p(V +), reg r338:V, reg p61:p(V +), reg r340:V, reg p62:p(V +), reg r342:V, reg p63:p(V +), reg r344:V, reg flush_console1:cls, reg r345:V, reg bAIC26:*, reg bAIC27:V, reg AIC:*, reg AIC1:V, reg r347:V, reg r348:V, reg c112:L, reg nm4:*, reg nm5:V, reg r350:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r351:V, reg r352:V, reg mydeviance1:cls, reg fit24:*, reg fit25:V, reg p64:p(V +), reg r354:V, reg n6:*, reg n7:V, reg edf2:*, reg edf3:V, reg r355:V, reg change4:*, reg change5:V, reg bAIC28:*, reg bAIC29:V, reg list2:cls, reg r356:V, reg l25:*, reg c113:L, reg r358:V, reg l27:*, reg dr74:V, reg dc37:L, reg dx81:V, reg dx82:V, reg nm6:*, reg nm7:V, reg ____2:cls, reg r361:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r362:V, reg r363:V, reg keep6:*, reg keep7:V, reg c114:V, reg r364:V, reg c115:L, reg keep8:cls, reg fit26:*, reg fit27:V, reg p65:p(V +), reg bAIC30:*, reg bAIC31:V, reg p66:p(V +), reg r367:V, reg l28:*, reg c116:L, reg r369:V, reg l30:*, reg dr76:V, reg dc38:L, reg dx83:V, reg r371:V, reg dx84:V, reg nm8:*, reg nm9:V, reg ____3:cls, reg r372:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r374:V, reg r375:V, reg keep9:*, reg keep10:V, reg c117:V, reg r376:V, reg c118:L, reg re_arrange:cls, reg keep_list:*, reg keep_list1:V, reg c119:L, reg keep_list3:V, reg dr78:V, reg dc39:L, reg dx85:V, reg dx86:V, reg seq:cls, reg nm10:*, reg nm11:V, reg p67:p(V +), reg r378:V, reg __19:cls, reg r379:V, reg p68:p(V +), reg r381:V, reg l31:*, reg c120:L, reg r383:V, reg l33:*, reg dr80:V, reg dc40:L, reg dx87:V, reg r385:V, reg dx88:V, reg r386:V, reg step_results:cls, reg models:*, reg models1:V, reg c121:L, reg models3:V, reg dr82:V, reg dc41:L, reg dx89:V, reg dx90:V, reg seq1:cls, reg nm12:*, reg nm13:V, reg p69:p(V +), reg r389:V, reg __20:cls, reg r390:V, reg p70:p(V +), reg fit28:*, reg fit29:V, reg p71:p(V +), reg object13:*, reg object14:V, reg p72:p(V +), reg usingCp:*, reg usingCp1:V, reg p73:p(V +), reg r395:V |
    mkenv;
    st object = object;
    st scope = scope;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L0(0.0) else L0(scale);
  L0(scale_orDefault):
    st scale = scale_orDefault;
    direction_isMissing = missing.0(direction);
    if direction_isMissing then L1() else L2(direction);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("both", "backward", "forward");
      goto L0(r2);
    L2():
      r = dyn base("both", "backward", "forward");
      goto L0(r);
    };
    goto L2(p);
  L2(direction_orDefault):
    st direction = direction_orDefault;
    trace_isMissing = missing.0(trace);
    if trace_isMissing then L3(1.0) else L3(trace);
  L3(trace_orDefault):
    st trace = trace_orDefault;
    keep_isMissing = missing.0(keep);
    if keep_isMissing then L4(NULL) else L4(keep);
  L4(keep_orDefault):
    st keep = keep_orDefault;
    steps_isMissing = missing.0(steps);
    if steps_isMissing then L5(1000.0) else L5(steps);
  L5(steps_orDefault):
    st steps = steps_orDefault;
    k_isMissing = missing.0(k);
    if k_isMissing then L6(2.0) else L6(k);
  L6(k_orDefault):
    st k = k_orDefault;
    st `...` = ddd;
    r4 = clos inner2044426018;
    st mydeviance = r4;
    r5 = clos inner2074706417;
    st `cut.string` = r5;
    r6 = clos inner1107343077;
    st `re.arrange` = r6;
    r7 = clos inner791719357;
    st `step.results` = r7;
    terms = ldf terms;
    check L119() else D0();
  D0():
    deopt 13 [];
  L119():
    p1 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r9 = dyn terms(p1);
    check L120() else D1();
  D1():
    deopt 15 [r9];
  L120():
    st Terms = r9;
    Terms = ld Terms;
    check L121() else D2();
  D2():
    deopt 17 [Terms];
  L121():
    Terms1 = force? Terms;
    checkMissing(Terms1);
    l = ld object;
    c1 = `is.object`(l);
    if c1 then L123() else L124(Terms1, l);
  L122(Terms5, dx1):
    st object = dx1;
    l3 = ld object;
    c2 = `is.object`(l3);
    if c2 then L127() else L128(Terms5, l3, Terms5, l3);
  L123():
    dr = tryDispatchBuiltin.0("$<-", l, Terms1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L125() else L124(Terms1, dr);
  L124(Terms3, l2):
    r10 = `$<-`(l2, <sym formula>, Terms1);
    goto L122(Terms3, r10);
  L125():
    dx = getTryDispatchBuiltinValue(dr);
    goto L122(Terms1, dx);
  L126(Terms12, l9, Terms13, dx3):
    c3 = `is.object`(dx3);
    if c3 then L131() else L132(Terms12, l9, dx3);
  L127():
    dr2 = tryDispatchBuiltin.1("$", l3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L129() else L128(Terms5, l3, Terms5, dr2);
  L128(Terms8, l6, Terms9, l7):
    r11 = `$`(l7, <sym call>);
    goto L126(Terms8, l6, Terms9, r11);
  L129():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L126(Terms5, l3, Terms5, dx2);
  L130(Terms17, l13, dx7):
    c4 = `is.object`(l13);
    if c4 then L135() else L136(Terms17, l13);
  L131():
    dr4 = tryDispatchBuiltin.0("$<-", dx3, Terms13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L133() else L132(Terms12, l9, dr4);
  L132(Terms15, l11, dx5):
    r12 = `$<-`(dx5, <sym formula>, Terms13);
    goto L130(Terms15, l11, r12);
  L133():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L130(Terms12, l9, dx6);
  L134(dx9):
    st object = dx9;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L138() else L139();
  L135():
    dr6 = tryDispatchBuiltin.0("$<-", l13, dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L137() else L136(Terms17, dr6);
  L136(Terms19, l15):
    r13 = `$<-`(l15, <sym call>, dx7);
    goto L134(r13);
  L7(r15):
    st md = r15;
    match_arg = ldf `match.arg`;
    check L140() else D3();
  L137():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L134(dx8);
  L138():
    missing = ldf missing in base;
    r16 = dyn missing(<sym direction>);
    goto L7(r16);
  L139():
    r14 = dyn base1(<sym direction>);
    goto L7(r14);
  D3():
    deopt 34 [];
  L140():
    p2 = prom<V +>{
      direction1 = ld direction;
      direction2 = force? direction1;
      checkMissing(direction2);
      return direction2;
    };
    r18 = dyn match_arg(p2);
    check L141() else D4();
  D4():
    deopt 36 [r18];
  L141():
    st direction = r18;
    direction3 = ld direction;
    check L142() else D5();
  D5():
    deopt 38 [direction3];
  L142():
    direction4 = force? direction3;
    checkMissing(direction4);
    r19 = `==`(direction4, "both");
    direction5 = ld direction;
    check L143() else D6();
  D6():
    deopt 41 [r19, direction5];
  L143():
    direction6 = force? direction5;
    checkMissing(direction6);
    r20 = `==`(direction6, "backward");
    r21 = `||`(r19, r20);
    st backward = r21;
    direction7 = ld direction;
    check L144() else D7();
  D7():
    deopt 47 [direction7];
  L144():
    direction8 = force? direction7;
    checkMissing(direction8);
    r22 = `==`(direction8, "both");
    direction9 = ld direction;
    check L145() else D8();
  D8():
    deopt 50 [r22, direction9];
  L145():
    direction10 = force? direction9;
    checkMissing(direction10);
    r23 = `==`(direction10, "forward");
    r24 = `||`(r22, r23);
    st forward = r24;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L146() else L147();
  L8(r26):
    c5 = `as.logical`(r26);
    if c5 then L148() else L9();
  L146():
    missing1 = ldf missing in base;
    r27 = dyn missing1(<sym scope>);
    goto L8(r27);
  L147():
    r25 = dyn base2(<sym scope>);
    goto L8(r25);
  L9():
    sym4 = ldf `is.list`;
    base4 = ldf `is.list` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L159() else L160();
  L13():
    sym11 = ldf vector;
    base11 = ldf vector in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L207() else L208();
  L148():
    numeric = ldf numeric;
    check L149() else D9();
  D9():
    deopt 60 [];
  L14(r35):
    c7 = `as.logical`(r35);
    if c7 then L163() else L15();
  L28(r78):
    st models = r78;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L211() else L212();
  L149():
    r28 = dyn numeric();
    check L150() else D10();
  L159():
    scope1 = ld scope;
    check L161() else D14();
  L160():
    r34 = dyn base4(<sym scope>);
    goto L14(r34);
  L207():
    steps1 = ld steps;
    check L209() else D32();
  L208():
    r77 = dyn base11("list", <sym steps>);
    goto L28(r77);
  D10():
    deopt 61 [r28];
  D14():
    deopt 80 [scope1];
  D32():
    deopt 148 [steps1];
  L15():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L195() else L196();
  L29(r81):
    r82 = `!`(r81);
    c17 = `as.logical`(r82);
    if c17 then L214() else L30();
  L150():
    st fdrop = r28;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L151() else L152();
  L161():
    scope2 = force? scope1;
    checkMissing(scope2);
    is_list = ldf `is.list` in base;
    r36 = dyn is_list(scope2);
    check L162() else D15();
  L163():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L164() else L165();
  L209():
    steps2 = force? steps1;
    checkMissing(steps2);
    vector = ldf vector in base;
    r79 = dyn vector("list", steps2);
    check L210() else D33();
  L211():
    keep1 = ld keep;
    check L213() else D34();
  L212():
    r80 = dyn base12(<sym keep>);
    goto L29(r80);
  D15():
    deopt 83 [r36];
  D33():
    deopt 151 [r79];
  D34():
    deopt 154 [keep1];
  L10(r30):
    st fadd = r30;
    md = ld md;
    check L155() else D13();
  L16(r38):
    r40 = `!`(r38);
    c10 = `as.logical`(r40);
    if c10 then L171() else L17();
  L24(r65):
    r66 = `!`(r65);
    c15 = `as.logical`(r66);
    if c15 then L198() else L25();
  L30():
    goto L32();
  L32():
    nobs = ldf nobs;
    check L220() else D37();
  L151():
    Terms22 = ld Terms;
    check L153() else D11();
  L152():
    r29 = dyn base3(<sym Terms>, "factors");
    goto L10(r29);
  L162():
    goto L14(r36);
  L164():
    scope3 = ld scope;
    check L166() else D16();
  L165():
    r37 = dyn base5(<lang `<-`(fdrop, `$`(scope, lower))>);
    goto L16(r37);
  L195():
    scope11 = ld scope;
    check L197() else D26();
  L196():
    r64 = dyn base9(<lang `<-`(fadd, scope)>);
    goto L24(r64);
  L210():
    goto L28(r79);
  L213():
    keep2 = force? keep1;
    checkMissing(keep2);
    c16 = `==`(keep2, NULL);
    goto L29(c16);
  L214():
    sym13 = ldf vector;
    base13 = ldf vector in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L215() else L216();
  D11():
    deopt 65 [Terms22];
  D13():
    deopt 71 [md];
  D16():
    deopt 85 [scope3];
  D26():
    deopt 124 [scope11];
  D37():
    deopt 169 [];
  L17():
    numeric1 = ldf numeric;
    check L178() else D20();
  L19(r49):
    st fdrop = r49;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L180() else L181();
  L25():
    goto L27(NULL);
  L27(r75):
    st fadd = r75;
    numeric2 = ldf numeric;
    check L205() else D30();
  L31(r84):
    st `keep.list` = r84;
    goto L32();
  L153():
    Terms23 = force? Terms22;
    checkMissing(Terms23);
    attr = ldf attr in base;
    r31 = dyn attr(Terms23, "factors");
    check L154() else D12();
  L155():
    md1 = force? md;
    checkMissing(md1);
    c6 = `as.logical`(md1);
    if c6 then L156() else L11();
  L166():
    scope4 = force? scope3;
    checkMissing(scope4);
    c8 = `is.object`(scope4);
    if c8 then L168() else L169(scope4);
  L171():
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L172() else L173();
  L197():
    scope12 = force? scope11;
    checkMissing(scope12);
    st fadd = scope12;
    c14 = `==`(scope12, NULL);
    goto L24(c14);
  L198():
    sym10 = ldf attr;
    base10 = ldf attr in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L199() else L200();
  L215():
    steps3 = ld steps;
    check L217() else D35();
  L216():
    r83 = dyn base13("list", <sym steps>);
    goto L31(r83);
  L220():
    p12 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      return object10;
    };
    r88 = dyn nobs[, `use.fallback`](p12, TRUE);
    check L221() else D38();
  D12():
    deopt 69 [r31];
  D20():
    deopt 101 [];
  D30():
    deopt 142 [];
  D35():
    deopt 161 [steps3];
  D38():
    deopt 173 [r88];
  L11():
    goto L12(NULL);
  L12(r32):
    goto L13();
  L18(r42):
    goto L19(r42);
  L20(r52):
    r54 = `!`(r52);
    c13 = `as.logical`(r54);
    if c13 then L187() else L21();
  L26(r68):
    goto L27(r68);
  L154():
    goto L10(r31);
  L156():
    st forward = FALSE;
    goto L12(FALSE);
  L167(dx11):
    st fdrop = dx11;
    c9 = `==`(dx11, NULL);
    goto L16(c9);
  L168():
    dr8 = tryDispatchBuiltin.1("$", scope4);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L170() else L169(dr8);
  L169(scope6):
    r39 = `$`(scope6, <sym lower>);
    goto L167(r39);
  L172():
    terms1 = ldf terms;
    check L174() else D17();
  L173():
    r41 = dyn base6(<lang terms(update.formula(object, fdrop))>, "factors");
    goto L18(r41);
  L178():
    r50 = dyn numeric1();
    check L179() else D21();
  L180():
    scope7 = ld scope;
    check L182() else D22();
  L181():
    r51 = dyn base7(<lang `<-`(fadd, `$`(scope, upper))>);
    goto L20(r51);
  L199():
    terms3 = ldf terms;
    check L201() else D27();
  L200():
    r67 = dyn base10(<lang terms(update.formula(object, scope))>, "factors");
    goto L26(r67);
  L205():
    r76 = dyn numeric2();
    check L206() else D31();
  L217():
    steps4 = force? steps3;
    checkMissing(steps4);
    vector1 = ldf vector in base;
    r85 = dyn vector1("list", steps4);
    check L218() else D36();
  L221():
    st n = r88;
    object11 = ld object;
    check L222() else D39();
  D17():
    deopt 94 [];
  D21():
    deopt 102 [r50];
  D22():
    deopt 105 [scope7];
  D27():
    deopt 132 [];
  D31():
    deopt 143 [r76];
  D36():
    deopt 164 [r85];
  D39():
    deopt 175 [object11];
  L21():
    goto L23(NULL);
  L23(r63):
    st fadd = r63;
    goto L13();
  L170():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L167(dx10);
  L174():
    p5 = prom<V +>{
      update_formula = ldf `update.formula`;
      p3 = prom<V +>{
        object3 = ld object;
        object4 = force? object3;
        checkMissing(object4);
        return object4;
      };
      p4 = prom<V +>{
        fdrop = ld fdrop;
        fdrop1 = force? fdrop;
        checkMissing(fdrop1);
        return fdrop1;
      };
      r45 = dyn update_formula(p3, p4);
      return r45;
    };
    r47 = dyn terms1(p5);
    check L175() else D18();
  L179():
    goto L19(r50);
  L182():
    scope8 = force? scope7;
    checkMissing(scope8);
    c11 = `is.object`(scope8);
    if c11 then L184() else L185(scope8);
  L187():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L188() else L189();
  L201():
    p11 = prom<V +>{
      update_formula2 = ldf `update.formula`;
      p9 = prom<V +>{
        object7 = ld object;
        object8 = force? object7;
        checkMissing(object8);
        return object8;
      };
      p10 = prom<V +>{
        scope13 = ld scope;
        scope14 = force? scope13;
        checkMissing(scope14);
        return scope14;
      };
      r71 = dyn update_formula2(p9, p10);
      return r71;
    };
    r73 = dyn terms3(p11);
    check L202() else D28();
  L206():
    st fdrop = r76;
    goto L13();
  L218():
    goto L31(r85);
  L222():
    object12 = force? object11;
    checkMissing(object12);
    st fit = object12;
    extractAIC = ldf extractAIC;
    check L223() else D40();
  D18():
    deopt 96 [r47];
  D28():
    deopt 134 [r73];
  D40():
    deopt 179 [];
  L22(r56):
    goto L23(r56);
  L175():
    attr1 = ldf attr in base;
    r48 = dyn attr1(r47, "factors");
    check L176() else D19();
  L183(dx13):
    st fadd = dx13;
    c12 = `==`(dx13, NULL);
    goto L20(c12);
  L184():
    dr10 = tryDispatchBuiltin.1("$", scope8);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L186() else L185(dr10);
  L185(scope10):
    r53 = `$`(scope10, <sym upper>);
    goto L183(r53);
  L188():
    terms2 = ldf terms;
    check L190() else D23();
  L189():
    r55 = dyn base8(<lang terms(update.formula(object, fadd))>, "factors");
    goto L22(r55);
  L202():
    attr3 = ldf attr in base;
    r74 = dyn attr3(r73, "factors");
    check L203() else D29();
  L223():
    p13 = prom<V +>{
      fit = ld fit;
      fit1 = force? fit;
      checkMissing(fit1);
      return fit1;
    };
    p14 = prom<V +>{
      scale1 = ld scale;
      scale2 = force? scale1;
      checkMissing(scale2);
      return scale2;
    };
    p15 = prom<V +>{
      k1 = ld k;
      k2 = force? k1;
      checkMissing(k2);
      return k2;
    };
    ddd1 = ld `...`;
    r92 = dyn extractAIC[, , k, `...`](p13, p14, p15, ddd1);
    check L224() else D41();
  D19():
    deopt 99 [r48];
  D23():
    deopt 114 [];
  D29():
    deopt 137 [r74];
  D41():
    deopt 185 [r92];
  L176():
    goto L18(r48);
  L186():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L183(dx12);
  L190():
    p8 = prom<V +>{
      update_formula1 = ldf `update.formula`;
      p6 = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        return object6;
      };
      p7 = prom<V +>{
        fadd = ld fadd;
        fadd1 = force? fadd;
        checkMissing(fadd1);
        return fadd1;
      };
      r59 = dyn update_formula1(p6, p7);
      return r59;
    };
    r61 = dyn terms2(p8);
    check L191() else D24();
  L203():
    goto L26(r74);
  L224():
    st bAIC = r92;
    bAIC = ld bAIC;
    check L225() else D42();
  D24():
    deopt 116 [r61];
  D42():
    deopt 187 [bAIC];
  L191():
    attr2 = ldf attr in base;
    r62 = dyn attr2(r61, "factors");
    check L192() else D25();
  L225():
    bAIC1 = force? bAIC;
    checkMissing(bAIC1);
    c18 = `is.object`(bAIC1);
    if c18 then L226() else L227(bAIC1);
  D25():
    deopt 119 [r62];
  L33(dx15):
    st edf = dx15;
    bAIC4 = ld bAIC;
    check L229() else D43();
  L192():
    goto L22(r62);
  L226():
    dr12 = tryDispatchBuiltin.1("[", bAIC1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L228() else L227(dr12);
  L227(bAIC3):
    __ = ldf `[` in base;
    r93 = dyn __(bAIC3, 1);
    goto L33(r93);
  D43():
    deopt 193 [bAIC4];
  L228():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L33(dx14);
  L229():
    bAIC5 = force? bAIC4;
    checkMissing(bAIC5);
    c19 = `is.object`(bAIC5);
    if c19 then L230() else L231(bAIC5);
  L34(dx17):
    st bAIC = dx17;
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L233() else L234();
  L230():
    dr14 = tryDispatchBuiltin.1("[", bAIC5);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L232() else L231(dr14);
  L231(bAIC7):
    __1 = ldf `[` in base;
    r94 = dyn __1(bAIC7, 2);
    goto L34(r94);
  L35(r96):
    c20 = `as.logical`(r96);
    if c20 then L237() else L36();
  L232():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L34(dx16);
  L233():
    bAIC8 = ld bAIC;
    check L235() else D44();
  L234():
    r95 = dyn base14(<sym bAIC>);
    goto L35(r95);
  D44():
    deopt 201 [bAIC8];
  L36():
    goto L37();
  L37():
    bAIC10 = ld bAIC;
    check L241() else D48();
  L235():
    bAIC9 = force? bAIC8;
    checkMissing(bAIC9);
    is_na = ldf `is.na` in base;
    r97 = dyn is_na(bAIC9);
    check L236() else D45();
  L237():
    stop = ldf stop;
    check L238() else D46();
  D45():
    deopt 204 [r97];
  D46():
    deopt 206 [];
  D48():
    deopt 211 [bAIC10];
  L236():
    goto L35(r97);
  L238():
    r98 = dyn stop("AIC is not defined for this model, so 'step' cannot proceed");
    check L239() else D47();
  L241():
    bAIC11 = force? bAIC10;
    checkMissing(bAIC11);
    r100 = `==`(bAIC11, -Infinity);
    c21 = `as.logical`(r100);
    if c21 then L242() else L38();
  D47():
    deopt 208 [r98];
  L38():
    goto L39();
  L39():
    st nm = 1.0;
    trace1 = ld trace;
    check L246() else D51();
  L239():
    goto L37();
  L242():
    stop1 = ldf stop;
    check L243() else D49();
  D49():
    deopt 216 [];
  D51():
    deopt 224 [trace1];
  L243():
    r101 = dyn stop1("AIC is -infinity for this model, so 'step' cannot proceed");
    check L244() else D50();
  L246():
    trace2 = force? trace1;
    checkMissing(trace2);
    c22 = `as.logical`(trace2);
    if c22 then L247() else L40();
  D50():
    deopt 218 [r101];
  L40():
    goto L41();
  L41():
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L253() else L254();
  L244():
    goto L39();
  L247():
    cat = ldf cat;
    check L248() else D52();
  D52():
    deopt 227 [];
  L42(r120):
    l16 = ld models;
    c23 = `is.object`(l16);
    if c23 then L261() else L262(r120, l16);
  L248():
    p17 = prom<V +>{
      format = ldf format;
      p16 = prom<V +>{
        sym15 = ldf round;
        base15 = ldf round in base;
        guard15 = `==`.4(sym15, base15);
        if guard15 then L1() else L2();
      L0(r104):
        return r104;
      L1():
        round = ldf round in base;
        r105 = dyn round(<sym bAIC>, 2.0);
        goto L0(r105);
      L2():
        r103 = dyn base15(<sym bAIC>, 2.0);
        goto L0(r103);
      };
      r107 = dyn format(p16);
      return r107;
    };
    p21 = prom<V +>{
      cut_string = ldf `cut.string`;
      p20 = prom<V +>{
        deparse = ldf deparse;
        p19 = prom<V +>{
          formula = ldf formula;
          p18 = prom<V +>{
            fit2 = ld fit;
            fit3 = force? fit2;
            checkMissing(fit3);
            return fit3;
          };
          r110 = dyn formula(p18);
          return r110;
        };
        r112 = dyn deparse(p19);
        return r112;
      };
      r114 = dyn cut_string(p20);
      return r114;
    };
    r116 = dyn cat[, , , , , sep]("Start:  AIC=", p17, "\n", p21, "\n\n", "");
    check L249() else D53();
  L253():
    mydeviance = ldf mydeviance;
    check L255() else D56();
  L254():
    r119 = dyn base16[deviance, `df.resid`, change, AIC](<lang mydeviance(fit)>, <lang `-`(n, edf)>, "", <sym bAIC>);
    goto L42(r119);
  D53():
    deopt 235 [r116];
  D56():
    deopt 244 [];
  L43(dx19):
    st models = dx19;
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L265() else L266();
  L249():
    flush_console = ldf `flush.console`;
    check L250() else D54();
  L255():
    p22 = prom<V +>{
      fit4 = ld fit;
      fit5 = force? fit4;
      checkMissing(fit5);
      return fit5;
    };
    r122 = dyn mydeviance(p22);
    check L256() else D57();
  L261():
    dr16 = tryDispatchBuiltin.0("[[<-", l16, r120);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L263() else L262(r120, dr16);
  L262(r126, l18):
    nm = ld nm;
    check L264() else D62();
  D54():
    deopt 237 [];
  D57():
    deopt 246 [r122];
  D62():
    deopt 261 [r126, l18, r120, nm];
  L44(r131):
    r132 = `!`(r131);
    c25 = `as.logical`(r132);
    if c25 then L268() else L45();
  L250():
    r117 = dyn flush_console();
    check L251() else D55();
  L256():
    n = ld n;
    check L257() else D58();
  L263():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L43(dx18);
  L264():
    nm1 = force? nm;
    ____ = ldf `[[<-` in base;
    r129 = dyn ____(l18, r120, nm1);
    goto L43(r129);
  L265():
    keep3 = ld keep;
    check L267() else D63();
  L266():
    r130 = dyn base17(<sym keep>);
    goto L44(r130);
  D55():
    deopt 238 [r117];
  D58():
    deopt 248 [n];
  D63():
    deopt 266 [keep3];
  L45():
    goto L47();
  L47():
    st usingCp = FALSE;
    goto L115();
  L251():
    goto L41();
  L257():
    n1 = force? n;
    checkMissing(n1);
    edf = ld edf;
    check L258() else D59();
  L267():
    keep4 = force? keep3;
    checkMissing(keep4);
    c24 = `==`(keep4, NULL);
    goto L44(c24);
  L268():
    keep5 = ldf keep;
    check L269() else D64();
  D59():
    deopt 249 [n1, edf];
  D64():
    deopt 271 [];
  L115():
    steps5 = ld steps;
    check L276() else D67();
  L258():
    edf1 = force? edf;
    checkMissing(edf1);
    r123 = `-`(n1, edf1);
    bAIC12 = ld bAIC;
    check L259() else D60();
  L269():
    p23 = prom<V +>{
      fit6 = ld fit;
      fit7 = force? fit6;
      checkMissing(fit7);
      return fit7;
    };
    p24 = prom<V +>{
      bAIC14 = ld bAIC;
      bAIC15 = force? bAIC14;
      checkMissing(bAIC15);
      return bAIC15;
    };
    r135 = dyn keep5(p23, p24);
    check L270() else D65();
  D60():
    deopt 255 [bAIC12];
  D65():
    deopt 274 [r135];
  D67():
    deopt 285 [steps5];
  L259():
    bAIC13 = force? bAIC12;
    checkMissing(bAIC13);
    list = ldf list in base;
    r124 = dyn list(r122, r123, "", bAIC13);
    check L260() else D61();
  L270():
    l19 = ld `keep.list`;
    c26 = `is.object`(l19);
    if c26 then L271() else L272(r135, l19);
  L276():
    steps6 = force? steps5;
    checkMissing(steps6);
    r142 = `>`(steps6, 0.0);
    c27 = `as.logical`(r142);
    if c27 then L277() else L48();
  D61():
    deopt 259 [r124];
  L46(r139, dx21):
    st `keep.list` = dx21;
    goto L47();
  L48():
    sym43 = ldf `is.null`;
    base43 = ldf `is.null` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L548() else L549();
  L260():
    goto L42(r124);
  L271():
    dr18 = tryDispatchBuiltin.0("[[<-", l19, r135);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L273() else L272(r135, dr18);
  L272(r137, l21):
    nm2 = ld nm;
    check L274() else D66();
  L277():
    steps7 = ld steps;
    check L278() else D68();
  D66():
    deopt 276 [r137, l21, r135, nm2];
  D68():
    deopt 289 [steps7];
  L116(r375):
    r376 = `!`(r375);
    c118 = `as.logical`(r376);
    if c118 then L551() else L117();
  L273():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L46(r135, dx20);
  L274():
    nm3 = force? nm2;
    ____1 = ldf `[[<-` in base;
    r140 = dyn ____1(l21, r135, nm3);
    goto L46(r137, r140);
  L278():
    steps8 = force? steps7;
    checkMissing(steps8);
    r143 = `-`(steps8, 1.0);
    st steps = r143;
    bAIC16 = ld bAIC;
    check L279() else D69();
  L548():
    keep9 = ld keep;
    check L550() else D183();
  L549():
    r374 = dyn base43(<sym keep>);
    goto L116(r374);
  D69():
    deopt 294 [bAIC16];
  D183():
    deopt 755 [keep9];
  L117():
    goto L118();
  L118():
    step_results = ldf `step.results`;
    check L559() else D186();
  L279():
    bAIC17 = force? bAIC16;
    checkMissing(bAIC17);
    st AIC = bAIC17;
    sym18 = ldf attr;
    base18 = ldf attr in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L280() else L281();
  L550():
    keep10 = force? keep9;
    checkMissing(keep10);
    c117 = `==`(keep10, NULL);
    goto L116(c117);
  L551():
    re_arrange = ldf `re.arrange`;
    check L552() else D184();
  D184():
    deopt 760 [];
  D186():
    deopt 769 [];
  L49(r145):
    st ffac = r145;
    factor_scope = ldf `factor.scope`;
    check L284() else D72();
  L280():
    Terms24 = ld Terms;
    check L282() else D70();
  L281():
    r144 = dyn base18(<sym Terms>, "factors");
    goto L49(r144);
  L552():
    p68 = prom<V +>{
      keep_list = ld `keep.list`;
      keep_list1 = force? keep_list;
      checkMissing(keep_list1);
      c119 = `is.object`(keep_list1);
      if c119 then L1() else L2(keep_list1);
    L0(dx86):
      return dx86;
    L1():
      dr78 = tryDispatchBuiltin.1("[", keep_list1);
      dc39 = getTryDispatchBuiltinDispatched(dr78);
      if dc39 then L3() else L2(dr78);
    L2(keep_list3):
      seq = ldf seq;
      p67 = prom<V +>{
        nm10 = ld nm;
        nm11 = force? nm10;
        checkMissing(nm11);
        return nm11;
      };
      r378 = dyn seq(p67);
      __19 = ldf `[` in base;
      r379 = dyn __19(keep_list3, r378);
      goto L0(r379);
    L3():
      dx85 = getTryDispatchBuiltinValue(dr78);
      goto L0(dx85);
    };
    r381 = dyn re_arrange(p68);
    check L553() else D185();
  L559():
    p70 = prom<V +>{
      models = ld models;
      models1 = force? models;
      checkMissing(models1);
      c121 = `is.object`(models1);
      if c121 then L1() else L2(models1);
    L0(dx90):
      return dx90;
    L1():
      dr82 = tryDispatchBuiltin.1("[", models1);
      dc41 = getTryDispatchBuiltinDispatched(dr82);
      if dc41 then L3() else L2(dr82);
    L2(models3):
      seq1 = ldf seq;
      p69 = prom<V +>{
        nm12 = ld nm;
        nm13 = force? nm12;
        checkMissing(nm13);
        return nm13;
      };
      r389 = dyn seq1(p69);
      __20 = ldf `[` in base;
      r390 = dyn __20(models3, r389);
      goto L0(r390);
    L3():
      dx89 = getTryDispatchBuiltinValue(dr82);
      goto L0(dx89);
    };
    p71 = prom<V +>{
      fit28 = ld fit;
      fit29 = force? fit28;
      checkMissing(fit29);
      return fit29;
    };
    p72 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      return object14;
    };
    p73 = prom<V +>{
      usingCp = ld usingCp;
      usingCp1 = force? usingCp;
      checkMissing(usingCp1);
      return usingCp1;
    };
    r395 = dyn step_results[models, , , ](p70, p71, p72, p73);
    check L560() else D187();
  D70():
    deopt 299 [Terms24];
  D72():
    deopt 306 [];
  D185():
    deopt 762 [r381];
  D187():
    deopt 775 [r395];
  L282():
    Terms25 = force? Terms24;
    checkMissing(Terms25);
    attr4 = ldf attr in base;
    r146 = dyn attr4(Terms25, "factors");
    check L283() else D71();
  L284():
    p25 = prom<V +>{
      ffac = ld ffac;
      ffac1 = force? ffac;
      checkMissing(ffac1);
      return ffac1;
    };
    p26 = prom<V +>{
      sym19 = ldf list;
      base19 = ldf list in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r149):
      return r149;
    L1():
      fadd2 = ld fadd;
      fadd3 = force? fadd2;
      checkMissing(fadd3);
      fdrop2 = ld fdrop;
      fdrop3 = force? fdrop2;
      checkMissing(fdrop3);
      list1 = ldf list in base;
      r150 = dyn list1(fadd3, fdrop3);
      goto L0(r150);
    L2():
      r148 = dyn base19[add, drop](<sym fadd>, <sym fdrop>);
      goto L0(r148);
    };
    r152 = dyn factor_scope(p25, p26);
    check L285() else D73();
  L553():
    l31 = ld fit;
    c120 = `is.object`(l31);
    if c120 then L555() else L556(r381, l31);
  L560():
    popenv;
    return r395;
  D71():
    deopt 303 [r146];
  D73():
    deopt 309 [r152];
  L283():
    goto L49(r146);
  L285():
    st scope = r152;
    st aod = NULL;
    st change = NULL;
    backward = ld backward;
    check L286() else D74();
  L554(r385, dx88):
    st fit = dx88;
    goto L118();
  L555():
    dr80 = tryDispatchBuiltin.0("$<-", l31, r381);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L557() else L556(r381, dr80);
  L556(r383, l33):
    r386 = `$<-`(l33, <sym keep>, r381);
    goto L554(r383, r386);
  D74():
    deopt 317 [backward];
  L286():
    backward1 = force? backward;
    checkMissing(backward1);
    c28 = `as.logical`(backward1);
    if c28 then L287() else L50(c28);
  L557():
    dx87 = getTryDispatchBuiltinValue(dr80);
    goto L554(r381, dx87);
  L50(c30):
    c42 = `as.logical`(c30);
    if c42 then L297() else L52();
  L287():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L288() else L289();
  L51(c33, r154):
    c39 = `as.logical`(r154);
    c40 = `&&`(c33, c39);
    goto L50(c40);
  L52():
    goto L60();
  L60():
    sym24 = ldf `is.null`;
    base24 = ldf `is.null` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L342() else L343();
  L288():
    scope15 = ld scope;
    check L290() else D75();
  L289():
    r153 = dyn base20(<lang `$`(scope, drop)>);
    goto L51(c28, r153);
  L297():
    drop1 = ldf drop1;
    check L298() else D77();
  D75():
    deopt 321 [c28, scope15];
  D77():
    deopt 328 [];
  L61(r205):
    c54 = `as.logical`(r205);
    if c54 then L345() else L62();
  L290():
    scope16 = force? scope15;
    checkMissing(scope16);
    c34 = `is.object`(scope16);
    if c34 then L292() else L293(c28, scope16);
  L298():
    p27 = prom<V +>{
      fit8 = ld fit;
      fit9 = force? fit8;
      checkMissing(fit9);
      return fit9;
    };
    p28 = prom<V +>{
      scope19 = ld scope;
      scope20 = force? scope19;
      checkMissing(scope20);
      c43 = `is.object`(scope20);
      if c43 then L1() else L2(scope20);
    L0(dx25):
      return dx25;
    L1():
      dr22 = tryDispatchBuiltin.1("$", scope20);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(scope22):
      r158 = `$`(scope22, <sym drop>);
      goto L0(r158);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx24);
    };
    p29 = prom<V +>{
      scale3 = ld scale;
      scale4 = force? scale3;
      checkMissing(scale4);
      return scale4;
    };
    p30 = prom<V +>{
      trace3 = ld trace;
      trace4 = force? trace3;
      checkMissing(trace4);
      return trace4;
    };
    p31 = prom<V +>{
      k3 = ld k;
      k4 = force? k3;
      checkMissing(k4);
      return k4;
    };
    ddd2 = ld `...`;
    r163 = dyn drop1[, , scale, trace, k, `...`](p27, p28, p29, p30, p31, ddd2);
    check L299() else D78();
  L342():
    change = ld change;
    check L344() else D94();
  L343():
    r204 = dyn base24(<sym change>);
    goto L61(r204);
  D78():
    deopt 338 [r163];
  D94():
    deopt 402 [change];
  L62():
    goto L94();
  L94():
    sym35 = ldf match;
    base35 = ldf match in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L466() else L467();
  L291(c38, dx23):
    length = ldf length in base;
    r156 = dyn length(dx23);
    check L295() else D76();
  L292():
    dr20 = tryDispatchBuiltin.1("$", scope16);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L294() else L293(c28, dr20);
  L293(c36, scope18):
    r155 = `$`(scope18, <sym drop>);
    goto L291(c36, r155);
  L299():
    st aod = r163;
    row_names = ldf `row.names`;
    check L300() else D79();
  L344():
    change1 = force? change;
    checkMissing(change1);
    c53 = `==`(change1, NULL);
    goto L61(c53);
  L345():
    forward = ld forward;
    check L346() else D95();
  D76():
    deopt 325 [c38, r156];
  D79():
    deopt 341 [];
  D95():
    deopt 405 [forward];
  L95(r296):
    r301 = `>`(r296, 0);
    st usingCp = r301;
    update = ldf update;
    check L473() else D142();
  L294():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L291(c28, dx22);
  L295():
    goto L51(c38, r156);
  L300():
    p32 = prom<V +>{
      aod = ld aod;
      aod1 = force? aod;
      checkMissing(aod1);
      return aod1;
    };
    r165 = dyn row_names(p32);
    check L301() else D80();
  L346():
    forward1 = force? forward;
    checkMissing(forward1);
    c55 = `as.logical`(forward1);
    if c55 then L347() else L63(c55);
  L466():
    sym36 = ldf names;
    base36 = ldf names in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L468() else L469();
  L467():
    r295 = dyn base35("Cp", <lang names(aod)>, 0);
    goto L95(r295);
  D80():
    deopt 343 [r165];
  D142():
    deopt 605 [];
  L63(c57):
    c69 = `as.logical`(c57);
    if c69 then L357() else L65();
  L96(r298):
    match1 = ldf match in base;
    r300 = dyn match1("Cp", r298, 0, NULL);
    check L472() else D141();
  L301():
    st rn = r165;
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L302() else L303();
  L347():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L348() else L349();
  L468():
    aod52 = ld aod;
    check L470() else D139();
  L469():
    r297 = dyn base36(<sym aod>);
    goto L96(r297);
  L473():
    p49 = prom<V +>{
      fit12 = ld fit;
      fit13 = force? fit12;
      checkMissing(fit13);
      return fit13;
    };
    p51 = prom<V +>{
      paste2 = ldf paste;
      p50 = prom<V +>{
        change2 = ld change;
        change3 = force? change2;
        checkMissing(change3);
        return change3;
      };
      r304 = dyn paste2("~ .", p50);
      return r304;
    };
    r306 = dyn update[, , evaluate](p49, p51, FALSE);
    check L474() else D143();
  D139():
    deopt 593 [aod52];
  D141():
    deopt 600 [r300];
  D143():
    deopt 610 [r306];
  L53(r167):
    l22 = ld aod;
    row_names__ = ldf `row.names<-`;
    check L311() else D85();
  L64(c60, r207):
    c66 = `as.logical`(r207);
    c67 = `&&`(c60, c66);
    goto L63(c67);
  L65():
    goto L71();
  L71():
    l24 = ld aod;
    attr__ = ldf `attr<-`;
    check L382() else D112();
  L302():
    rn = ld rn;
    check L304() else D81();
  L303():
    r166 = dyn base21(<lang `[`(rn, 1)>, <lang paste("-", `[`(rn, `-`(1)))>);
    goto L53(r166);
  L348():
    scope23 = ld scope;
    check L350() else D96();
  L349():
    r206 = dyn base25(<lang `$`(scope, add)>);
    goto L64(c55, r206);
  L357():
    add1 = ldf add1;
    check L358() else D98();
  L470():
    aod53 = force? aod52;
    checkMissing(aod53);
    names1 = ldf names in base;
    r299 = dyn names1(aod53);
    check L471() else D140();
  L472():
    goto L95(r300);
  L474():
    st fit = r306;
    eval_parent = ldf `eval.parent`;
    check L475() else D144();
  D81():
    deopt 347 [rn];
  D85():
    deopt 360 [r167, l22, r167];
  D96():
    deopt 409 [c55, scope23];
  D98():
    deopt 416 [];
  D112():
    deopt 469 [NULL, l24, NULL];
  D140():
    deopt 596 [r299];
  D144():
    deopt 613 [];
  L304():
    rn1 = force? rn;
    checkMissing(rn1);
    c44 = `is.object`(rn1);
    if c44 then L305() else L306(rn1);
  L311():
    r173 = dyn row_names__(l22, NULL, r167);
    check L312() else D86();
  L350():
    scope24 = force? scope23;
    checkMissing(scope24);
    c61 = `is.object`(scope24);
    if c61 then L352() else L353(c55, scope24);
  L358():
    p36 = prom<V +>{
      fit10 = ld fit;
      fit11 = force? fit10;
      checkMissing(fit11);
      return fit11;
    };
    p37 = prom<V +>{
      scope27 = ld scope;
      scope28 = force? scope27;
      checkMissing(scope28);
      c70 = `is.object`(scope28);
      if c70 then L1() else L2(scope28);
    L0(dx45):
      return dx45;
    L1():
      dr40 = tryDispatchBuiltin.1("$", scope28);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(scope30):
      r211 = `$`(scope30, <sym add>);
      goto L0(r211);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx44);
    };
    p38 = prom<V +>{
      scale5 = ld scale;
      scale6 = force? scale5;
      checkMissing(scale6);
      return scale6;
    };
    p39 = prom<V +>{
      trace5 = ld trace;
      trace6 = force? trace5;
      checkMissing(trace6);
      return trace6;
    };
    p40 = prom<V +>{
      k5 = ld k;
      k6 = force? k5;
      checkMissing(k6);
      return k6;
    };
    ddd3 = ld `...`;
    r216 = dyn add1[, , scale, trace, k, `...`](p36, p37, p38, p39, p40, ddd3);
    check L359() else D99();
  L382():
    r233 = dyn attr__(l24, NULL, "heading", NULL);
    check L383() else D113();
  L471():
    goto L96(r299);
  L475():
    p52 = prom<V +>{
      fit14 = ld fit;
      fit15 = force? fit14;
      checkMissing(fit15);
      return fit15;
    };
    r308 = dyn eval_parent(p52);
    check L476() else D145();
  D86():
    deopt 362 [r167, r173];
  D99():
    deopt 426 [r216];
  D113():
    deopt 472 [NULL, r233];
  D145():
    deopt 615 [r308];
  L54(dx27):
    paste = ldf paste;
    check L308() else D82();
  L305():
    dr24 = tryDispatchBuiltin.1("[", rn1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L307() else L306(dr24);
  L306(rn3):
    __2 = ldf `[` in base;
    r168 = dyn __2(rn3, 1);
    goto L54(r168);
  L312():
    st aod = r173;
    sym22 = ldf any;
    base22 = ldf any in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L313() else L314();
  L351(c65, dx43):
    length1 = ldf length in base;
    r209 = dyn length1(dx43);
    check L355() else D97();
  L352():
    dr38 = tryDispatchBuiltin.1("$", scope24);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L354() else L353(c55, dr38);
  L353(c63, scope26):
    r208 = `$`(scope26, <sym add>);
    goto L351(c63, r208);
  L359():
    st aodf = r216;
    row_names1 = ldf `row.names`;
    check L360() else D100();
  L383():
    st aod = r233;
    sym28 = ldf `is.null`;
    base28 = ldf `is.null` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L384() else L385();
  L476():
    st fit = r308;
    nobs1 = ldf nobs;
    check L477() else D146();
  D82():
    deopt 353 [];
  D97():
    deopt 413 [c65, r209];
  D100():
    deopt 429 [];
  D146():
    deopt 618 [];
  L55(r175):
    c48 = `as.logical`(r175);
    if c48 then L321() else L56();
  L72(r235):
    r237 = `!`(r235);
    c79 = `as.logical`(r237);
    if c79 then L391() else L73();
  L307():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L54(dx26);
  L308():
    p33 = prom<V +>{
      rn4 = ld rn;
      rn5 = force? rn4;
      checkMissing(rn5);
      c45 = `is.object`(rn5);
      if c45 then L1() else L2(rn5);
    L0(dx29):
      return dx29;
    L1():
      dr26 = tryDispatchBuiltin.1("[", rn5);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(rn7):
      __3 = ldf `[` in base;
      r169 = dyn __3(rn7, -1);
      goto L0(r169);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx28);
    };
    r171 = dyn paste("-", p33);
    check L309() else D83();
  L313():
    aod2 = ld aod;
    check L315() else D87();
  L314():
    r174 = dyn base22[, `na.rm`](<lang `==`(`$`(aod, Df), 0.0)>, TRUE);
    goto L55(r174);
  L354():
    dx42 = getTryDispatchBuiltinValue(dr38);
    goto L351(c55, dx42);
  L355():
    goto L64(c65, r209);
  L360():
    p41 = prom<V +>{
      aodf = ld aodf;
      aodf1 = force? aodf;
      checkMissing(aodf1);
      return aodf1;
    };
    r218 = dyn row_names1(p41);
    check L361() else D101();
  L384():
    aod20 = ld aod;
    check L386() else D114();
  L385():
    r234 = dyn base28(<lang `$`(aod, Df)>);
    goto L72(r234);
  L477():
    p53 = prom<V +>{
      fit16 = ld fit;
      fit17 = force? fit16;
      checkMissing(fit17);
      return fit17;
    };
    r310 = dyn nobs1[, `use.fallback`](p53, TRUE);
    check L478() else D147();
  D83():
    deopt 356 [r171];
  D87():
    deopt 366 [aod2];
  D101():
    deopt 431 [r218];
  D114():
    deopt 475 [aod20];
  D147():
    deopt 622 [r310];
  L56():
    goto L59(NULL);
  L59(dx40):
    goto L60();
  L73():
    goto L75(NULL);
  L75(r252):
    st nzdf = r252;
    aod32 = ld aod;
    check L406() else D118();
  L309():
    c46 = ldf c in base;
    r172 = dyn c46(dx27, r171);
    check L310() else D84();
  L315():
    aod3 = force? aod2;
    checkMissing(aod3);
    c47 = `is.object`(aod3);
    if c47 then L317() else L318(aod3);
  L321():
    aod6 = ld aod;
    check L322() else D89();
  L361():
    st rn = r218;
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L362() else L363();
  L386():
    aod21 = force? aod20;
    checkMissing(aod21);
    c77 = `is.object`(aod21);
    if c77 then L388() else L389(aod21);
  L391():
    aod24 = ld aod;
    check L392() else D115();
  L478():
    st nnew = r310;
    sym37 = ldf all;
    base37 = ldf all in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L479() else L480();
  D84():
    deopt 358 [r172];
  D89():
    deopt 375 [aod6];
  D115():
    deopt 480 [aod24];
  D118():
    deopt 495 [aod32];
  L66(r220):
    l23 = ld aodf;
    row_names__1 = ldf `row.names<-`;
    check L371() else D106();
  L97(r312):
    c102 = `as.logical`(r312);
    if c102 then L490() else L100(c102);
  L310():
    goto L53(r172);
  L316(dx31):
    r177 = `==`(dx31, 0.0);
    any = ldf any in base;
    r178 = dyn any(r177, TRUE);
    check L320() else D88();
  L317():
    dr28 = tryDispatchBuiltin.1("$", aod3);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L319() else L318(dr28);
  L318(aod5):
    r176 = `$`(aod5, <sym Df>);
    goto L316(r176);
  L322():
    aod7 = force? aod6;
    checkMissing(aod7);
    c49 = `is.object`(aod7);
    if c49 then L324() else L325(aod7);
  L362():
    rn8 = ld rn;
    check L364() else D102();
  L363():
    r219 = dyn base26(<lang `[`(rn, 1)>, <lang paste("+", `[`(rn, `-`(1)))>);
    goto L66(r219);
  L387(dx53):
    c78 = `==`(dx53, NULL);
    goto L72(c78);
  L388():
    dr48 = tryDispatchBuiltin.1("$", aod21);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L390() else L389(dr48);
  L389(aod23):
    r236 = `$`(aod23, <sym Df>);
    goto L387(r236);
  L392():
    aod25 = force? aod24;
    checkMissing(aod25);
    c80 = `is.object`(aod25);
    if c80 then L394() else L395(aod25);
  L406():
    aod33 = force? aod32;
    checkMissing(aod33);
    c82 = `is.object`(aod33);
    if c82 then L407() else L408(aod33);
  L479():
    sym38 = ldf `is.finite`;
    base38 = ldf `is.finite` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L481() else L482();
  L480():
    r311 = dyn base37(<lang is.finite(c(n, nnew))>);
    goto L97(r311);
  D88():
    deopt 374 [r178];
  D102():
    deopt 435 [rn8];
  D106():
    deopt 448 [r220, l23, r220];
  L76(dx59):
    st aod = dx59;
    sym30 = ldf `is.null`;
    base30 = ldf `is.null` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L411() else L412();
  L98(r314):
    all = ldf all in base;
    r319 = dyn all(r314);
    check L489() else D152();
  L100(c104):
    c108 = `as.logical`(c104);
    if c108 then L494() else L101();
  L319():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L316(dx30);
  L320():
    goto L55(r178);
  L323(dx33):
    r180 = `==`(dx33, 0.0);
    sym23 = ldf `is.na`;
    base23 = ldf `is.na` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L327() else L328();
  L324():
    dr30 = tryDispatchBuiltin.1("$", aod7);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L326() else L325(dr30);
  L325(aod9):
    r179 = `$`(aod9, <sym Df>);
    goto L323(r179);
  L364():
    rn9 = force? rn8;
    checkMissing(rn9);
    c71 = `is.object`(rn9);
    if c71 then L365() else L366(rn9);
  L371():
    r226 = dyn row_names__1(l23, NULL, r220);
    check L372() else D107();
  L390():
    dx52 = getTryDispatchBuiltinValue(dr48);
    goto L387(dx52);
  L393(dx55):
    r239 = `!=`(dx55, 0.0);
    sym29 = ldf `is.na`;
    base29 = ldf `is.na` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L397() else L398();
  L394():
    dr50 = tryDispatchBuiltin.1("$", aod25);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L396() else L395(dr50);
  L395(aod27):
    r238 = `$`(aod27, <sym Df>);
    goto L393(r238);
  L407():
    dr54 = tryDispatchBuiltin.1("[", aod33);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L409() else L408(dr54);
  L408(aod35):
    nzdf = ld nzdf;
    check L410() else D119();
  L481():
    sym39 = ldf c;
    base39 = ldf c in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L483() else L484();
  L482():
    r313 = dyn base38(<lang c(n, nnew)>);
    goto L98(r313);
  L490():
    nnew2 = ld nnew;
    check L491() else D153();
  D107():
    deopt 450 [r220, r226];
  D119():
    deopt 497 [aod35, nzdf];
  D152():
    deopt 639 [r319];
  D153():
    deopt 640 [c102, nnew2];
  L57(r184, r185):
    r192 = `!`(r185);
    r193 = `&&`(r184, r192);
    st zdf = r193;
    rev = ldf rev;
    check L335() else D92();
  L67(dx47):
    paste1 = ldf paste;
    check L368() else D103();
  L74(r243, r244):
    r251 = `||`(r243, r244);
    goto L75(r251);
  L77(r255):
    c84 = `as.logical`(r255);
    if c84 then L78(c84) else L414();
  L99(r316):
    is_finite = ldf `is.finite` in base;
    r318 = dyn is_finite(r316);
    check L488() else D151();
  L101():
    goto L102();
  L102():
    terms4 = ldf terms;
    check L498() else D157();
  L326():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L323(dx32);
  L327():
    aod10 = ld aod;
    check L329() else D90();
  L328():
    r183 = dyn base23(<lang `$`(aod, Df)>);
    goto L57(r180, r183);
  L365():
    dr42 = tryDispatchBuiltin.1("[", rn9);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L367() else L366(dr42);
  L366(rn11):
    __6 = ldf `[` in base;
    r221 = dyn __6(rn11, 1);
    goto L67(r221);
  L372():
    st aodf = r226;
    sym27 = ldf `is.null`;
    base27 = ldf `is.null` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L373() else L374();
  L396():
    dx54 = getTryDispatchBuiltinValue(dr50);
    goto L393(dx54);
  L397():
    aod28 = ld aod;
    check L399() else D116();
  L398():
    r242 = dyn base29(<lang `$`(aod, Df)>);
    goto L74(r239, r242);
  L409():
    dx58 = getTryDispatchBuiltinValue(dr54);
    goto L76(dx58);
  L410():
    nzdf1 = force? nzdf;
    __9 = ldf `[` in base;
    r253 = dyn __9(aod33, nzdf1, <missing>);
    goto L76(r253);
  L411():
    aod36 = ld aod;
    check L413() else D120();
  L412():
    r254 = dyn base30(<sym aod>);
    goto L77(r254);
  L483():
    n2 = ld n;
    check L485() else D148();
  L484():
    r315 = dyn base39(<sym n>, <sym nnew>);
    goto L99(r315);
  L489():
    goto L97(r319);
  L491():
    nnew3 = force? nnew2;
    checkMissing(nnew3);
    n4 = ld n;
    check L492() else D154();
  L494():
    stop2 = ldf stop;
    check L495() else D155();
  D90():
    deopt 381 [r180, aod10];
  D92():
    deopt 390 [];
  D103():
    deopt 441 [];
  D116():
    deopt 486 [r239, aod28];
  D120():
    deopt 504 [aod36];
  D148():
    deopt 630 [n2];
  D151():
    deopt 637 [r318];
  D154():
    deopt 641 [c102, nnew3, n4];
  D155():
    deopt 646 [];
  D157():
    deopt 652 [];
  L68(r228):
    c75 = `as.logical`(r228);
    if c75 then L376() else L69();
  L78(c85):
    c90 = `as.logical`(c85);
    if c90 then L418() else L79();
  L329():
    aod11 = force? aod10;
    checkMissing(aod11);
    c50 = `is.object`(aod11);
    if c50 then L331() else L332(r180, aod11);
  L335():
    p35 = prom<V +>{
      rownames = ldf rownames;
      p34 = prom<V +>{
        aod14 = ld aod;
        aod15 = force? aod14;
        checkMissing(aod15);
        return aod15;
      };
      r195 = dyn rownames(p34);
      c51 = `is.object`(r195);
      if c51 then L1() else L2(r195);
    L0(dx37):
      return dx37;
    L1():
      dr34 = tryDispatchBuiltin.1("[", r195);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(r197):
      zdf = ld zdf;
      zdf1 = force? zdf;
      __4 = ldf `[` in base;
      r198 = dyn __4(r197, zdf1);
      goto L0(r198);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx36);
    };
    r200 = dyn rev(p35);
    check L336() else D93();
  L367():
    dx46 = getTryDispatchBuiltinValue(dr42);
    goto L67(dx46);
  L368():
    p42 = prom<V +>{
      rn12 = ld rn;
      rn13 = force? rn12;
      checkMissing(rn13);
      c72 = `is.object`(rn13);
      if c72 then L1() else L2(rn13);
    L0(dx49):
      return dx49;
    L1():
      dr44 = tryDispatchBuiltin.1("[", rn13);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(rn15):
      __7 = ldf `[` in base;
      r222 = dyn __7(rn15, -1);
      goto L0(r222);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx48);
    };
    r224 = dyn paste1("+", p42);
    check L369() else D104();
  L373():
    aod16 = ld aod;
    check L375() else D108();
  L374():
    r227 = dyn base27(<sym aod>);
    goto L68(r227);
  L399():
    aod29 = force? aod28;
    checkMissing(aod29);
    c81 = `is.object`(aod29);
    if c81 then L401() else L402(r239, aod29);
  L413():
    aod37 = force? aod36;
    checkMissing(aod37);
    c83 = `==`(aod37, NULL);
    goto L77(c83);
  L414():
    ncol = ldf ncol;
    check L415() else D121();
  L485():
    n3 = force? n2;
    checkMissing(n3);
    nnew = ld nnew;
    check L486() else D149();
  L488():
    goto L98(r318);
  L492():
    n5 = force? n4;
    checkMissing(n5);
    r320 = `!=`(nnew3, n5);
    c105 = `as.logical`(r320);
    c106 = `&&`(c102, c105);
    goto L100(c106);
  L495():
    r321 = dyn stop2("number of rows in use has changed: remove missing values?");
    check L496() else D156();
  L498():
    p54 = prom<V +>{
      fit18 = ld fit;
      fit19 = force? fit18;
      checkMissing(fit19);
      return fit19;
    };
    r324 = dyn terms4(p54);
    check L499() else D158();
  D93():
    deopt 392 [r200];
  D104():
    deopt 444 [r224];
  D108():
    deopt 453 [aod16];
  D121():
    deopt 508 [c84];
  D149():
    deopt 632 [nnew];
  D156():
    deopt 648 [r321];
  D158():
    deopt 654 [r324];
  L69():
    rbind = ldf rbind;
    check L379() else D110();
  L70(aodf4):
    st aod = aodf4;
    goto L71();
  L79():
    sym31 = ldf match;
    base31 = ldf match in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L421() else L422();
  L330(r189, dx35):
    is_na1 = ldf `is.na` in base;
    r191 = dyn is_na1(dx35);
    check L334() else D91();
  L331():
    dr32 = tryDispatchBuiltin.1("$", aod11);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L333() else L332(r180, dr32);
  L332(r187, aod13):
    r190 = `$`(aod13, <sym Df>);
    goto L330(r187, r190);
  L336():
    c52 = `is.object`(r200);
    if c52 then L337() else L338(r200);
  L369():
    c73 = ldf c in base;
    r225 = dyn c73(dx47, r224);
    check L370() else D105();
  L375():
    aod17 = force? aod16;
    checkMissing(aod17);
    c74 = `==`(aod17, NULL);
    goto L68(c74);
  L376():
    aodf2 = ld aodf;
    check L377() else D109();
  L400(r248, dx57):
    is_na2 = ldf `is.na` in base;
    r250 = dyn is_na2(dx57);
    check L404() else D117();
  L401():
    dr52 = tryDispatchBuiltin.1("$", aod29);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L403() else L402(r239, dr52);
  L402(r246, aod31):
    r249 = `$`(aod31, <sym Df>);
    goto L400(r246, r249);
  L415():
    p45 = prom<V +>{
      aod38 = ld aod;
      aod39 = force? aod38;
      checkMissing(aod39);
      return aod39;
    };
    r257 = dyn ncol(p45);
    check L416() else D122();
  L418():
    goto L48();
  L486():
    nnew1 = force? nnew;
    checkMissing(nnew1);
    c101 = ldf c in base;
    r317 = dyn c101(n3, nnew1);
    check L487() else D150();
  L496():
    goto L102();
  L499():
    st Terms = r324;
    extractAIC1 = ldf extractAIC;
    check L500() else D159();
  D91():
    deopt 385 [r189, r191];
  D105():
    deopt 446 [r225];
  D109():
    deopt 456 [aodf2];
  D110():
    deopt 459 [];
  D117():
    deopt 490 [r248, r250];
  D122():
    deopt 510 [c84, r257];
  D150():
    deopt 635 [r317];
  D159():
    deopt 657 [];
  L58(dx39):
    st change = dx39;
    goto L59(dx39);
  L81(r261):
    st nc = r261;
    nc = ld nc;
    check L431() else D127();
  L333():
    dx34 = getTryDispatchBuiltinValue(dr32);
    goto L330(r180, dx34);
  L334():
    goto L57(r189, r191);
  L337():
    dr36 = tryDispatchBuiltin.1("[", r200);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L339() else L338(dr36);
  L338(r202):
    __5 = ldf `[` in base;
    r203 = dyn __5(r202, 1);
    goto L58(r203);
  L370():
    goto L66(r225);
  L377():
    aodf3 = force? aodf2;
    checkMissing(aodf3);
    goto L70(aodf3);
  L379():
    p43 = prom<V +>{
      aod18 = ld aod;
      aod19 = force? aod18;
      checkMissing(aod19);
      return aod19;
    };
    p44 = prom<V +>{
      aodf5 = ld aodf;
      aodf6 = force? aodf5;
      checkMissing(aodf6);
      c76 = `is.object`(aodf6);
      if c76 then L1() else L2();
    L0(dx51):
      return dx51;
    L1():
      dr46 = tryDispatchBuiltin.1("[", aodf6);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2();
    L2():
      __8 = ldf `[` in base;
      r230 = dyn __8(aodf6, -1.0, <missing>, FALSE);
      goto L0(r230);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx50);
    };
    r232 = dyn rbind(p43, p44);
    check L380() else D111();
  L403():
    dx56 = getTryDispatchBuiltinValue(dr52);
    goto L400(r239, dx56);
  L404():
    goto L74(r248, r250);
  L416():
    r258 = `==`(r257, 0.0);
    c87 = `as.logical`(r258);
    c88 = `||`(c84, c87);
    goto L78(c88);
  L421():
    sym32 = ldf c;
    base32 = ldf c in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L423() else L424();
  L422():
    r260 = dyn base31(<lang c("Cp", "AIC")>, <lang names(aod)>);
    goto L81(r260);
  L487():
    goto L99(r317);
  L500():
    p55 = prom<V +>{
      fit20 = ld fit;
      fit21 = force? fit20;
      checkMissing(fit21);
      return fit21;
    };
    p56 = prom<V +>{
      scale7 = ld scale;
      scale8 = force? scale7;
      checkMissing(scale8);
      return scale8;
    };
    p57 = prom<V +>{
      k7 = ld k;
      k8 = force? k7;
      checkMissing(k8);
      return k8;
    };
    ddd4 = ld `...`;
    r328 = dyn extractAIC1[, , k, `...`](p55, p56, p57, ddd4);
    check L501() else D160();
  D111():
    deopt 462 [r232];
  D127():
    deopt 537 [nc];
  D160():
    deopt 663 [r328];
  L82(r263):
    sym33 = ldf names;
    base33 = ldf names in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L426() else L427();
  L339():
    dx38 = getTryDispatchBuiltinValue(dr36);
    goto L58(dx38);
  L380():
    goto L70(r232);
  L423():
    c91 = ldf c in base;
    r264 = dyn c91("Cp", "AIC");
    check L425() else D123();
  L424():
    r262 = dyn base32("Cp", "AIC");
    goto L82(r262);
  L431():
    nc1 = force? nc;
    checkMissing(nc1);
    c92 = `is.object`(nc1);
    if c92 then L432() else L433(nc1);
  L501():
    st bAIC = r328;
    bAIC18 = ld bAIC;
    check L502() else D161();
  D123():
    deopt 525 [r264];
  D161():
    deopt 665 [bAIC18];
  L83(r266):
    match = ldf match in base;
    r268 = dyn match(r263, r266, NA_INT, NULL);
    check L430() else D126();
  L84(dx61):
    c93 = `is.object`(dx61);
    if c93 then L439() else L440(dx61);
  L425():
    goto L82(r264);
  L426():
    aod40 = ld aod;
    check L428() else D124();
  L427():
    r265 = dyn base33(<sym aod>);
    goto L83(r265);
  L432():
    dr56 = tryDispatchBuiltin.1("[", nc1);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L434() else L433(dr56);
  L433(nc3):
    sym34 = ldf `is.na`;
    base34 = ldf `is.na` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L435() else L436();
  L502():
    bAIC19 = force? bAIC18;
    checkMissing(bAIC19);
    c109 = `is.object`(bAIC19);
    if c109 then L503() else L504(bAIC19);
  D124():
    deopt 528 [aod40];
  D126():
    deopt 535 [r268];
  L85(nc6, r270):
    r272 = `!`(r270);
    __10 = ldf `[` in base;
    r273 = dyn __10(nc6, r272);
    goto L84(r273);
  L86(dx65):
    st nc = dx65;
    order = ldf order;
    check L442() else D130();
  L103(dx78):
    st edf = dx78;
    bAIC22 = ld bAIC;
    check L506() else D162();
  L428():
    aod41 = force? aod40;
    checkMissing(aod41);
    names = ldf names in base;
    r267 = dyn names(aod41);
    check L429() else D125();
  L430():
    goto L81(r268);
  L434():
    dx60 = getTryDispatchBuiltinValue(dr56);
    goto L84(dx60);
  L435():
    nc7 = ld nc;
    check L437() else D128();
  L436():
    r269 = dyn base34(<sym nc>);
    goto L85(nc3, r269);
  L439():
    dr58 = tryDispatchBuiltin.1("[", dx61);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L441() else L440(dr58);
  L440(dx63):
    __11 = ldf `[` in base;
    r274 = dyn __11(dx63, 1);
    goto L86(r274);
  L503():
    dr70 = tryDispatchBuiltin.1("[", bAIC19);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L505() else L504(dr70);
  L504(bAIC21):
    __17 = ldf `[` in base;
    r329 = dyn __17(bAIC21, 1);
    goto L103(r329);
  D125():
    deopt 531 [r267];
  D128():
    deopt 541 [nc3, nc7];
  D130():
    deopt 552 [];
  D162():
    deopt 671 [bAIC22];
  L429():
    goto L83(r267);
  L437():
    nc8 = force? nc7;
    checkMissing(nc8);
    is_na3 = ldf `is.na` in base;
    r271 = dyn is_na3(nc8);
    check L438() else D129();
  L441():
    dx64 = getTryDispatchBuiltinValue(dr58);
    goto L86(dx64);
  L442():
    p46 = prom<V +>{
      aod42 = ld aod;
      aod43 = force? aod42;
      checkMissing(aod43);
      c94 = `is.object`(aod43);
      if c94 then L1() else L2();
    L0(dx67):
      return dx67;
    L1():
      dr60 = tryDispatchBuiltin.1("[", aod43);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2();
    L2():
      nc9 = ld nc;
      nc10 = force? nc9;
      __12 = ldf `[` in base;
      r275 = dyn __12(aod43, <missing>, nc10);
      goto L0(r275);
    L3():
      dx66 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx66);
    };
    r277 = dyn order(p46);
    check L443() else D131();
  L505():
    dx77 = getTryDispatchBuiltinValue(dr70);
    goto L103(dx77);
  L506():
    bAIC23 = force? bAIC22;
    checkMissing(bAIC23);
    c110 = `is.object`(bAIC23);
    if c110 then L507() else L508(bAIC23);
  D129():
    deopt 544 [nc3, r271];
  D131():
    deopt 554 [r277];
  L104(dx80):
    st bAIC = dx80;
    trace9 = ld trace;
    check L510() else D163();
  L438():
    goto L85(nc3, r271);
  L443():
    st o = r277;
    trace7 = ld trace;
    check L444() else D132();
  L507():
    dr72 = tryDispatchBuiltin.1("[", bAIC23);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L509() else L508(dr72);
  L508(bAIC25):
    __18 = ldf `[` in base;
    r330 = dyn __18(bAIC25, 2);
    goto L104(r330);
  D132():
    deopt 556 [trace7];
  D163():
    deopt 677 [trace9];
  L444():
    trace8 = force? trace7;
    checkMissing(trace8);
    c95 = `as.logical`(trace8);
    if c95 then L445() else L87();
  L509():
    dx79 = getTryDispatchBuiltinValue(dr72);
    goto L104(dx79);
  L510():
    trace10 = force? trace9;
    checkMissing(trace10);
    c111 = `as.logical`(trace10);
    if c111 then L511() else L105();
  L87():
    goto L88();
  L88():
    o2 = ld o;
    check L449() else D135();
  L105():
    goto L106();
  L106():
    bAIC26 = ld bAIC;
    check L517() else D168();
  L445():
    print = ldf print;
    check L446() else D133();
  L511():
    cat1 = ldf cat;
    check L512() else D164();
  D133():
    deopt 559 [];
  D135():
    deopt 564 [o2];
  D164():
    deopt 680 [];
  D168():
    deopt 694 [bAIC26];
  L446():
    p47 = prom<V +>{
      aod46 = ld aod;
      aod47 = force? aod46;
      checkMissing(aod47);
      c96 = `is.object`(aod47);
      if c96 then L1() else L2();
    L0(dx69):
      return dx69;
    L1():
      dr62 = tryDispatchBuiltin.1("[", aod47);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L3() else L2();
    L2():
      o = ld o;
      o1 = force? o;
      __13 = ldf `[` in base;
      r278 = dyn __13(aod47, o1, <missing>);
      goto L0(r278);
    L3():
      dx68 = getTryDispatchBuiltinValue(dr62);
      goto L0(dx68);
    };
    r280 = dyn print(p47);
    check L447() else D134();
  L449():
    o3 = force? o2;
    checkMissing(o3);
    c97 = `is.object`(o3);
    if c97 then L450() else L451(o3);
  L512():
    p59 = prom<V +>{
      format1 = ldf format;
      p58 = prom<V +>{
        sym40 = ldf round;
        base40 = ldf round in base;
        guard40 = `==`.4(sym40, base40);
        if guard40 then L1() else L2();
      L0(r332):
        return r332;
      L1():
        round1 = ldf round in base;
        r333 = dyn round1(<sym bAIC>, 2.0);
        goto L0(r333);
      L2():
        r331 = dyn base40(<sym bAIC>, 2.0);
        goto L0(r331);
      };
      r335 = dyn format1(p58);
      return r335;
    };
    p63 = prom<V +>{
      cut_string1 = ldf `cut.string`;
      p62 = prom<V +>{
        deparse1 = ldf deparse;
        p61 = prom<V +>{
          formula1 = ldf formula;
          p60 = prom<V +>{
            fit22 = ld fit;
            fit23 = force? fit22;
            checkMissing(fit23);
            return fit23;
          };
          r338 = dyn formula1(p60);
          return r338;
        };
        r340 = dyn deparse1(p61);
        return r340;
      };
      r342 = dyn cut_string1(p62);
      return r342;
    };
    r344 = dyn cat1[, , , , , sep]("\nStep:  AIC=", p59, "\n", p63, "\n\n", "");
    check L513() else D165();
  L517():
    bAIC27 = force? bAIC26;
    checkMissing(bAIC27);
    AIC = ld AIC;
    check L518() else D169();
  D134():
    deopt 561 [r280];
  D165():
    deopt 688 [r344];
  D169():
    deopt 695 [bAIC27, AIC];
  L89(dx71):
    r283 = `==`(dx71, 1.0);
    c98 = `as.logical`(r283);
    if c98 then L453() else L90();
  L447():
    goto L88();
  L450():
    dr64 = tryDispatchBuiltin.1("[", o3);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L452() else L451(dr64);
  L451(o5):
    __14 = ldf `[` in base;
    r282 = dyn __14(o5, 1);
    goto L89(r282);
  L513():
    flush_console1 = ldf `flush.console`;
    check L514() else D166();
  L518():
    AIC1 = force? AIC;
    checkMissing(AIC1);
    r347 = `+`(AIC1, 1.0E-7);
    r348 = `>=`(bAIC27, r347);
    c112 = `as.logical`(r348);
    if c112 then L519() else L107();
  D166():
    deopt 690 [];
  L90():
    rownames1 = ldf rownames;
    check L456() else D136();
  L107():
    nm4 = ld nm;
    check L522() else D170();
  L452():
    dx70 = getTryDispatchBuiltinValue(dr64);
    goto L89(dx70);
  L453():
    goto L48();
  L514():
    r345 = dyn flush_console1();
    check L515() else D167();
  L519():
    goto L48();
  D136():
    deopt 576 [];
  D167():
    deopt 691 [r345];
  D170():
    deopt 704 [nm4];
  L456():
    p48 = prom<V +>{
      aod50 = ld aod;
      aod51 = force? aod50;
      checkMissing(aod51);
      return aod51;
    };
    r286 = dyn rownames1(p48);
    check L457() else D137();
  L515():
    goto L106();
  L522():
    nm5 = force? nm4;
    checkMissing(nm5);
    r350 = `+`(nm5, 1.0);
    st nm = r350;
    sym41 = ldf list;
    base41 = ldf list in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L523() else L524();
  D137():
    deopt 578 [r286];
  L109(r352):
    l25 = ld models;
    c113 = `is.object`(l25);
    if c113 then L532() else L533(r352, l25);
  L457():
    c99 = `is.object`(r286);
    if c99 then L458() else L459(r286);
  L523():
    mydeviance1 = ldf mydeviance;
    check L525() else D171();
  L524():
    r351 = dyn base41[deviance, `df.resid`, change, AIC](<lang mydeviance(fit)>, <lang `-`(n, edf)>, <sym change>, <sym bAIC>);
    goto L109(r351);
  D171():
    deopt 712 [];
  L92(dx73):
    st change = dx73;
    goto L94();
  L110(dx82):
    st models = dx82;
    sym42 = ldf `is.null`;
    base42 = ldf `is.null` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L536() else L537();
  L458():
    dr66 = tryDispatchBuiltin.1("[", r286);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L460() else L459(dr66);
  L459(r288):
    o6 = ld o;
    check L461() else D138();
  L525():
    p64 = prom<V +>{
      fit24 = ld fit;
      fit25 = force? fit24;
      checkMissing(fit25);
      return fit25;
    };
    r354 = dyn mydeviance1(p64);
    check L526() else D172();
  L532():
    dr74 = tryDispatchBuiltin.0("[[<-", l25, r352);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L534() else L533(r352, dr74);
  L533(r358, l27):
    nm6 = ld nm;
    check L535() else D178();
  D138():
    deopt 579 [r288, o6];
  D172():
    deopt 714 [r354];
  D178():
    deopt 730 [r358, l27, r352, nm6];
  L111(r363):
    r364 = `!`(r363);
    c115 = `as.logical`(r364);
    if c115 then L539() else L112();
  L460():
    dx72 = getTryDispatchBuiltinValue(dr66);
    goto L92(dx72);
  L461():
    o7 = force? o6;
    checkMissing(o7);
    c100 = `is.object`(o7);
    if c100 then L462() else L463(r288, o7);
  L526():
    n6 = ld n;
    check L527() else D173();
  L534():
    dx81 = getTryDispatchBuiltinValue(dr74);
    goto L110(dx81);
  L535():
    nm7 = force? nm6;
    ____2 = ldf `[[<-` in base;
    r361 = dyn ____2(l27, r352, nm7);
    goto L110(r361);
  L536():
    keep6 = ld keep;
    check L538() else D179();
  L537():
    r362 = dyn base42(<sym keep>);
    goto L111(r362);
  D173():
    deopt 716 [n6];
  D179():
    deopt 735 [keep6];
  L93(r292, dx75):
    __16 = ldf `[` in base;
    r294 = dyn __16(r292, dx75);
    goto L92(r294);
  L112():
    goto L114();
  L114():
    goto L115();
  L462():
    dr68 = tryDispatchBuiltin.1("[", o7);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L464() else L463(r288, dr68);
  L463(r290, o9):
    __15 = ldf `[` in base;
    r293 = dyn __15(o9, 1);
    goto L93(r290, r293);
  L527():
    n7 = force? n6;
    checkMissing(n7);
    edf2 = ld edf;
    check L528() else D174();
  L538():
    keep7 = force? keep6;
    checkMissing(keep7);
    c114 = `==`(keep7, NULL);
    goto L111(c114);
  L539():
    keep8 = ldf keep;
    check L540() else D180();
  D174():
    deopt 717 [n7, edf2];
  D180():
    deopt 740 [];
  L464():
    dx74 = getTryDispatchBuiltinValue(dr68);
    goto L93(r288, dx74);
  L528():
    edf3 = force? edf2;
    checkMissing(edf3);
    r355 = `-`(n7, edf3);
    change4 = ld change;
    check L529() else D175();
  L540():
    p65 = prom<V +>{
      fit26 = ld fit;
      fit27 = force? fit26;
      checkMissing(fit27);
      return fit27;
    };
    p66 = prom<V +>{
      bAIC30 = ld bAIC;
      bAIC31 = force? bAIC30;
      checkMissing(bAIC31);
      return bAIC31;
    };
    r367 = dyn keep8(p65, p66);
    check L541() else D181();
  D175():
    deopt 721 [change4];
  D181():
    deopt 743 [r367];
  L529():
    change5 = force? change4;
    checkMissing(change5);
    bAIC28 = ld bAIC;
    check L530() else D176();
  L541():
    l28 = ld `keep.list`;
    c116 = `is.object`(l28);
    if c116 then L542() else L543(r367, l28);
  D176():
    deopt 724 [bAIC28];
  L113(r371, dx84):
    st `keep.list` = dx84;
    goto L114();
  L530():
    bAIC29 = force? bAIC28;
    checkMissing(bAIC29);
    list2 = ldf list in base;
    r356 = dyn list2(r354, r355, change5, bAIC29);
    check L531() else D177();
  L542():
    dr76 = tryDispatchBuiltin.0("[[<-", l28, r367);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L544() else L543(r367, dr76);
  L543(r369, l30):
    nm8 = ld nm;
    check L545() else D182();
  D177():
    deopt 728 [r356];
  D182():
    deopt 745 [r369, l30, r367, nm8];
  L531():
    goto L109(r356);
  L544():
    dx83 = getTryDispatchBuiltinValue(dr76);
    goto L113(r367, dx83);
  L545():
    nm9 = force? nm8;
    ____3 = ldf `[[<-` in base;
    r372 = dyn ____3(l30, r367, nm9);
    goto L113(r369, r372);
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg ____:cls, reg deviance:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg extractAIC:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r4:V, reg c:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    ____ = ldf `%||%`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      deviance = ldf deviance;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn deviance(p);
      return r1;
    };
    p3 = prom<V +>{
      extractAIC = ldf extractAIC;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r4 = dyn extractAIC[, k](p2, 0.0);
      c = `is.object`(r4);
      if c then L1() else L2(r4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r6):
      __ = ldf `[` in base;
      r7 = dyn __(r6, 2);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r9 = dyn ____(p1, p3);
    check L1() else D1();
  D1():
    deopt 4 [r9];
  L1():
    popenv;
    return r9;
  }
}
fun inner2074706417(string) {
  (reg string:*) -+> V { var string:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg string1:*, reg string2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg paste0:cls, reg string3:*, reg string4:V, reg c1:L, reg string6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg p:p(V +), reg r6:V, reg l:*, reg c2:L, reg r8:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r10:V, reg dx3:V, reg ___:cls, reg r11:V, reg string7:*, reg string8:V |
    mkenv;
    st string = string;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r3 = `>`(r1, 1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  L4():
    string1 = ld string;
    check L6() else D0();
  L5():
    r = dyn base(<sym string>);
    goto L0(r);
  D0():
    deopt 2 [string1];
  L1():
    goto L3();
  L3():
    string7 = ld string;
    check L15() else D4();
  L6():
    string2 = force? string1;
    checkMissing(string2);
    length = ldf length in base;
    r2 = dyn length(string2);
    check L7() else D1();
  L8():
    paste0 = ldf paste0;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 20 [string7];
  L7():
    goto L0(r2);
  L9():
    p = prom<V +>{
      string3 = ld string;
      string4 = force? string3;
      checkMissing(string4);
      c1 = `is.object`(string4);
      if c1 then L1() else L2(string4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", string4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(string6):
      __ = ldf `[` in base;
      r4 = dyn __(string6, -1);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn paste0("\n", p);
    check L10() else D3();
  L15():
    string8 = force? string7;
    checkMissing(string8);
    popenv;
    return string8;
  D3():
    deopt 12 [r6];
  L10():
    l = ld string;
    c2 = `is.object`(l);
    if c2 then L11() else L12(r6, l);
  L2(r10, dx3):
    st string = dx3;
    goto L3();
  L11():
    dr2 = tryDispatchBuiltin.0("[<-", l, r6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(r6, dr2);
  L12(r8, l2):
    ___ = ldf `[<-` in base;
    r11 = dyn ___(l2, r6, -1);
    goto L2(r8, r11);
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(r6, dx2);
  }
}
fun inner1107343077(keep) {
  (reg keep:*) -+> V { var keep:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg keep1:*, reg keep2:V, reg c:L, reg keep4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg names:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg keep5:*, reg keep6:V, reg names1:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg keep7:*, reg keep8:V, reg length:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg k1:*, reg k2:V, reg length1:cls, reg r12:V, reg array:cls, reg unlist:cls, reg keep9:*, reg keep10:V, reg p:p(V +), reg r14:V, reg p1:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg nr:*, reg nr1:V, reg nc:*, reg nc1:V, reg c1:cls, reg r18:V, reg p2:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg namr:*, reg namr1:V, reg namc:*, reg namc1:V, reg list:cls, reg r22:V, reg p3:p(V +), reg r24:V |
    mkenv;
    st keep = keep;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st namr = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L5():
    keep1 = ld keep;
    check L7() else D0();
  L6():
    r = dyn base(<lang `<-`(k1, `[[`(keep, 1))>);
    goto L0(r);
  D0():
    deopt 2 [keep1];
  L2(r5):
    st namc = r5;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L7():
    keep2 = force? keep1;
    checkMissing(keep2);
    c = `is.object`(keep2);
    if c then L8() else L9(keep2);
  L12():
    keep5 = ld keep;
    check L14() else D2();
  L13():
    r4 = dyn base1(<sym keep>);
    goto L2(r4);
  D2():
    deopt 13 [keep5];
  L1(dx1):
    st k1 = dx1;
    names = ldf names in base;
    r3 = dyn names(dx1);
    check L11() else D1();
  L3(r8):
    st nc = r8;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L8():
    dr = tryDispatchBuiltin.1("[[", keep2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(keep4):
    __ = ldf `[[` in base;
    r2 = dyn __(keep4, 1);
    goto L1(r2);
  L14():
    keep6 = force? keep5;
    checkMissing(keep6);
    names1 = ldf names in base;
    r6 = dyn names1(keep6);
    check L15() else D3();
  L16():
    keep7 = ld keep;
    check L18() else D4();
  L17():
    r7 = dyn base2(<sym keep>);
    goto L3(r7);
  D1():
    deopt 9 [r3];
  D3():
    deopt 16 [r6];
  D4():
    deopt 20 [keep7];
  L4(r11):
    st nr = r11;
    array = ldf array;
    check L24() else D8();
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L11():
    goto L0(r3);
  L15():
    goto L2(r6);
  L18():
    keep8 = force? keep7;
    checkMissing(keep8);
    length = ldf length in base;
    r9 = dyn length(keep8);
    check L19() else D5();
  L20():
    k1 = ld k1;
    check L22() else D6();
  L21():
    r10 = dyn base3(<sym k1>);
    goto L4(r10);
  D5():
    deopt 23 [r9];
  D6():
    deopt 27 [k1];
  D8():
    deopt 33 [];
  L19():
    goto L3(r9);
  L22():
    k2 = force? k1;
    checkMissing(k2);
    length1 = ldf length in base;
    r12 = dyn length1(k2);
    check L23() else D7();
  L24():
    p1 = prom<V +>{
      unlist = ldf unlist;
      p = prom<V +>{
        keep9 = ld keep;
        keep10 = force? keep9;
        checkMissing(keep10);
        return keep10;
      };
      r14 = dyn unlist[, recursive](p, FALSE);
      return r14;
    };
    p2 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      nr = ld nr;
      nr1 = force? nr;
      checkMissing(nr1);
      nc = ld nc;
      nc1 = force? nc;
      checkMissing(nc1);
      c1 = ldf c in base;
      r18 = dyn c1(nr1, nc1);
      goto L0(r18);
    L2():
      r16 = dyn base4(<sym nr>, <sym nc>);
      goto L0(r16);
    };
    p3 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      namr = ld namr;
      namr1 = force? namr;
      checkMissing(namr1);
      namc = ld namc;
      namc1 = force? namc;
      checkMissing(namc1);
      list = ldf list in base;
      r22 = dyn list(namr1, namc1);
      goto L0(r22);
    L2():
      r20 = dyn base5(<sym namr>, <sym namc>);
      goto L0(r20);
    };
    r24 = dyn array(p1, p2, p3);
    check L25() else D9();
  D7():
    deopt 30 [r12];
  D9():
    deopt 37 [r24];
  L23():
    goto L4(r12);
  L25():
    popenv;
    return r24;
  }
}
fun inner791719357(models, fit, object, usingCp) {
  (reg models:*, reg fit:*, reg object:*, reg usingCp:*) -+> V { var models:*, var fit:*, var object:*, var usingCp:*, reg usingCp_isMissing:L, reg usingCp_orDefault:*, reg sapply:cls, reg models1:*, reg models2:V, reg p:p(V +), reg __:*, reg __1:V, reg p1:p(V +), reg r2:V, reg sapply1:cls, reg models3:*, reg models4:V, reg p2:p(V +), reg __2:*, reg __3:V, reg p3:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg diff:cls, reg rd:*, reg rd1:V, reg p4:p(V +), reg r11:V, reg abs:cls, reg r12:V, reg c:cls, reg r13:V, reg sapply2:cls, reg models5:*, reg models6:V, reg p5:p(V +), reg __4:*, reg __5:V, reg p6:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg diff1:cls, reg rdf:*, reg rdf1:V, reg p7:p(V +), reg r20:V, reg c1:cls, reg r21:V, reg sapply3:cls, reg models7:*, reg models8:V, reg p8:p(V +), reg __6:*, reg __7:V, reg p9:p(V +), reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg deparse:cls, reg formula:cls, reg object1:*, reg object2:V, reg p10:p(V +), reg r28:V, reg p11:p(V +), reg r30:V, reg deparse1:cls, reg formula1:cls, reg fit1:*, reg fit2:V, reg p12:p(V +), reg r32:V, reg p13:p(V +), reg r34:V, reg c2:cls, reg r35:V, reg data_frame:cls, reg I:cls, reg change:*, reg change1:V, reg p14:p(V +), reg r37:V, reg p15:p(V +), reg ddf:*, reg ddf1:V, reg p16:p(V +), reg dd:*, reg dd1:V, reg p17:p(V +), reg rdf2:*, reg rdf3:V, reg p18:p(V +), reg rd2:*, reg rd3:V, reg p19:p(V +), reg AIC:*, reg AIC1:V, reg p20:p(V +), reg r44:V, reg usingCp1:*, reg usingCp2:V, reg c3:L, reg colnames:cls, reg aod:*, reg aod1:V, reg p21:p(V +), reg r46:V, reg l:*, reg c4:L, reg r48:S, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg cn:*, reg cn1:V, reg r51:V, reg ___:cls, reg r52:V, reg cn2:*, reg cn3:V, reg l3:*, reg colnames__:cls, reg r53:V, reg heading:*, reg heading1:V, reg l4:*, reg attr__:cls, reg r54:V, reg aod2:*, reg aod3:V, reg l5:*, reg c5:L, reg aod5:V, reg l7:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r55:V, reg fit3:*, reg fit4:V |
    mkenv;
    st models = models;
    st fit = fit;
    st object = object;
    usingCp_isMissing = missing.0(usingCp);
    if usingCp_isMissing then L0(FALSE) else L0(usingCp);
  L0(usingCp_orDefault):
    st usingCp = usingCp_orDefault;
    sapply = ldf sapply;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      models1 = ld models;
      models2 = force? models1;
      checkMissing(models2);
      return models2;
    };
    p1 = prom<V +>{
      __ = ld `[[`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r2 = dyn sapply(p, p1, "change");
    check L9() else D1();
  D1():
    deopt 5 [r2];
  L9():
    st change = r2;
    sapply1 = ldf sapply;
    check L10() else D2();
  D2():
    deopt 8 [];
  L10():
    p2 = prom<V +>{
      models3 = ld models;
      models4 = force? models3;
      checkMissing(models4);
      return models4;
    };
    p3 = prom<V +>{
      __2 = ld `[[`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    r5 = dyn sapply1(p2, p3, "deviance");
    check L11() else D3();
  D3():
    deopt 12 [r5];
  L11():
    st rd = r5;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(r7):
    st dd = r7;
    sapply2 = ldf sapply;
    check L20() else D8();
  L12():
    sym1 = ldf abs;
    base1 = ldf abs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L13():
    r6 = dyn base(NA_LGL, <lang abs(diff(rd))>);
    goto L1(r6);
  D8():
    deopt 29 [];
  L2(r9):
    c = ldf c in base;
    r13 = dyn c(NA_LGL, r9);
    check L19() else D7();
  L14():
    diff = ldf diff;
    check L16() else D4();
  L15():
    r8 = dyn base1(<lang diff(rd)>);
    goto L2(r8);
  L20():
    p5 = prom<V +>{
      models5 = ld models;
      models6 = force? models5;
      checkMissing(models6);
      return models6;
    };
    p6 = prom<V +>{
      __4 = ld `[[`;
      __5 = force? __4;
      checkMissing(__5);
      return __5;
    };
    r16 = dyn sapply2(p5, p6, "df.resid");
    check L21() else D9();
  D4():
    deopt 20 [];
  D7():
    deopt 26 [r13];
  D9():
    deopt 33 [r16];
  L16():
    p4 = prom<V +>{
      rd = ld rd;
      rd1 = force? rd;
      checkMissing(rd1);
      return rd1;
    };
    r11 = dyn diff(p4);
    check L17() else D5();
  L19():
    goto L1(r13);
  L21():
    st rdf = r16;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  D5():
    deopt 22 [r11];
  L3(r18):
    st ddf = r18;
    sapply3 = ldf sapply;
    check L27() else D13();
  L17():
    abs = ldf abs in base;
    r12 = dyn abs(r11);
    check L18() else D6();
  L22():
    diff1 = ldf diff;
    check L24() else D10();
  L23():
    r17 = dyn base2(NA_LGL, <lang diff(rdf)>);
    goto L3(r17);
  D6():
    deopt 24 [r12];
  D10():
    deopt 39 [];
  D13():
    deopt 46 [];
  L18():
    goto L2(r12);
  L24():
    p7 = prom<V +>{
      rdf = ld rdf;
      rdf1 = force? rdf;
      checkMissing(rdf1);
      return rdf1;
    };
    r20 = dyn diff1(p7);
    check L25() else D11();
  L27():
    p8 = prom<V +>{
      models7 = ld models;
      models8 = force? models7;
      checkMissing(models8);
      return models8;
    };
    p9 = prom<V +>{
      __6 = ld `[[`;
      __7 = force? __6;
      checkMissing(__7);
      return __7;
    };
    r24 = dyn sapply3(p8, p9, "AIC");
    check L28() else D14();
  D11():
    deopt 41 [r20];
  D14():
    deopt 50 [r24];
  L25():
    c1 = ldf c in base;
    r21 = dyn c1(NA_LGL, r20);
    check L26() else D12();
  L28():
    st AIC = r24;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  D12():
    deopt 43 [r21];
  L4(r26):
    st heading = r26;
    data_frame = ldf `data.frame`;
    check L36() else D20();
  L26():
    goto L3(r21);
  L29():
    deparse = ldf deparse;
    check L31() else D15();
  L30():
    r25 = dyn base3("Stepwise Model Path \nAnalysis of Deviance Table", "\nInitial Model:", <lang deparse(formula(object))>, "\nFinal Model:", <lang deparse(formula(fit))>, "\n");
    goto L4(r25);
  D15():
    deopt 57 [];
  D20():
    deopt 70 [];
  L31():
    p11 = prom<V +>{
      formula = ldf formula;
      p10 = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        return object2;
      };
      r28 = dyn formula(p10);
      return r28;
    };
    r30 = dyn deparse(p11);
    check L32() else D16();
  L36():
    p15 = prom<V +>{
      I = ldf I;
      p14 = prom<V +>{
        change = ld change;
        change1 = force? change;
        checkMissing(change1);
        return change1;
      };
      r37 = dyn I(p14);
      return r37;
    };
    p16 = prom<V +>{
      ddf = ld ddf;
      ddf1 = force? ddf;
      checkMissing(ddf1);
      return ddf1;
    };
    p17 = prom<V +>{
      dd = ld dd;
      dd1 = force? dd;
      checkMissing(dd1);
      return dd1;
    };
    p18 = prom<V +>{
      rdf2 = ld rdf;
      rdf3 = force? rdf2;
      checkMissing(rdf3);
      return rdf3;
    };
    p19 = prom<V +>{
      rd2 = ld rd;
      rd3 = force? rd2;
      checkMissing(rd3);
      return rd3;
    };
    p20 = prom<V +>{
      AIC = ld AIC;
      AIC1 = force? AIC;
      checkMissing(AIC1);
      return AIC1;
    };
    r44 = dyn data_frame[Step, Df, Deviance, `Resid. Df`, `Resid. Dev`, AIC, `check.names`](p15, p16, p17, p18, p19, p20, FALSE);
    check L37() else D21();
  D16():
    deopt 59 [r30];
  D21():
    deopt 85 [r44];
  L32():
    deparse1 = ldf deparse;
    check L33() else D17();
  L37():
    st aod = r44;
    usingCp1 = ld usingCp;
    check L38() else D22();
  D17():
    deopt 62 [];
  D22():
    deopt 87 [usingCp1];
  L33():
    p13 = prom<V +>{
      formula1 = ldf formula;
      p12 = prom<V +>{
        fit1 = ld fit;
        fit2 = force? fit1;
        checkMissing(fit2);
        return fit2;
      };
      r32 = dyn formula1(p12);
      return r32;
    };
    r34 = dyn deparse1(p13);
    check L34() else D18();
  L38():
    usingCp2 = force? usingCp1;
    checkMissing(usingCp2);
    c3 = `as.logical`(usingCp2);
    if c3 then L39() else L5();
  D18():
    deopt 64 [r34];
  L5():
    goto L7();
  L7():
    heading = ld heading;
    check L50() else D29();
  L34():
    c2 = ldf c in base;
    r35 = dyn c2("Stepwise Model Path \nAnalysis of Deviance Table", "\nInitial Model:", r30, "\nFinal Model:", r34, "\n");
    check L35() else D19();
  L39():
    colnames = ldf colnames;
    check L40() else D23();
  D19():
    deopt 67 [r35];
  D23():
    deopt 90 [];
  D29():
    deopt 112 [heading];
  L35():
    goto L4(r35);
  L40():
    p21 = prom<V +>{
      aod = ld aod;
      aod1 = force? aod;
      checkMissing(aod1);
      return aod1;
    };
    r46 = dyn colnames(p21);
    check L41() else D24();
  L50():
    heading1 = force? heading;
    checkMissing(heading1);
    l4 = ld aod;
    attr__ = ldf `attr<-`;
    check L51() else D30();
  D24():
    deopt 92 [r46];
  D30():
    deopt 115 [heading1, l4, heading1];
  L41():
    st cn = r46;
    l = ld cn;
    c4 = `is.object`(l);
    if c4 then L42() else L43("Cp", l);
  L51():
    r54 = dyn attr__(l4, NULL, "heading", heading1);
    check L52() else D31();
  D31():
    deopt 118 [heading1, r54];
  L6(dx1):
    st cn = dx1;
    cn2 = ld cn;
    check L46() else D26();
  L42():
    dr = tryDispatchBuiltin.0("[<-", l, "Cp");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L44() else L43("Cp", dr);
  L43(r48, l2):
    cn = ld cn;
    check L45() else D25();
  L52():
    st aod = r54;
    aod2 = ld aod;
    check L53() else D32();
  D25():
    deopt 97 [r48, l2, "Cp", cn];
  D26():
    deopt 103 [cn2];
  D32():
    deopt 120 [aod2];
  L44():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L45():
    cn1 = force? cn;
    checkMissing(cn1);
    r51 = `==`(cn1, "AIC");
    ___ = ldf `[<-` in base;
    r52 = dyn ___(l2, "Cp", r51);
    goto L6(r52);
  L46():
    cn3 = force? cn2;
    checkMissing(cn3);
    l3 = ld aod;
    colnames__ = ldf `colnames<-`;
    check L47() else D27();
  L53():
    aod3 = force? aod2;
    checkMissing(aod3);
    l5 = ld fit;
    c5 = `is.object`(l5);
    if c5 then L55() else L56(aod3, l5);
  D27():
    deopt 106 [cn3, l3, cn3];
  L47():
    r53 = dyn colnames__(l3, NULL, cn3);
    check L48() else D28();
  L54(dx3):
    st fit = dx3;
    fit3 = ld fit;
    check L58() else D33();
  L55():
    dr2 = tryDispatchBuiltin.0("$<-", l5, aod3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(aod3, dr2);
  L56(aod5, l7):
    r55 = `$<-`(l7, <sym anova>, aod3);
    goto L54(r55);
  D28():
    deopt 108 [cn3, r53];
  D33():
    deopt 125 [fit3];
  L48():
    st aod = r53;
    goto L7();
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L54(dx2);
  L58():
    fit4 = force? fit3;
    checkMissing(fit4);
    popenv;
    return fit4;
  }
}