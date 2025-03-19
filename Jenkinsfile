pipeline {
    agent any
    
    stages {
        stage('Checkout') {
            steps {
                git 'https://github.com/Kymelios/Git_learning.git'
            }
        }
        
        stage('Build') {
            steps {
                sh 'rm -rf build && mkdir build && cd build && cmake .. && make'
            }
        }
        
        stage('Test') {
            steps {
                sh 'cd build && ctest'
            }
        }
    }
}
