from collections import deque
queue = deque(["Eric","Jorn","Micheal"])
queue.append("Terry")
queue.append("Graham")
print(queue)
queue.popleft()
print(queue)
queue.popleft()
print(queue)
