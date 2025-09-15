import queue

with open("leer.txt", "r") as datos:
    valores = []
    for linea in datos:
        valores.append([int(x) for x in linea.strip().split(",")])
    print(valores)


def verificar_push(lineas):
    
    pilaEstados = queue.Queue()
    for linea in lineas:
        instr = linea.split()
        if (instr[0].upper() == "PUSH"):
            pilaEstados.put(instr[1])
        elif (instr[0].upper() == "POP"):
            if (pilaEstados.empty()):
                raise Exception(f"Problema al tratar de obtener el estado {instr[1]} al no haber nada guardado")
            estadoGuardado = pilaEstados.get()
            estadoDondeGuarda = instr[1]
            if (estadoGuardado != estadoDondeGuarda):
                raise Exception(f"Estado {estadoDondeGuarda} difiere de {estadoGuardado}")
            

def verificarUsoDeRegistros():
    
