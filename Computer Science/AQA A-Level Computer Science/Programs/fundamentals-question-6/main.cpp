#include <iostream>

class CircularQueue{
  public:
    CircularQueue(int size) :
      m_size(size),
      m_array(new char[size]),
      m_front(0)
      {
        char base[] = {'E', 'C', 'F'};
        int base_size = sizeof(base) / sizeof(base[0]);
        for(int i = 0; i < base_size; i++){
          m_array[i] = base[i];
        }

        m_rear = base_size - 1;
      }
    
    std::string printQueue(){
      std::string out;
      
      out += "Array: ";
      for(int i = 0; i < m_size; i++){
        if(i != 0){
          out += ", ";
        }

        if(m_array[i] == '\0'){
          out += "NULL";
        } else {
          out += m_array[i];
        }
      }
      out += "\n";
      
      out += "Front: " + std::to_string(m_front) + "\n";
      out += "Rear: " + std::to_string(m_rear) + "\n";

      return out;
    }

    void add(char in){
      // Incrememnt Rear Pointer, if at end, return to 0
      if(m_rear == m_size){
        m_rear = 0;
      } else {
        m_rear++;
      }
      
      // Add data to front of array
      m_array[m_rear] = in;
    }

    void remove(){
      // Remove data
      m_array[m_front] = '\0';

      // Incrememnt Front Pointer, if at end, return 0
      if(m_front == m_size){
        m_front = 0;
      } else {
        m_front++;
      }
    }

  private:
    int m_size;
    char* m_array;
    int m_front;
    int m_rear;
};

int main(){
  CircularQueue circle(6);
  
  char inputs[] = {'A', 'D', 'G'};
  for(char c : inputs){
    circle.add(c);
    std::cout << circle.printQueue() << std::endl;
  }
}

// OUTPUT:
//   Array: E, C, F, A, NULL, NULL
//   Front: 0
//   Rear: 3
//
//   Array: E, C, F, A, D, NULL
//   Front: 0
//   Rear: 4
//
//   Array: E, C, F, A, D, G
//   Front: 0
//   Rear: 5
